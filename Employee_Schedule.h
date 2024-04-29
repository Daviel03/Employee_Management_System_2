//
// Created by davie on 4/28/2024.
//

#ifndef EMPLOYEE_MANAGEMENT_SYSTEM_2_EMPLOYEE_SCHEDULE_H
#define EMPLOYEE_MANAGEMENT_SYSTEM_2_EMPLOYEE_SCHEDULE_H
#include "Employee_Profile.h"
#include <vector>
#include <string>

class Employee_Schedule : public Employee_profile{
private:
    std::vector<std::string>schedule;
    int maxHoursWorking;
    int maxDaysWorking;

public:
    Employee_Schedule();

    void setMaxHoursWorking(int hours);
    int getMaxHoursWorking() const;

    void setMaxDaysWorking(int days);
    int getMaxDaysWorking() const;

    void createSchedule();
    void displaySchedule() const;

    void employeeIdShedule();
};


#endif //EMPLOYEE_MANAGEMENT_SYSTEM_2_EMPLOYEE_SCHEDULE_H
