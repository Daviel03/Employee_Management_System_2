// Employee_Training.h
// Created by Daviel
// Employee profile declarations
//-------------------------------------------------
#ifndef EMPLOYEE_MANAGEMENT_SYSTEM_2_EMPLOYEE_TRAINING_H
#define EMPLOYEE_MANAGEMENT_SYSTEM_2_EMPLOYEE_TRAINING_H
#include "Employee_Management.h"
#include <map>
#include <vector>
#include <string>

class Employee_Training : public Employee_Management{
private:
    std::map<int, std::vector<std::string>> trainingRecord;

public:
    Employee_Training() = default;

    void addTrainingModules(int empId, const std::string& module);
    std::vector<std::string> getTrainingSessions(int empId) const;
    void displayTraining(int empId) const;

};


#endif //EMPLOYEE_MANAGEMENT_SYSTEM_2_EMPLOYEE_TRAINING_H
