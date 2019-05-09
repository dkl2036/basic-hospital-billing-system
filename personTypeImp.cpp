
//**********************************************************
// Author: Danielle Lamb and Kirklyn Milgrim
// Date: February 26, 2019
//
// Implementation file personTypeImp.cpp
// This file contains the definitions of the functions to 
// implement the operations of the class personType.
//**********************************************************
  
#include <iostream>
#include <string>
#include "personType.h"

using namespace std;

// prints person's first and last name
void personType::print() const
{
    cout << firstName << " " << lastName;
} 

// constructor 
void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

// returns person's first name
string personType::getFirstName() const
{
    return firstName;
}

// returns person's last name
string personType::getLastName() const
{
    return lastName;
}

// deconstructor
personType::personType(string first, string last) 
{ 
    firstName = "";
    lastName = "";
}
