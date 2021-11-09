//name: Bajade, Darvin Kobe M.
//activity name: OE 5
//description: conversion of mesurements
//date: 11/9/2021

#include <iostream>

using namespace std;

double kilogram,pound,gram,ounce,milligram;
int ans=1,a;

void KilogramtoPound(double kilogram, double pound = 0);
void GramtoKilogram(double gram, double kilogram =0);
void KilogramtoOunce(double kilogram, double ounce =0);
void MilligramtoGram(double milligram, double gram = 0);
void TryAgain();

int main (){
    do{
        system("cls");
        cout << endl;
        cout << "[1] Kilogram to Pound" << endl;
        cout << "[2] Gram to Kilogram" << endl;
        cout << "[3] Kilogram to Ounce" << endl;
        cout << "[4] Milligram to Gram" << endl;
        cout << "[0] End the Program" << endl;
        cout << "Select Program : ";
        cin >> a;

        switch(a){

            case 1:{
                system("cls");
                cout << "<<Kilogram to Pound>> " << endl;
                cout << "Enter Kilogram : " << endl;
                cin >> kilogram;
                KilogramtoPound(kilogram,pound);
                TryAgain();
                break;
            }
            case 2:{
                system("cls");
                cout << "<<Gram to Kilogram>> " << endl;
                cout << "Enter Gram : " << endl;
                cin >> gram;
                GramtoKilogram(gram,kilogram);
                TryAgain();
                break;
            }
            case 3:{
                system("cls");
                cout << "<<Kilogram to Ounce>> " << endl;
                cout << "Enter Kilogram : " << endl;
                cin >> kilogram;
                KilogramtoOunce(kilogram,ounce);
                TryAgain();
                break;
            }
            case 4:{
                system("cls");
                cout << "<<Milligram to Gram>> " << endl;
                cout << "Enter Milligram : " << endl;
                cin >> milligram;
                MilligramtoGram(milligram,gram);
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

}

void KilogramtoPound(double kilogram, double pound){
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << endl << "------------------------------------" << endl;
    cout << "Pound : " << (kilogram * 2.20462262) << " lbs" <<endl;
    cout << "------------------------------------"<< endl;
}

void GramtoKilogram(double gram, double kilogram){
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << endl << "------------------------------------" << endl;
    cout << "Kilogram : " << (gram * .001) << " kg" <<endl;
    cout << "------------------------------------"<< endl;
}

void KilogramtoOunce(double kilogram, double ounce){
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << endl << "------------------------------------" << endl;
    cout << "Ounce : " << (kilogram * 35.273962) <<" Oz" <<endl;
    cout << "------------------------------------"<< endl;
}

void MilligramtoGram(double milligram, double gram){
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << endl << "------------------------------------" << endl;
    cout << "Gram : " << (milligram * .001) << " g" <<endl;
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