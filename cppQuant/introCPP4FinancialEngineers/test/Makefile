CC=g++
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
