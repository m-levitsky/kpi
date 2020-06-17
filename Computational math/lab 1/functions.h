/*
 * functions.h
 *
 *  Created on: Sep 14, 2019
 *      Author: misha
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <iostream>
#include <cmath>

using namespace std;

float absError(float x, float y)
{
	return abs(x-y);
}

float maxAbsError(float absError, uint precision)
{
	return ceil(absError*precision)/precision;
}

float maxPercentError(float maxAbsError, float x)
{
	return abs(maxAbsError/x);
}

float percent(float maxPercentError)
{
	return maxPercentError * 100;
}

bool comparison(float first, float second)
{
	return first < second ? true : false; //true - число 1 точнее
}




#endif /* FUNCTIONS_H_ */
