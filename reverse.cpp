//name: Bajade, Darvin Kobe M.
//activity name: OE 5
//description: Reverse any input string or integer
//date: 11/1/2021

#include<iostream>
#include<string>

using namespace std;

int ans=1,a,i,k=0;
char ch[30];

void reverse();
void TryAgain();
void reversenum();

int main(){

   do{
   system("cls");
        cout << endl;
        cout << "[1] Reverse a String" << endl;
        cout << "[2] Reverse an Unsigned Integer" << endl;
        cout << "[3] Exit " << endl;
        cout << "Select Program : ";
        cin >> a;

        switch(a){
            
            case 1:{
            system("cls");
            cout << "<<Reverse a String>> " << endl;
             cout << "Enter Any String : " << endl;
             cin.ignore();
             cin.getline(ch,30);
            reverse();
            TryAgain();
            break;
            }
            case 2:{
            cout << "<<Reverse an Unsigned Integer>> " << endl;
            cout << "Enter a Number [0-9]: " << endl;
            cin.ignore();
            cin.getline(ch,30);
            reversenum();
            TryAgain();
            break;
            }
            case 3:{
                 cout << endl << "------------------------------------" << endl;
                cout << "Thank you for using the program" << endl;
                cout << "------------------------------------"<< endl;
                return 0;
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

void reverse(){
    for (i=0; ch[i]!='\0';i++)
    {  
        k++;
    }
    for (i=k-1;i>=0;i--)
    {
        cout << ch[i];
    }
}

void reversenum(){
    for (i=0; ch[i]!='\0';i++)
    {  
        k++;
    }
    for (i=k-1;i>=0;i--)
    {
        cout << ch[i];
    }
}

void TryAgain(){
    
    cout << endl << "------------------------------------" << endl;
    cout << "Do you want to try again"<< endl;
    cout << "1 = to continue" << endl;
    cout << "0 = to exit" << endl;
    cout << "------------------------------------"<< endl;
    cin >> ans;
}