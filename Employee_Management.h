//
// Created by Wyatt on 4/28/24.
//

#ifndef EMPLOYEE_MANAGEMENT_CLASS_EMPLOYEE_MANAGMENT_H
#define EMPLOYEE_MANAGEMENT_CLASS_EMPLOYEE_MANAGMENT_H
#include <iostream>
#include <vector>
#include "Employee_Profile.h"

class Employee_Management {

private:

    //-----------------------------------------------
    std::vector<Employee_profile>employees; // Used to store the employee profiles

public:

    // Constructors
    //------------------------------------------------
    Employee_Management();


    // Methods
    //----------------------------------------------
    void add_employee(const Employee_profile &employee);
    bool remove_employee(const int empID);
    void display_employee() const;
    void restart_employees();


};


#endif //EMPLOYEE_MANAGEMENT_CLASS_EMPLOYEE_MANAGMENT_H