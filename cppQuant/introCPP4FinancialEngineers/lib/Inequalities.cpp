#include"Inequalities.hpp"

double max(double x, double y){
	return x > y ? x : y;
}

double min(double x, double y){
	return x > y ? y : x;
}

double max(double x, double y, double z){
	return max(max(x, y), z);
}

double min(double x, double y, double z){
	return min(min(x, y), z);
}
