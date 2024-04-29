// Employee.Profile.cpp
// Created by Chris fox
// Employee profile definitions
//-------------------------------------------------
#include "Employee_Profile.h"
#include <iostream>
#include <cstdlib>

Employee_profile::Employee_profile() : _empPay(0.00),_empID(0),_empDepartment(""),_empNames("") {}



void Employee_profile::setEmpDepartment(const std::string &empDepartment){
    _empDepartment = empDepartment;
}


void Employee_profile::setEmpNames(const std::string &empNames) {
    _empNames = empNames;
}


void Employee_profile::setEmpId(int empId) {
    _empID = empId;
}


void Employee_profile::setEmpPay(float pay) {
    _empPay = pay;
}