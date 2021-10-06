

#include<iostream>
using namespace std;

int main(){
    int a;

    cout << "Enter a number : ";
    cin >> a;
    
    if (a>50){
        cout << "The number is greater than 50";
    }
    else if (a<50){
        cout << "The number is less than 50";
    }
    else if (a==50){
        cout << "The number is 50";
    }

    return 0;
}
