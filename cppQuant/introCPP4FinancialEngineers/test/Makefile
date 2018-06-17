CC=g++
<<<<<<< HEAD
CFLAG=-I ../lib/
DEP=../lib/sum.cpp 
GDEP= ../lib/Gsum.cpp 
IDEP= ../lib/Inequalities.cpp 
PersonDEP = ../lib/Person.cpp 
EODEP=../lib/EuropeanOption.cpp 

EuropeanOption:
	$(CC) $(CFLAG) -o EuropeanOptionTester EuropeanOptionTester.cpp  $(EODEP) 

Person:
	$(CC) $(CFLAG) -o PersonTester PersonTester.cpp $(PersonDEP)

sumTester:
	$(CC) $(CFLAG) -o sumTester sumTester.cpp $(DEP)


GsumTester:
	$(CC) $(CFLAG) -o GumsTester GsumTester.cpp $(GDEP)


InequalitiesTester:
	$(CC) $(CFLAG) InequalitiesTester.cpp $(IDEP) -o InequalitiesTester


clean:
	rm *.o
=======
CFLAG=-I ../lib/ ../nonlinear/
DEP=../lib/sum.cpp
GDEP= ../lib/Gsum.cpp
IDEP= ../lib/Inequalities.cpp 
PersonDEP = ../lib/Person.cpp
EODEP= ../lib/EuropeanOption.cpp
BondPricing= ../lib/SimpleBondPricing.cpp
Bisection = ../nonlinear/Bisection.cpp

Bisection:
	$(CC) $(CFLAG)  -o BisectionTester BisectionTester.cpp $(Bisection)


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
>>>>>>> 1d96819a1f59ce0c2a3fcb93a16b4911057af71c
