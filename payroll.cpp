//name: Bajade, Darvin Kobe M.
//activity name: prelim hands on exam
//description: payroll
//date:10/5/2021

#include<iostream>
using namespace std;

int main(){
   string empno, empstat, dop;
   double payrt, hrsno, grspy, tax, netpy1, netpy2, philh, sss, love, mcs;
   char name[30];

    //format
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   

    //inputs
   cout << "--------------------------------------" <<endl;
   cout << "Enter Name of Employee : ";
   cin.getline(name,20);
   cout << "Enter Employee number : ";
   cin >> empno;
   cout << "Enter Date of Paydate : ";
   cin >> dop;
   cout << "Enter Hourly payrate : ";
   cin >> payrt;
   cout << "Enter Number of Hours Worked : ";
   cin >> hrsno;
   cout << "--------------------------------------" <<endl;

    //computation a
   grspy = hrsno * payrt;
   tax = grspy * 0.12;
   netpy1 = grspy - tax;
   philh = 150;
   sss = 250;
   love = 200;
   mcs = philh + sss + love;
   netpy2 = netpy1 - mcs; 

    //output
   cout << "Payroll summary for : " << name << endl;
   cout << "Employee Number : " << empno << endl;
   cout << "Date of Payday : " << dop << endl;
   cout << " " << endl;
   cout << "Your salary of " << hrsno << " hours at a rate of " << payrt << " per hour." << endl;;
   cout << "Gross pay : " << grspy << endl; 
   cout << "Withholding tax : " << tax << endl;
   cout << "Philhealth : " << philh << endl;
   cout << "SSS : "<< sss << endl;
   cout << "Pag-ibig : " << love << endl;
   cout << "--------------------------------------" <<endl;
   cout << "Net Pay : " << netpy2 << endl;
   cout << " " << endl;
   //if else statement
    if (netpy2 <= 5000){
        cout << "Employee Status : Contractual" << endl;
    }
    else if ((netpy2 >= 5001) && (netpy2 <= 10000)){
        cout << "Employee Status : Probationary" << endl;
    }
    else {
        cout << "Employee Status : Regular" << endl;
    }

   return 0;
}