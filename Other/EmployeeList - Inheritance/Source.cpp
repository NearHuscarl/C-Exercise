#include <iostream>
#include <iomanip>
#include "CongTy.h"

using namespace std;

int main()
{
   CCongTy c;
   c.Input();
   c.Output();
   cout << "Total Wage: " << setprecision(8) << c.PrintTotalWage() << endl;
   c.PrintHighestSalary();

   cin.get();
   cin.get();
   return 0;
}
