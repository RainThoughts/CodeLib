#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee( const std::string &first,
   const std::string &last, const std::string &ssn, double salary )
   : Employee( first, last, ssn ) {
   setWeeklySalary( salary );
}

void SalariedEmployee::setWeeklySalary( double salary )
{
   if ( salary >= 0.0 )
      weeklySalary = salary;
   else
      throw std::invalid_argument( "Weekly salary must be >= 0.0" );
}

double SalariedEmployee::getWeeklySalary() const {
   return weeklySalary;
}

double SalariedEmployee::earnings() const {
   return getWeeklySalary();
}

void SalariedEmployee::print() const {
   std::cout << "Salaried employee: ";
   Employee::print();
   std::cout << "Weekly salary: " << getWeeklySalary() << std::endl;
}

