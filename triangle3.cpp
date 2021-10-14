//name: Bajade, Darvin Kobe M.
//activity name: Postcard from Gizah
//description: 3 triangle created dynamically
//date: 10/14/2021
#include <iostream>
using namespace std;

int main(){

    int hgt;
    cout << "Height of triangle : "; 
    cin >> hgt;
    
    for(int a = 1; a <= hgt; a++){
        for(int b = 1; b <= (hgt - a); b++){
            cout << " ";
        }
        for(int c = 1; c <= a * 2 - 1; c++){
            if(c == 1 || c == a * 2 - 1){
                cout << "*";
            }
            else if(a == hgt){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
         cout << " ";
        for(int b = 1; b <= (hgt - a); b++){
            cout << "  ";
        }
        for(int c = 1; c <= a * 2 - 1; c++){
            if(c == 1 || c == a * 2 - 1){
                cout << "*";
            }
            else if(a == hgt){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << " ";
        for(int b = 1; b <= (hgt - a); b++){
            cout << "  ";
        }
        for(int c = 1; c <= a * 2 - 1; c++){
            if(c == 1 || c == a * 2 - 1){
                cout << "*";
            }
            else if(a == hgt){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}