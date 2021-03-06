#include<iostream>
#include<fstream>

using namespace std;

void TryAgain();
void GameStart();
void ShowScores();
void ClearScores();

int d, no1, ans=1;
char name[30];

int main(){
    system("cls");
    cout << "-----------------------------------" << endl;
    cout << "----------Enter your Name----------" << endl;
    cout << "-----------------------------------" << endl;
    cout << "==> ";
    cin.getline(name,30);
    
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

    int score=0;
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
        system("cls");
        ++score;
        cout << "correct" << endl;
        system("pause");
    }
    else{
        system("cls");
        cout << "incorrect" << endl;
        system("pause");
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
        system("cls");
        ++score;
        cout << "correct" << endl;
        system("pause");
    }
    else{
        system("cls");
        cout << "incorrect" << endl;
        system("pause");
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
        system("cls");
        ++score;
        cout << "correct" << endl;
        system("pause");
    }
    else{
        system("cls");
        cout << "incorrect" << endl;
        system("pause");
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
        system("cls");
        ++score;
        cout << "correct" << endl;
        system("pause");
    }
    else{
        system("cls");
        cout << "incorrect" << endl;
        system("pause");
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
        system("cls");
        ++score;
        cout << "correct" << endl;
        system("pause");
    }
    else{
        system("cls");
        cout << "incorrect" << endl;
        system("pause");
    }
    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.6" << endl;
    cout << "Refers to the order in which"<< endl;
    cout << "program statements are performed" << endl;
    cout << "1. Flow of Control "<< endl;
    cout << "2. Sequential"<< endl;
    cout << "3. Left to right"<< endl;
    cin.ignore();
    cin >> no1;
    if(no1==1){
        system("cls");
        ++score;
        cout << "correct" << endl;
        system("pause");
    }
    else{
        system("cls");
        cout << "incorrect" << endl;
        system("pause");
    }
    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.7" << endl;
    cout << "What is the acronym of RAM"<< endl;
    cout << "1. Real Access Memory"<< endl;
    cout << "2. Random Acute Mainframe"<< endl;
    cout << "3. Random Access Memory"<< endl;
    cin.ignore();
    cin >> no1;
    if(no1==3){
        system("cls");
        ++score;
        cout << "correct" << endl;
        system("pause");
    }
    else{
        system("cls");
        cout << "incorrect" << endl;
        system("pause");
    }
    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.8" << endl;
    cout << "Keyboard and Mouse is an example"<< endl;
    cout << "of a ______ device" << endl;
    cout << "1. output"<< endl;
    cout << "2. input"<< endl;
    cout << "3. sideput"<< endl;
    cin.ignore();
    cin >> no1;
   if(no1==2){
        system("cls");
        ++score;
        cout << "correct" << endl;
        system("pause");
    }
    else{
        system("cls");
        cout << "incorrect" << endl;
        system("pause");
    }
    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.9" << endl;
    cout << "Who is known as the father"<< endl;
    cout << "of all computers" << endl;
    cout << "1. Albert Einstein"<< endl;
    cout << "2. Blaise Pascal"<< endl;
    cout << "3. Charles Babbage"<< endl;
    cin.ignore();
    cin >> no1;
    if(no1==3){
        system("cls");
        ++score;
        cout << "correct" << endl;
        system("pause");
    }
    else{
        system("cls");
        cout << "incorrect" << endl;
        system("pause");
    }
    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.10" << endl;
    cout << "When was the first computer" << endl;
    cout << "invented" << endl;
    cout << "1. 1943"<< endl;
    cout << "2. 1951"<< endl;
    cout << "3. 1937"<< endl;
    cin.ignore();
    cin >> no1;
    if(no1==1){
        system("cls");
        ++score;
        cout << "correct" << endl;
        system("pause");
    }
    else{
        system("cls");
        cout << "incorrect" << endl;
        system("pause");
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