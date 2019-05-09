
//**********************************************************
// Author: Danielle Lamb and Kirklyn Milgrim
// Date: February 26, 2019

// class doctorType
// This class specifies the members to implement a doctor's 
// first name, last name, and specialty.
//**********************************************************

#ifndef H_doctorType
#define H_doctorType

#include <string>
#include "personType.h"
 
using namespace std;

class doctorType: public personType
{
public:
    void print() const;
	//Function to output the first name, last name, and specialty
	//in the form first last spl.

    void setSpeciality(string spl);
	//Function to set specialty according 
	//to the parameters.
	//Postcondition: speciality = spl;

    string getSpeciality();
	//Function to return the specialty.
	//Postcondition: The value of specialty is returned.
 
    doctorType(string first = "", string last = "", string spl = "");
	//Constructor to set first name, last name, and specialty.
	//The member variables first, last, and spl are set 
	//according to the parameters.
	//Postcondition: specialty = spl;
	//               If no values are specified, the default 
	//               values are used to initialize the member
	//               variables.

 private:
    string speciality; // variable to store specialty
};

#endif
