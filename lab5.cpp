//============================================================================
// Name        : lab5.cpp
// Author      : Ahmed Asdi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <fstream>

using namespace std;

int i = 0;
int optionchosen;
int main() {

	cout << "=================" << endl ;

		cout << "There are currently " << i << " patient(s) in the list" << endl << endl ;
		cout << "Please choose an option: " << endl ;
		cout << "1. Register Patient" << endl ;
		cout << "2. Examine Patient" << endl ;
		cout << "3. Display Patients" << endl ;
		cout << "4. Quit" << endl;

		cin >> optionchosen;
			cin.clear(); cin.ignore(INT_MAX, '\n');

do{
			if (optionchosen == 1) {
				RegPatient();
				i++;
			}
			else if(optionchosen == 2){
				ExamineP();
			}
			else if(optionchosen == 3){
				Display();
				}
			else if (optionchosen == 4){
			cout << "Thank you for using this very cool program!";
					i = 100;
			}
			else{
			cout << "Please choose a valid option";
		}
}while (i < 10);

cout <<" The line is full!";

	return 0;
}
