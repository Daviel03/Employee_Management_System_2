// Employee.Profile.h
// Created by Chris fox
// Employee profile declarations
//-------------------------------------------------
#ifndef GROUP_PROJECT_EMPLOYEE_PROFILE_H
#define GROUP_PROJECT_EMPLOYEE_PROFILE_H
#include <iostream>


class Employee_profile {
private:
    std::string _empDepartment;
    std::string _empNames;
    int _empID;
    float _empPay;

public:
    Employee_profile();

    const std::string &getEmpDepartment() const {return _empDepartment;}
    void setEmpDepartment(const std::string &empDepartment);

    const std::string &getEmpNames() const { return _empNames;};
    void setEmpNames(const std::string &empNames);

    int getEmpId() const { return _empID;};
    void setEmpId(int empId);

    float getEmpPay() const{ return _empPay;};
    void setEmpPay(float pay);
};
#endif //GROUP_PROJECT_EMPLOYEE_PROFILE_H