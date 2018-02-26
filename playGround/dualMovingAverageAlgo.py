
from zipline.api import order_target, record, symbol

def initialize(context):
	context.i = 0;
	context.asset = symbol('AAPL')

def handle_data(context, data):
	#skip first 300 days to get full windos
	context.i += 1;
	if context.i < 300:
		return

	# compute averages
	# data.history() has to be called with the same params
	# from above and returns a pandas data frame
	short_mavg = data.history(context.asset, 'price', bar_count=100, frequency='1d').mean()
	long_mavg = data.history(context.asset, 'price', bar_count=300, frequency='1d').mean()

	#trading logic
	if short_mavg > long_mavg :
		#order_targer orders as many shares as needed to
		# achieve the desired number of shares.
		order_target(context.asset, 100)
	elif short_mavg < long_mavg:
		order_target(context.asset, 0)

	# save values for later inspection
	record(AAPL = data.current(context.asset, 'price'), short_mavg= short_mavg, long_mavg = long_mavg)

