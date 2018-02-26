
# profit/loss graph for one option long call strategy


import pandas as pd
import matplotlib.pyplot as plt

def generatePLSeries(strike, currentPrice, initPremium):
	instrinsicVal = currentPrice -  strike;
	zeroInstrinsic = instrinsicVal  < 0;
	instrinsicVal[zeroInstrinsic] = 0;
	plSeries = instrinsicVal - initPremium;
	
	return plSeries

def plotOneLCPLG(plSeries):
	
	plt.figure(figsize=(16, 10))
	plt.title('PLG for one option long call strategy')
	plt.ylabel("Profit/Loss")
	plt.xlabel("stock price @ expiration")
	plSeries.xhline(y=0, color='g', linestyle='-')
	plSeries.plot()
	plt.show()

msft = pd.read_csv("../data/msft_2000_2017.csv", index_col=0, parse_dates=True)
price = msft.Close['2002-02':'2002-03']
plSeries = price.copy()
initPremium = 2
strike = 31
instrinsicVal = plSeries - strike
zeroInstrinsic = instrinsicVal < 0
instrinsicVal[zeroInstrinsic] = -initPremium 



#price = [110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95]
'''
priceSerise = pd.Series(price)
priceSerise -= 100
priceSerise[priceSerise < 0] = -5 
#plotOneLCPLG(instrinsicVal)
plotOneLCPLG(priceSerise)
'''

plotOneLCPLG(instrinsicVal)
