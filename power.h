#pragma once
#include <math.h>
#include <iostream>

using namespace std;

class Power {
	private:
		float numToElevate=2;
		float powerValue=3;

public:
	void setNums(float numToElevate, float power) {
		this->numToElevate = numToElevate;
		this->powerValue = power;
	}
	void calculate() {
		cout << pow(numToElevate, powerValue);
	}
};