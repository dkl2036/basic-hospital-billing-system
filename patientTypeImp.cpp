
//**********************************************************
// Author: Danielle Lamb and Kirklyn Milgrim
// Date: February 26, 2019
//
// Implementation file patientTypeImp.cpp
// This file contains the definitions of the functions to 
// implement the operations of the class patientType.
//**********************************************************

#include <iostream>
#include "patientType.h"
#include "doctorType.h"
#include "dateType.h"

using namespace std;

// print patient name, patient birth date, attending physician, admission date
// and discharge date
void patientType::print() const
{
	cout << "Patient: ";
	personType::print();
	cout << endl;

	cout << "Patient Birth Date: ";
	dateOfBirth.printDate();
	cout << endl;

	cout << "Attending Physician: ";
	attendingPhysician.print();
	cout << endl;

	cout << "Admission Date: ";
	admitDate.printDate();
	cout << endl;

	cout << "Discharge Date: ";
	dischargeDate.printDate();
	cout << endl;
}

// constructor 
void patientType::setInfo(string id, string fName, string lName,
	int bDay, int bMth, int bYear,
	string docFrName, string docLaName, string docSpl,
	int admDay, int admMth, int admYear,
	int disChDay, int disChMth, int disChYear)
{
	id = ID;
	setName(fName, lName);
	dateOfBirth.setDate(bDay, bMth, bYear);
	attendingPhysician.setName(docFrName, docLaName);
	attendingPhysician.setSpeciality(docSpl);
	admitDate.setDate(admDay, admMth, admYear);
	dischargeDate.setDate(disChDay, disChMth, disChYear);
}

// sets id
void patientType::setID(string id)
{
	ID = id;
}

// returns id
string patientType::getID()
{
	return ID;
}

// sets birth day, month, and year
void patientType::setBirthDate(int bDay, int bMth, int bYear)
{
	dateOfBirth.setDate(bDay, bMth, bYear);
}

// returns birth day
int patientType::getBirthDay()
{
	return dateOfBirth.getDay();
}

// returns birth month
int patientType::getBirthMonth()
{
	return dateOfBirth.getMonth();
}

// returns birth year
int patientType::getBirthYear()
{
	return dateOfBirth.getYear();
}

// set doctor first and last name
void patientType::setDoctorName(string fName, string lName)
{
	attendingPhysician.setName(fName, lName);
}

// set doctor specialty
void patientType::setDoctorSpl(string spl)
{
	attendingPhysician.setSpeciality(spl);
}

// returns doctor first name
string patientType::getDoctorFName()
{
	return attendingPhysician.getFirstName();
}

// returns doctor last name
string patientType::getDoctorLName()
{
	return attendingPhysician.getLastName();
}

// returns doctor specialty
string patientType::getDoctorSpl()
{
	return attendingPhysician.getSpeciality();
}

// sets admission day, month, and year
void patientType::setAdmDate(int admDay, int admMth, int admYear)
{
	admitDate.setDate(admDay, admMth, admYear);
}

// returns admission day
int patientType::getAdmDay()
{
	return admitDate.getDay();
}

// returns admision month
int patientType::getAdmMonth()
{
	return admitDate.getMonth();
}

// return admission year
int patientType::getAdmYear()
{
	return admitDate.getYear();
}

// set discharge day, month, and year
void patientType::setDisDate(int disDay, int disMth, int disYear)
{
	dischargeDate.setDate(disDay, disMth, disYear);
}

// returns discharge day
int patientType::getDisDay()
{
	return dischargeDate.getDay();
}

// returns discharge month
int patientType::getDisMonth()
{
	return dischargeDate.getMonth();
}

// returns discharge year
int patientType::getDisYear()
{
	return dischargeDate.getYear();
}

// deconstructor 
patientType::patientType(string id, string fName, string lName,
	int bDay, int bMth, int bYear,
	string docFrName, string docLaName, string docSpl,
	int admDay, int admMth, int admYear,
	int disChDay, int disChMth, int disChYear)
	:personType(fName, lName), 
	dateOfBirth(bDay, bMth, bYear),
	attendingPhysician(docFrName, docLaName, docSpl),
	admitDate(admDay, admMth, admYear),
	dischargeDate(disChDay, disChMth, disChYear)

{
	id = "";
	fName = "";
	lName = "";
	bDay = 1;
	bMth = 1;
	bYear = 1900;
	docFrName = "";
	docLaName = "";
	docSpl = "";
	admDay = 1;
	admMth = 1;
	admYear = 1900;
	disChDay = 1;
	disChMth = 1;
	disChYear = 1900;
}
