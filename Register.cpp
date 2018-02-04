/*
 * Register.cpp
 *
 *  Created on: Nov 2, 2016
 *      Author: Ahmed
 */
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <fstream>
#include "Register.h"

Register::Register() {
	// TODO Auto-generated constructor stub

}

Register::~Register() {
	// TODO Auto-generated destructor stub
}

bool Register::isFull(){
	if(tail == MAX){
		if(head ==- 0)
			return true;
		else
			return false;
	}
	else{
		if(head == (tail+1))
			return true;
		else
			return false;
	}
}

bool Register::isEmpty(){
	if(head == tail)
		return true;
	else
		return false;
}

bool Register::RegPatient(int value){
	if(true == isFull(queue, head , tail)){
		return false;
	}
	queue[tail] = value;
	if(tail == MAX)
		tail = 0;
	else
		++tail;
	return true;
}

bool Register::ExamineP(int value){
	if(true == isEmpty(queue, head, tail)){
		return false;
	}
	value = queue[head];
	if(head == MAX)
		head = 0;
	else
		++head;
	return true;
}

void Display(int queue[], int head, int tail){
	if(true == isEmpty(queue, head, tail)){
		cout << "Patient list is empty. Nothing to Display" << endl;
		return;
	}

	int size = 0;
	if(head < tail)
	size = tail = head;
	else
		size = (MAX - head +1) + (tail - 0);
}
