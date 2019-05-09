
//**********************************************************
// Author: Danielle Lamb and Kirklyn Milgrim
// Date: February 26, 2019
// 
// Implementation file dateTypeImp.cpp
// This file contains the definitions of the functions to 
// implement the operations of the class dateType.
//**********************************************************
 
#include <iostream>
#include "dateType.h" 

using namespace std;

// constructor 
void dateType::setDate(int month, int day, int year)
{
    dMonth = month;
    dDay = day;
    dYear = year;
}
 
// return day
int dateType::getDay() const 
{
    return dDay;
}

// return month
int dateType::getMonth() const 
{
    return dMonth;
}

// return year
int dateType::getYear() const 
{
    return dYear;
}

// print month, day, and year
void dateType::printDate() const
{
    cout << dMonth << "-" << dDay << "-" << dYear;
}

// deconstructor
dateType::dateType(int month, int day, int year) 
{ 
    dMonth = 1;
    dDay = 1;
    dYear = 1900;
}
