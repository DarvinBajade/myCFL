//name: Bajade, Darvin Kobe M.
//activity name: CaseStudy
//description: Quiz
//date: 12/2/2021

#include<iostream>
#include<fstream>

using namespace std;

void TryAgain();
void GameStart();

int d, score=10, no1, ans=1;
string name;

int main(){

    system("cls");
    cout << "---------------------------------------------" << endl;
    cout << "---------------Enter your Name---------------" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "==>";
    cin >> name;
    
    do{
        system("cls");
        cout<< "||Computer Quiz||" << endl;
        cout<< "[1] Start Game "<< endl;
        cout<< "[2] Show highscores"<< endl;
        cout<< "[3] Close app"<< endl;
        cin >> d;

        switch(d){
            case 1:{
                GameStart();
                
                //TryAgain();
                break;
            }
            case 2:{
    
                //TryAgain();
                break;
            }
            case 3:{
                system("cls");
                cout<< "Thank you for using the App";
                return 0;
            }
            default:{
                cout<< "Invalid Input";
                //TryAgain();
                break;
            }
        }

    }while(ans==1);
}

void GameStart(){
    qno1:
    cout << "------------------------------------" << endl;
    cout << "Q no.1" << endl;
    cout << "Who coined the term 'bug' in computers "<< endl;
    cout << "1. Ada Lovelace"<< endl;
    cout << "2. Grace Hopper"<< endl;
    cout << "3. Charles Babbage"<< endl;
    cin.ignore();
    cin >> no1;
    if(no1==2){
        score;
        goto qno2;
    }
    else{
        --score;
        goto qno2;
    }
    qno2:
    cout << "------------------------------------" << endl;
    cout << "Q no.2" << endl;
    cout << "It is a subtask that returns no value"<< endl;
    cout << "or more than one value"<< endl;
    cout << "1. Void Function"<< endl;
    cout << "2. Pre-Defined Function"<< endl;
    cout << "3. Return Function"<< endl;
    cin.ignore();
    cin >> no1;
    if(no1==1){
        score;
        goto qno3;
    }
    else{
        --score;
        goto qno3;
    }
    qno3:
    cout << score;
}



void TryAgain(){
    cout << "------------------------------------" << endl;
    cout << "Do you want to return to menu?"<< endl;
    cout << "1 = to continue" << endl;
    cout << "2 = to exit" << endl;
    cout << "------------------------------------"<< endl;
    cin >> ans;
}