#include"sum.hpp"

double sum(double x, double y){
	return x+y;
}

double sum(double x, double y, double z){
	return sum(x, y) + z;
}
