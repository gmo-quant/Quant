CC=g++
Utilities= ../../Utilities/
CFLAG=-I $(Utilities)DateAndTime/
Dep=$(Utilities)DateAndTime/DatasimDate.cpp
gi:
	$(CC) $(CFLAG) -o GenericInequalities GenericInequalities.cpp GenericInequalitiesTester.cpp

person: 
	$(CC) $(CFLAG) -o person Person.cpp PersonTester.cpp $(Dep)
clean:
	rm gi person