from zipline.api import order, record, symbol

def initialize(context):
	context.asset = symbol('AAPL')

def handle_data(context, data):
	order(context.asset, 10)
	record(AAPL=data.current(context.asset, 'price'))

def _test_args():
	import pandas as pd
	
	return {
		'start': pd.Timestamp('2016-01-01', tz='utc'),
		'end' : pd.Timestamp('2017-12-30', tz='utc'),
	}

