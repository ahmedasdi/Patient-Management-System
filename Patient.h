/*
 * Patient.h
 *
 *  Created on: Nov 2, 2016
 *      Author: Ahmed
 */

#ifndef PATIENT_H_
#define PATIENT_H_
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <fstream>

class Patient {

private:
	string name;
	enum condition();
	int hcn;
	double dilation;
public:
	Patient();
	virtual ~Patient();
};

#endif /* PATIENT_H_ */
