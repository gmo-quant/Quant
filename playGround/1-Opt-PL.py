#
# draw  a Profit/ loss diragram for a one option strategy.
#

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt


def plotCallPLG(stockPrice, plSeries):
		
	plt.figure(figsize=(16, 10))
	plt.title('PLG for call')
	plt.plot(stockPrice, plSeries)
	plt.ylabel("Profit/Loss")
	plt.xlabel("stock price @ expiration")
	plt.axhline(y=0, color='g', linestyle='-')
	plt.show()
def generateCallPLSeries(stockPrice, strikePrice, initPremium):

	# need to implement a pandas.Series version 
	# later on
	# currently, implement in simple list manner
	#plSeries = pd.Series(stockPrice['2002-02':'2002-12'])
	#plSeries=stockPrice['2002-02':'2002-12']
	#for price in plSeries: 
	plSeries = []
	for price in stockPrice:
		if isInTheMoney(price, strike):
			plSeries.append(price)
		else:
			plSeries.append(0)
	return plSeries

def isInTheMoney(price, strike):
	if price > strike:
		return True
	else:
		return False


msft = pd.read_csv("../data/msft_2000_2017.csv", index_col=0, parse_dates=True)

plSeries = generateCallPLSeries(msft.Close['2002-02':'2002-12'],1, 2 )

plotCallPLG(plSeries)
