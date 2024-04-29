// File - Employee_Management.cpp
// Author - Wyatt Nava-Rocha
// Des - Definitions of Employee_Management class
//----------------------------------------------------------------

#include <iostream>
#include "Employee_Management.h"

Employee_Management::Employee_Management() {
}

// Allows user/Manager to add employees

void Employee_Management::add_employee(const Employee_profile &employee) {
    employees.push_back(employee);
}

// Allows user/Manager to remove employees

bool Employee_Management::remove_employee(int empID) {
    for (auto it = employees.begin(); it != employees.end(); ++it) {
        if (it->getEmpId() == empID) {
            employees.erase(it);
            return true;
        }
    }
    return false;
}

// Allows user/Manager to display everyone in the company
void Employee_Management::display_employee()const {
    for (const auto& employee : employees) {
        std::cout << "Name: " << employee.getEmpNames() << std::endl;
        std::cout << "ID Number: " << employee.getEmpId() << std::endl;
        std::cout << "Department:" << employee.getEmpDepartment() << std::endl;
        std::cout << "Pay: " << employee.getEmpPay() << std::endl;
        std::cout << "-----------------------------------" << std::endl;
    }
}

void Employee_Management::restart_employees() {
    employees.clear();
}