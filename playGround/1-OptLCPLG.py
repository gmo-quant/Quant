# profit/loss graph for 1 option long call strategy

# implement using list, use Series later on

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt


def plotCallPLG(stockPrice, plSeries):
		
	plt.figure(figsize=(16, 10))
	plt.title('PLG for one option long call strategy')
	plt.plot(stockPrice, plSeries)
	plt.ylabel("Profit/Loss")
	plt.xlabel("stock price @ expiration")
	plt.axhline(y=0, color='g', linestyle='-')
	plt.show()

def generateCallPLSeries(stockPrice, strike, initPremium):

	plSeries = []
	for price in stockPrice:
		#if isInTheMoney(price, strike):
		iv = instrinsicVal(price, strike)
		if iv  > 0:
			pl = iv - initPremium;
			plSeries.append(pl)
		else:
			plSeries.append(-initPremium)
	return plSeries

def instrinsicVal(price, strike):
	instrinsic = price - strike;
	if instrinsic <= 0:
		return 0;
	else:
		return instrinsic

def isInTheMoney(price, strike):
	if price > strike:
		return True
	else:
		return False


msft = pd.read_csv("../data/msft_2000_2017.csv", index_col=0, parse_dates=True)
price = msft.Close['2002-02':'2002-03']
plSeries = generateCallPLSeries(price ,29, 2 )

#price = [110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95]
#plSeries = generateCallPLSeries(price, 100, 5)
plotCallPLG(msft, plSeries)
