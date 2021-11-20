//name: Bajade, Darvin Kobe M.
//activity name: PT3: File input/output implementation
//description:salary program with file I/O implementation
//date: 11/20/2021

#include<iostream>
#include<fstream>

using namespace std;

void InputData();
void TryAgain();
void ShowData();
void ClearData();
int ans=1;

int main(){
    int d;
   
    do{
    system("cls");
    cout<< "Salary Program" << endl;
    cout<< "[1] Input Data "<< endl;
    cout<< "[2] Show Data"<< endl;
    cout<< "[3] Delete Data"<< endl;
    cout<< "[4] Terminate Program"<< endl;
    cin >> d;

    switch(d){
        case 1:{
        InputData();
        TryAgain();
        break;
        }
        case 2:{
        ShowData();
        TryAgain();
            break;
        }
        case 3:{
         ClearData();
         TryAgain();
          break;
        }
        case 4:{
            system("cls");
            cout<< "Thank you for using the program";
            return 0;
        }
        default:{
            cout<< "Invalid Input";
            TryAgain();
             break;
        }
    }
    }while(ans==1);

    //computation
   
}

   //input
   void InputData(){
    ofstream File;
    File.open("SalaryData.txt", ios:: app);

     float a, b, c, ctax, salary;
        string eID, ename;

   cout << "Enter Employee ID :";
   cin >> eID;
   cin.ignore();
   cout << "Enter Employee Name :";
   getline(cin,ename);
   cout << "Enter Hours Worked : ";
   cin >> a;
   cout << "Enter rate per hour : ";
   cin >> b;

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
   File << "-----------Salary-------------" << endl;
   File << "Employee ID : " << eID << endl;
   File << "Employee Name : " << ename << endl;
   File << "Tax rate : " << ctax << endl;
   File << "Gross pay : " << c << endl;
   File << "Net pay : " << salary << endl;
   File << "------------------------------" << endl;

   }

   void TryAgain(){
    cout << "------------------------------------" << endl;
    cout << "Do you want to try again?"<< endl;
    cout << "1 = to continue" << endl;
    cout << "2 = to exit" << endl;
    cout << "------------------------------------"<< endl;
    cin >> ans;
    }

    void ShowData(){
        string data;
    ifstream ReadFile("SalaryData.txt");
    while (getline (ReadFile, data)){
        cout << data << endl;
    }
    ReadFile.close();
    }

    void ClearData(){
    fstream Clear;
    Clear.open("SalaryData.txt", ios::out | ios::trunc); 
    cout << "Data is Cleared" << endl;
    }