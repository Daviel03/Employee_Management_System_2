// Employee_Training.cpp
// Created by Daviel Diaz
// Employee profile definitions
//-------------------------------------------------
#include "Employee_Training.h"
#include <iostream>

void Employee_Training::addTrainingModules(int empId, const std::string &module) {
    trainingRecord[empId].push_back(module);
}

std::vector<std::string> Employee_Training::getTrainingSessions(int empId) const {
    auto it= trainingRecord.find(empId);
    if (it != trainingRecord.end()){
        return it->second;
    }
    return {};
}

void Employee_Training::displayTraining(int empId) const {
    auto it = trainingRecord.find(empId);
    if (it != trainingRecord.end()){
        std::cout<< "Training Modules for Employee ID "<<empId <<":\n";
        for (const auto& module : it->second){
            std::cout << " -- " << module << std::endl;
        }
    }else{
        std::cout<<"No training modules found for the Employee Id inputed" <<empId<<".\n";
    }

}
