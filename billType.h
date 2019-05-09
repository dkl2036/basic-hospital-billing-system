
//**********************************************************
// Author: Danielle Lamb and Kirklyn Milgrim
// Date: February 26, 2019

// class billType
// This class specifies the members to implement a person's 
// first name and last name.
//**********************************************************

#ifndef H_BillType
#define H_BillType

#include <string>
#include "doctorType.h"
#include "personType.h"
#include "dateType.h"
 
using namespace std;

class billType
{
public:
    void printBill() const;
	//Function to output the id, pharmacy charges, room rent, and doctor fee
	//in the form id phCharges rRent docFee

    void setInfo(string id = "", double phCharges = 0, double rRent = 0,
                 double docFee = 0);
	//Function to set id, pharmacy charges, room rent, and doctor fee according 
	//to the parameters.
	//Postcondition: ID = id; pharmacyCharges = phCharges; roomRent = rRent;

    void setID(string id);
	//Function to set id according 
	//to the parameters.
	//Postcondition: ID = id;

    string getID();
	//Function to return the id.
	//Postcondition: The value of id is returned.

    void setPharmacyCharges(double charges = 0);
	//Function to set pharmacy charges according 
	//to the parameters.
	//Postcondition: pharmacyCharges = charges;

    double getPharmacyCharges();
	//Function to return the charges.
	//Postcondition: The value of charges is returned.

    void updatePharmacyCharges(double charges = 0);
	// The value of charges is updated.

    void setRoomRent(double charges = 0);
	//Function to se room rent according 
	//to the parameters.
	//Postcondition: roomRent = charges;

    double getRoomRent();
	//Function to return the room rent.
	//Postcondition: The value of id is returned.

    void updateRoomRent(double charges = 0);
	// The value of charges is updated.

    void setDoctorFee(double charges = 0);
	//Function to set doctor fee according 
	//to the parameters.
	//Postcondition: doctorFee = charges;

    double getDoctorFee();
	//Function to return the doctor fee.
	//Postcondition: The value of charges is returned.

    void updateDoctorFee(double charges = 0);
	// The value of charges is updated.

    double billingAmount();
	//Function to return the billing amount.
	//Postcondition: The sum of pharmacyCharges, roomRent, and doctorFee are returned.

    billType(string id = "", double phCharges = 0, double rRent = 0, double docFee = 0);
	//Constructor to set id, pharmacy charges, room rent, and doctor fee.
	//The member variables id, phCharges, rRent, and docFee are set 
	//according to the parameters.
	//Postcondition: ID = id; pharmacyCharges = phCharges; roomRent = rRent;
	//               If no values are specified, the default 
	//               values are used to initialize the member
	//               variables.

 private:
    string ID; // variable to store ID
    double pharmacyCharges; // variable to store pharmacy charges
    double roomRent; // variable to store room rent
    double doctorFee; // variable to store doctor fee
};

#endif
