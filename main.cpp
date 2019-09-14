// Name: Dustin Chavez
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>
int main()
{
  std::string location;
  std::string days;
  std::cout << "where did you go on a business trip? ";
  std::cin >> location;
  std::cout << "How many days will the business trip be? ";
  std::cin >> days;


  std::cout <<"The business trip was at "<< location << "\n";

  std::cout << std::setw(10) << "location" << std::endl;
  std::cout <<std::setw(10) << location << std::endl;


}
