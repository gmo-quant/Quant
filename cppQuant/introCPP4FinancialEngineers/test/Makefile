CC=g++
CFLAG=-I ../lib/
DEP=../lib/sum.cpp
GDEP= ../lib/Gsum.cpp
IDEP= ../lib/Inequalities.cpp 
PersonDEP = ../lib/Person.cpp
EODEP= ../lib/EuropeanOption.cpp
BondPricing= ../lib/SimpleBondPricing.cpp

SimpleBondPricing:
	$(CC) $(CFLAG)  -o SimpleBondPricingTester SimpleBondPricingTester.cpp $(BondPricing)

EuropeanOption:
	$(CC) $(CFLAG)  -o EuropeanOptionTester EuropeanOptionTester.cpp $(EODEP)

Person:
	$(CC) $(CFLAG)  -o PersonTester PersonTester.cpp $(PersonDEP)

sumTester:
	$(CC) $(CFLAG)  -o sumTester sumTester.cpp $(DEP)


GsumTester:
	$(CC) $(CFLAG) -o GsumTester GsumTester.cpp $(GDEP) 


InequalitiesTester:
	$(CC) $(CFLAG) -o InequalitiesTester InequalitiesTester.cpp $(IDEP) 
