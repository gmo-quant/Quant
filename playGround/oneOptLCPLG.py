
# profit/loss graph for one option long call strategy


import pandas as pd
import matplotlib.pyplot as plt

def generatePLSeries(strike, currentPrice, initPremium):
	instrinsicVal = currentPrice -  strike;
	zeroInstrinsic = instrinsicVal  < 0;
	instrinsicVal[zeroInstrinsic] = 0;
	plSeries = instrinsicVal - initPremium;
	
	return plSeries

def organizeData(price, plSeries):
	df = pd.DataFrame([price, plSeries]);
	data = df.transpose()
	data.columns = ['Price', 'PL']
	return data

def plotOneLCPLG(data):
	
	fig = plt.figure(figsize=(16, 10))
	ax = fig.add_subplot(1,1,1)
	ax.spines['bottom'].set_position('zero')
	plt.title('PLG for one option long call strategy')
	plt.ylabel("Profit/Loss")
	plt.xlabel("stock price @ expiration")
	plt.legend()
	plt.plot(data.Price, data.PL)
	plt.show()

initPremium = 5
strike = 100
msft = pd.read_csv("../data/msft_2000_2017.csv", index_col=0, parse_dates=True)

#price = msft.Close['2009-02':'2017-03']
price = pd.Series([110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95])

plSeries = generatePLSeries(strike, price,initPremium)
data = organizeData(price, plSeries);
plotOneLCPLG(data);
