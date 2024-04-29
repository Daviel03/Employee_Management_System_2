#include  <iostream>
#include "Employee_Management.h"
#include "Employee_Training.h"

int main() {
    Employee_Training manager;

    int option;
    bool isRunning = true;

    while (isRunning) {
        std::cout << "\nEmployee Management System\n";
        std::cout << "1. Add Employee\n";
        std::cout << "2. Display All Employees\n";
        std::cout << "3. Delete Employee by ID\n";
        std::cout << "4. Clear All Employees\n";
        std::cout << "5. Add Training Modules\n";
        std::cout << "6. Display Training Modules\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter your option: ";
        std::cin >> option;
        std::cin.ignore();

        switch (option) {
            case 1: {
                Employee_profile emp;

                std::string firstName, lastName;
                std::cout << " Enter Your First Name : ";
                std::getline(std::cin, firstName);
                std::cout << "Enter Your Last Name : ";
                std::getline(std::cin, lastName);
                emp.setEmpNames(firstName + " " + lastName);

                std::cout << "Select Department:\n";
                std::cout << "1. Management\n2. Sales\n3. Engineering\n4. H.R.\nEnter choice: ";
                int selection;
                std::cin >> selection;
                std::cin.ignore();
                std::string department;
                switch (selection) {
                    case 1:
                        department = "Management";
                        break;
                    case 2:
                        department = "Sales";
                        break;
                    case 3:
                        department = "Engineering";
                        break;
                    case 4:
                        department = "H.R.";
                        break;
                    default:
                        std::cout << "* Please enter valid department number [1-4] *\n";
                        continue;
                }

                emp.setEmpDepartment(department);

                int id;
                std::cout << "Enter your Employee Id: ";
                std::cin >> id;
                emp.setEmpId(id);

                float pay;
                std::cout << "Enter Pay: ";
                std::cin >> pay;
                emp.setEmpPay(pay);

                manager.add_employee(emp);
                std::cout << "Employee added!\n";
                break;
            }
            case 2:
                std::cout << "Displaying all Employee Information:\n";
                manager.display_employee();
                break;
            case 3: {
                int id;
                std::cout << "Enter Employee ID to Delete their information: ";
                std::cin >> id;
                if (manager.remove_employee(id)) {
                    std::cout << " Employee was removed successfully. \n";
                } else {
                    std::cout << "Wrong Employee ID. Try again. \n ";
                }
                break;
            }
            case 4:
                manager.restart_employees();
                std::cout << "All employee information has been deleted. \n";
                break;

            case 5: {
                int id;
                std::cout << "Enter Employee ID for to add a new training module: ";
                std::cin >> id;
                std::cin.ignore();
                std::string module;
                std::cout << "Enter Training Module Description: ";
                std::getline(std::cin, module);
                manager.addTrainingModules(id, module);
                std::cout<<"Training Module was added. \n";
                break;

            }
            case 6: {
                int id;
                std::cout << "Enter Employee ID to view training modules: ";
                std::cin >> id;
                manager.displayTraining(id);
                break;
            }
            case 7: {
                isRunning = false;
                std::cout << " Shutting down the program. \n ";
                break;
            }
            default:
                std::cout << "Invalid option. Try again.\n";

        }

    }
    return 0;
}


