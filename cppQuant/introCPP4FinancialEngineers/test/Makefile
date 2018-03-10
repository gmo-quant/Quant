CC=g++
CFLAG=-I ../lib/
DEP=../lib/sum.cpp ../lib/sum.hpp
GDEP= ../lib/Gsum.cpp ../lib/Gsum.hpp
IDEP= ../lib/Inequalities.cpp ../lib/Inequalities.hpp
PersonDEP = ../lib/Person.cpp ../lib/Person.hpp

Person:
	$(CC) $(CFLAG) PersonTester.cpp $(PersonDEP) -o PersonTester

sumTester:
	$(CC) $(CFLAG) sumTester.cpp $(DEP) -o sumTester


GsumTester:
	$(CC) $(CFLAG) GsumTester.cpp $(GDEP) -o GsumTester


InequalitiesTester:
	$(CC) $(CFLAG) InequalitiesTester.cpp $(IDEP) -o InequalitiesTester
