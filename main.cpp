// Name: Dustin Chavez
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>
int main()
{
  std::string location;
  std::string days;
  double meals;
  double hotel;
  double total;
  std::cout << "where did you go on a business trip? ";
  std::cin >> location;
  std::cout << "How many days will the business trip be? ";
  std::cin >> days;
  std::cout << "How much was the cost of the hotel? ";
  std::cin >> hotel;
  std::cout << "how much was the meals? ";
  std::cin >> meals;

  total = hotel + meals;


  std::cout << std::setw(10) << "location" << std::setw(10) << "days" << std::setw(10) << "hotel" << std::setw(10) << "meals" << std::setw(10) << "total" << std::endl;
  std::cout <<std::setw(10) << location << std::setw(10) << days << std::setw(10) << hotel << std::setw(10) << meals << std::setw(10) << total << std::endl;


}
