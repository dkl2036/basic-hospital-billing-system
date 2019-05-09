
//**********************************************************
// Author: Danielle Lamb and Kirklyn Milgrim
// Date: February 26, 2019

// class patientType
// This class specifies the members to implement a patient's 
// id, first name, last name, birth day, birth month, birth year,
// doctor first name, doctor last name, doctor specialty, 
// admission day, admission month, admission year, discharge day,
// discharge month, discharge year.
//**********************************************************

#ifndef H_patientType
#define H_patientType

#include <string>
#include "doctorType.h"
#include "personType.h"
#include "dateType.h"
 
using namespace std;

class patientType: public personType
{
public:
    void print() const;
		//Function to output the patient name, birth date, attending physician,
		//admission date, and discharge date.

    void setInfo(string id = "", string fName = "", string lName = "",
                int bDay = 1, int bMth = 1, int bYear = 1900,
                string docFrName = "", string docLaName = "", string docSpl = "",
                int admDay = 1, int admMth = 1, int admYear = 1900,
                int disChDay = 1, int disChMth = 1, int disChYear = 1900);
		//Function to set id, first name, last name, birth day, birth month, 
		//birth year, doctor first name, doctor last name, doctor specialty,
		//admission day, admission month, admission year, discharge day,
		//discharge month, and discharge year according to the parameters.
		//Postcondition: ID = id; 
		//               If no values are specified, the default 
		//               values are used to initialize the member
		//               variables.

    void setID(string id);
		//Function to set id according to the parameters.
		//Postcondition: ID = id;

    string getID();
		//Function to return id.
		//Postcondition: The value of the data member id
		//               is returned.

    void setBirthDate(int bDay = 1, int bMth = 1, int bYear = 1900);
		//Function to set birth day, birth month, and birth year according 
		//to the parameters.

    int getBirthDay();
    int getBirthMonth();
    int getBirthYear();
		//Functions to return birth day, birth month, and birth year.
		//Postcondition: The value of the data member bDay, bMth, bYear
		//               is returned.

    void setDoctorName(string fName = "", string lName = "");
    void setDoctorSpl(string spl = "");
		//Functions  to set doctor first name, doctor last name, and
		//doctor specialty according to the parameters.
		//Postcondition: firstName = first; lastName = last

    string getDoctorFName();
    string getDoctorLName();
    string getDoctorSpl();
		//Functions to return the doctor first name, last name, and specialty.
		//Postcondition: The value of the data member fName, lName, and spl
		//               is returned.

    void setAdmDate(int admDay = 1, int admMth = 1, int admYear = 1900);
		//Functions to set admission day, month, and year
		//according to the parameters.

    int getAdmDay();
    int getAdmMonth();
    int getAdmYear();
		//Functions to return the admission day, month, and year.
		//Postcondition: The value of the data member admDay, admMth, and admYear
		//               is returned.

    void setDisDate(int disDay = 1, int disMth = 1, int disYear = 1900);
		//Functions to set discharge day, month, and year
		//according to the parameters.

    int getDisDay();
    int getDisMonth();
    int getDisYear();
		//Functions to return the discharge day, month, and year.
		//Postcondition: The value of the data member disDay, disMth, and disYear
		//               is returned.

    patientType(string id = "", string fName = "", string lName = "",
                int bDay = 1, int bMth = 1, int bYear = 1900,
                string docFrName = "", string docLaName = "", string docSpl = "",
                int admDay = 1, int admMth = 1, int admYear = 1900,
                int disChDay = 1, int disChMth = 1, int disChYear = 1900);
		//constructor
		//Sets firstName and lastName according to the parameters.
		//The default values of the parameters are empty strings.
		//Postcondition: firstName = first; lastName = last 

 private:
    string ID; // private string ID
    dateType dateOfBirth; // created object of dateType
    doctorType attendingPhysician; // created object of doctorType
    dateType admitDate; // created object of dateType
    dateType dischargeDate; // created object of dateType
};

#endif
