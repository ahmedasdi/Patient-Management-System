/*
 * Register.h
 *
 *  Created on: Nov 2, 2016
 *      Author: Ahmed
 */

#ifndef REGISTER_H_
#define REGISTER_H_
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <fstream>

const int MAX = 2;

class Register {
private:
	int queue[MAX];
	int head;
	int tail;
	int value;
public:
	Register();
	virtual ~Register();
};

bool isFull();
bool isEmpty();
bool RegPatient(int);
bool ExamineP(int);
void Display();
#endif /* REGISTER_H_ */
