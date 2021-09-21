#include<iostream>
using namespace std;

int main(){
    float a, b, c, ctax, salary;
    string eID, ename;
    
   //input
   cout << "Enter Employee ID :";
   cin >> eID;
   cout << "Enter Employee Name :";
   cin >> ename;
   cout << "Enter Hours Worked : ";
   cin >> a;
   cout << "Enter rate per hour : ";
   cin >> b;


    //computation
    cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   c = a * b;
   if (c > 40000) {
       ctax = c * 0.12;
   }
   else if (c < 20000){
       ctax = c * 0.05;
   }
   else {
       ctax = c * 0.10;
   }

    salary = c - ctax;
    //output
   cout << "Employee ID : " << eID << endl;
   cout << "Employee Name : " << ename << endl;
   cout << "Tax rate : " << ctax << endl;
   cout << "Gross pay : " << c << endl;
   cout << "Net pay : " << salary << endl;


   return 0;
}