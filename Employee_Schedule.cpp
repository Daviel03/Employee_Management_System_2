//
// Created by davie on 4/28/2024.
//

#include "Employee_Schedule.h"
#include <iostream>
#include <cstdlib>
#include <ctime>    //Contains definitions to manipulate date and time information

Employee_Schedule::Employee_Schedule() : Employee_profile(), maxDaysWorking(5),maxHoursWorking(40){
    schedule.resize(7);
    std::srand(std::time(nullptr));
}




void Employee_Schedule::createSchedule() {
    int hoursWorking = maxHoursWorking/maxDaysWorking;
    std::string daysOfWeek[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    for(int i = 0; i< maxDaysWorking; ++i){
        int startHour = 7+ rand()% (12- hoursWorking);
        int endHour = startHour + hoursWorking;

        schedule[i] = daysOfWeek[i] + " you can work " + std::to_string(hoursWorking) + " hours from "
                + std::to_string(startHour)+ "AM to " + (endHour > 12 ? std::to_string(endHour-12): std::to_string(endHour))
                +(endHour >= 12 && endHour != 24 ? "PM": "AM");
    }

}

void Employee_Schedule::employeeIdShedule() {

}

void Employee_Schedule::setMaxHoursWorking(int hours) {
    maxHoursWorking= hours;

}

void Employee_Schedule::setMaxDaysWorking(int days) {
    maxDaysWorking= days;
}

void Employee_Schedule::displaySchedule() const {
    std::cout<<"Shedule based on unique Employee ID "<< getEmpId()<< ":\n";
    for (const auto& day : schedule){
        if(!day.empty()){
            std::cout<<day<<std::endl;
        }
    }


}




