#include <iostream>

using namespace std;

int a,ans=1;
double meter,kilometer,kilogram,pound,celcius,fahrenheit,milliliter,liter;
void MetertoKilometer(double meter,double kilometer = 0);
void KilogramtoPound(double kilogram, double pound = 0);
void CelciustoFahrenheit(double celcius,double fahrenheit = 0);
void MillilitertoLiter(double milliliter,double liter = 0);
void TryAgain();

int main(){

    do{
        system("cls");
        cout << endl;
        cout << "[1] Meter to Kilometer" << endl;
        cout << "[2] Kilogram to Pound" << endl;
        cout << "[3] Celcius to Fahrenheit" << endl;
        cout << "[4] Milliliter to Liter" << endl;
        cout << "[0] End the Program" << endl;
        cout << "Select Program : ";
        cin >> a;

        switch(a){

            case 1:{
                system("cls");
                cout << "<<Meter to Kilometer>> " << endl;
                cout << "Enter Meter : " << endl;
                cin >> meter;
                MetertoKilometer(meter,kilometer);
                TryAgain();
                break;
            }
            case 2:{
                system("cls");
                cout << "<<Kilogram to Pound>> " << endl;
                cout << "Enter Kilogram : " << endl;
                cin >> kilogram;
                KilogramtoPound(kilogram,pound);
                TryAgain();
                break;
            }
            case 3:{
                system("cls");
                cout << "<<Celcius to Fahrenheit>> " << endl;
                cout << "Enter Celcius : " << endl;
                cin >> celcius;
                CelciustoFahrenheit(celcius,fahrenheit);
                TryAgain();
                break;
            }
            case 4:{
                system("cls");
                cout << "<<Milliliter to Liter>> " << endl;
                cout << "Enter Milliliter : " << endl;
                cin >> milliliter;
                MillilitertoLiter(milliliter,liter);
                TryAgain();
                break;
            }
            case 0:{
                system("cls");
                cout << "Thank you for using the program";
                ans=0;
                break;
            }
            default:{
                cout << "Invalid input";
                TryAgain();
                break;
            }
         
        }
    }while(ans==1);

    return 0;
}

void MetertoKilometer(double meter,double kilometer){
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << endl << "------------------------------------" << endl;
    cout << "Kilometer : " << (meter * .001) <<endl;
    cout << "------------------------------------"<< endl;
}

void KilogramtoPound(double kilogram, double pound){
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << endl << "------------------------------------" << endl;
    cout << "Pound : " << (kilogram * 2.2) <<endl;
    cout << "------------------------------------"<< endl;
}

void CelciustoFahrenheit(double celcius,double fahrenheit){
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << endl << "------------------------------------" << endl;
    cout << "Fahrenheit : " << ((celcius * 1.8)+ 32) <<endl;
    cout << "------------------------------------"<< endl;
}

void MillilitertoLiter(double milliliter,double liter){
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << endl << "------------------------------------" << endl;
    cout << "Liter : " << (milliliter * .001) <<endl;
    cout << "------------------------------------"<< endl;
}

void TryAgain(){
    cout << endl << "------------------------------------" << endl;
    cout << "Do you want to try again"<< endl;
    cout << "1 = to continue" << endl;
    cout << "0 = to exit" << endl;
    cout << "------------------------------------"<< endl;
    cin >> ans;
}