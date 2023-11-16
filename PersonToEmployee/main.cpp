//
//  main.cpp
//  PersonToEmployee
//
//  Created by Kaan Şengün on 16.11.2023.
//

#include <iostream>
#include "PersonToEmployee.h"
using namespace std;

int main(int argc, const char * argv[]) {
    const int numEmployees = 10;
    Employee employees[numEmployees];
    
    Employee employee1={"Ogun","Birinci","Software","Engineer",4500,5};
    Employee employee2={"Eda","Deniz","Software","Engineer",8500,5};
    Employee employee3={"Burak","Ikinci","IT","Programmer",4500,5};
    Employee employee4={"Ogun","Birinci","Accounting","President",4500,5};
    Manager manager1("Duygu","Keydal","Software","Manager",8500,10);
    Manager manager2("Omer","Selvi","IT","Manager",15000,25);
    
    Employee employeeList[]={employee1,employee2,employee3,employee4};
    manager1.extractEmployees(employeeList,numEmployees);
    manager1.print();
    
    return 0;
}
