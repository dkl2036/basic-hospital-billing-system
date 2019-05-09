
//**********************************************************
// Author: Danielle Lamb and Kirklyn Milgrim
// Date: February 26, 2019

// Implementation file doctorTypeImp.cpp
// This file contains the definitions of the functions to 
// implement the operations of the class doctorType.
//**********************************************************


#include <iostream>
#include "doctorType.h" 

using namespace std;

// prints doctor specialty
void doctorType::print() const
{
	personType::print();
	cout << " " << speciality;
}

// constructor
void doctorType::setSpeciality(string spl)
{
	speciality = spl; 
}

// returns doctor specialty
string doctorType::getSpeciality()
{
	return speciality;
}

// deconstructor 
doctorType::doctorType(string first, string last, string spl)
{
	first = "";
	last = "";
	spl = "";
}