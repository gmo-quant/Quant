/*
 * =====================================================================================
 *
 *       Filename:  EuropeanOption.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/10/2018 02:43:51 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Guangzhuan Mo (Morris), quant.fin.mo@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#include"EuropeanOption.hpp"

EuropeanOption::EuropeanOption(){
	init();
}

EuropeanOption::EuropeanOption(const EuropeanOption& option2){
	copy(option2);
}

EuropeanOption::Europ
