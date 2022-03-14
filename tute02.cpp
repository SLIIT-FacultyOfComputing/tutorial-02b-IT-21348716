/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include<iostream>
int main()
{
  double salary;
  double netSalary;
  int etype;
  int otHrs;
  int otRate;

  std::cout<<"Enter Employee Type:";
  std::cin>>etype;

  std::cout<<"Enter Salary:";
  std::cin>>salary;

  std::cout<<"Enter OT Hours:";
  std::cin>>otHrs;

  switch (etype)
    {
    case 1 : otRate = 1000;
  break;

  case 2 : otRate = 1500;
  break;

  case 3 : otRate = 1700;
  break;
      }
  netSalary = salary + (otHrs * otRate);
  std::cout<<"Net Salary is"<<netSalary;

  return 0;
}