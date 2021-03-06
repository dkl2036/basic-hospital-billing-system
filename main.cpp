
//**********************************************************
// Author: Danielle Lamb and Kirklyn Milgrim
// Date: February 26, 2019
// Purpose: Ask user to enter data, stores data in variables, and prints to user.
//**********************************************************

#include <iostream>
#include <string>
#include "personType.h"
#include "patientType.h"
#include "doctorType.h"
#include "billType.h"
#include "dateType.h"

using namespace std;

int main() {

	patientType newPatient; // created object for patientType class
	billType bill; // created object for billType class

	// variable declaration
	string id, fName, lName, docFrName, docLaName, spl;

	// User enters data and is stored into variable
	cout << "Please enter patient's ID: ";
	cin >> id;
	cout << endl;

	// User enters data and is stored into variable
	cout << "Please enter patient's first name: ";
	cin >> fName;
	cout << endl;

	// User enters data and is stored into variable
	cout << "Please enter patient's last name: ";
	cin >> lName;
	cout << endl;

	// User enters data and is stored into variable
	newPatient.setID(id);
	bill.setID(id);
	newPatient.setName(fName, lName);

	// User enters data and is stored into variable
	cout << "Please enter doctor's first name: ";
	cin >> docFrName;
	cout << endl;

	// User enters data and is stored into variable
	cout << "Please enter doctor's last name: ";
	cin >> docLaName;
	cout << endl;

	// Stored data setting variables
	newPatient.setDoctorName(docFrName, docLaName);

	// User enters data and is stored into variable
	cout << "Please enter doctor's specialty: ";
	cin >> spl;
	cout << endl;

	// Stored data setting variables
	newPatient.setDoctorSpl(spl);

	// Admission and discharge date set
	newPatient.setAdmDate(1, 26, 2019);
	newPatient.setDisDate(2, 26, 2019);

	// Charges set
	bill.setPharmacyCharges(300.36);
	bill.setRoomRent(500.32);
	bill.setDoctorFee(1000.35);

	// Prints newPatient and bill
	newPatient.print();
	bill.printBill();

	system("pause");
	return 0;
}// end of main