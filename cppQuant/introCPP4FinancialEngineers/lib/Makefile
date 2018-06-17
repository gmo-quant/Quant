CC=g++
CFLAG= -I .
DEPS = sum.hpp Gsum.hpp Inequalities.hpp EuropeanOption.hpp

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) 

.PHONY: clean

clean:
	rm *.o
