import zipline as  zp
import zipline.utils.factory as zpf
from zipline.api import order, record, symbol
class BuyApple(zp.TradingAlgorithm):
	trace = False
	
	def __init__(self, trace=False):
		BuyApple.trace = trace
		super(BuyApple , self).__init__()

	def initialize(context):
		if BuyApple.trace: print("---> initialize")
		if BuyApple.trace: print(context)
		if BuyApple.trace: print("<<==== initialize")

	def handle_data(self, context):
		if BuyApple.trace: print("---> handle_data")
		if BuyApple.trace : print(context)
		self.order(symbol('MSFT'), 1)
		if BuyApple.trace: print("<<<==== handle_data")
