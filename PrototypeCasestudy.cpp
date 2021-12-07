#include<iostream>
#include<fstream>

using namespace std;

void TryAgain();
void GameStart();
void ShowScores();
void ClearScores();

int d, no1, ans=1;
string name;

int main(){
    system("cls");
    cout << "-----------------------------------" << endl;
    cout << "----------Enter your Name----------" << endl;
    cout << "-----------------------------------" << endl;
    cout << "==> ";
    cin >> name;
    
    do{
        system("cls");
        cout<< "||Computer Quiz||" << endl;
        cout<< "[1] Start Game "<< endl;
        cout<< "[2] Show Scores"<< endl;
        cout<< "[3] Clear Scores" << endl;
        cout<< "[4] Close App"<< endl;
        cin >> d;

        switch(d){
            case 1:{
                GameStart();
                TryAgain();
                break;
            }
            case 2:{
                ShowScores();
                TryAgain();
                break;
            }
            case 3:{
                ClearScores();
                TryAgain();
                break;
            }
            case 4:{
                system("cls");
                cout << "Thank you for using the app!";
                return 0;
            }
            default:{
                system("cls");
                cout << "Invalid Input!" << endl;
                TryAgain();
                break;
            }
        }

    }while(ans==1);
}

void GameStart(){
    ofstream File;
    File.open("Highscores.txt", ios:: app);

    int score=5;
    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.1" << endl;
    cout << "Who coined the term 'bug' in computers "<< endl;
    cout << "1. Ada Lovelace"<< endl;
    cout << "2. Grace Hopper"<< endl;
    cout << "3. Charles Babbage"<< endl;
    cin.ignore();
    cin >> no1;
    if(no1==2){
        cout << "correct";
    }
    else{
        --score;
        cout << "incorrect";
    }
    system("cls");
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
        cout << "correct" << endl;
    }
    else{
        --score;
        cout << "incorrect" << endl;
    }
    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.3" << endl;
    cout << "Refers to combination of English and" << endl;
    cout << "Programming language" << endl;
    cout << "1. Algorithm"<< endl;
    cout << "2. Programcode"<< endl;
    cout << "3. Pseudocode"<< endl;
    cin.ignore();
    cin >> no1;
    if(no1==3){
        cout << "correct" << endl;
    }
    else{
        --score;
        cout << "incorrect" << endl;
    }
    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.4" << endl;
    cout << "It is an example of two way branching"<< endl;
    cout << "1. if statement"<< endl;
    cout << "2. if else statement"<< endl;
    cout << "3. Array"<< endl;
    cin.ignore();
    cin >> no1;
    if(no1==2){
        cout << "correct" << endl;
    }
    else{
        --score;
        cout << "incorrect" << endl;
    }
    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.5" << endl;
    cout << "What is the value of z"<< endl;
    cout << "int x=10, y=5;" << endl;
    cout << "int z=(x+y);" << endl;
    cout << "1. 15"<< endl;
    cout << "2. 5"<< endl;
    cout << "3. 10"<< endl;
    cin.ignore();
    cin >> no1;
    if(no1==1){
        cout << "correct" << endl;
    }
    else{
        --score;
        cout << "incorrect" << endl;
    }

    File << endl << name << " your score is : " << score << endl;
}

void ShowScores(){
    string data;
    ifstream ReadFile("Highscores.txt");
    while (getline (ReadFile, data)){
        cout << data << endl;
    }
    ReadFile.close();
 }

 void ClearScores(){
    fstream Clear;
    Clear.open("Highscores.txt", ios::out | ios::trunc); 
    cout << "Data is Cleared" << endl;
 }

void TryAgain(){
    cout << "------------------------------------" << endl;
    cout << "Do you want to return to menu?"<< endl;
    cout << "1 = to continue" << endl;
    cout << "2 = to exit" << endl;
    cout << "------------------------------------"<< endl;
    cin >> ans;
}