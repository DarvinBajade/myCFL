//name: Bajade, Darvin Kobe M.
//activity name: PT 4
//description: Computer Quiz App
//date: 12/10/2021

#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

void TryAgain();
void GameStart();
void ShowScores();
void ClearScores();

int d, ans=1;
int no1[10];
int no2[10] = {2,1,3,2,1,1,3,2,3,1};
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

    int score=10;
    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.1" << endl;
    cout << "Who coined the term 'bug' in computers "<< endl;
    cout << "1. Ada Lovelace"<< endl;
    cout << "2. Grace Hopper"<< endl;
    cout << "3. Charles Babbage"<< endl;
    cin.ignore();
    cin >> no1[0];
    if(!(no1[0]==no2[0])){
        --score;
    }else{}
    
    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.2" << endl;
    cout << "It is a subtask that returns no value"<< endl;
    cout << "or more than one value"<< endl;
    cout << "1. Void Function"<< endl;
    cout << "2. Pre-Defined Function"<< endl;
    cout << "3. Return Function"<< endl;
    cin.ignore();
    cin >> no1[1];
    if(!(no1[1]==no2[1])){
        --score;
    }else{}
    
    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.3" << endl;
    cout << "Refers to combination of English and" << endl;
    cout << "Programming language" << endl;
    cout << "1. Algorithm"<< endl;
    cout << "2. Programcode"<< endl;
    cout << "3. Pseudocode"<< endl;
    cin.ignore();
    cin >> no1[2];
    if(!(no1[2]==no2[2])){
        --score;
    }else{}
    
    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.4" << endl;
    cout << "It is an example of two way branching"<< endl;
    cout << "1. if statement"<< endl;
    cout << "2. if else statement"<< endl;
    cout << "3. Array"<< endl;
    cin.ignore();
    cin >> no1[3];
    if(!(no1[3]==no2[3])){
        --score;
    }else{}
   
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
    cin >> no1[4];
    if(!(no1[4]==no2[4])){
        --score;
    }else{}
   
    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.6" << endl;
    cout << "Refers to the order in which"<< endl;
    cout << "program statements are performed" << endl;
    cout << "1. Flow of Control "<< endl;
    cout << "2. Sequential"<< endl;
    cout << "3. Left to right"<< endl;
    cin.ignore();
    cin >> no1[5];
    if(!(no1[5]==no2[5])){
        --score;
    }else{}
  
    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.7" << endl;
    cout << "What is the acronym of RAM"<< endl;
    cout << "1. Real Access Memory"<< endl;
    cout << "2. Random Acute Mainframe"<< endl;
    cout << "3. Random Access Memory"<< endl;
    cin.ignore();
    cin >> no1[6];
    if(!(no1[6]==no2[6])){
        --score;
    }else{}

    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.8" << endl;
    cout << "Keyboard and Mouse is an example"<< endl;
    cout << "of a ______ device" << endl;
    cout << "1. output"<< endl;
    cout << "2. input"<< endl;
    cout << "3. sideput"<< endl;
    cin.ignore();
    cin >> no1[7];
    if(!(no1[7]==no2[7])){
        --score;
    }else{}

    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.9" << endl;
    cout << "Who is known as the father"<< endl;
    cout << "of all computers" << endl;
    cout << "1. Albert Einstein"<< endl;
    cout << "2. Blaise Pascal"<< endl;
    cout << "3. Charles Babbage"<< endl;
    cin.ignore();
    cin >> no1[8];
    if(!(no1[8]==no2[8])){
        --score;
    }else{}
 
    system("cls");
    cout << "------------------------------------" << endl;
    cout << "Q no.10" << endl;
    cout << "When was the first computer" << endl;
    cout << "invented" << endl;
    cout << "1. 1943"<< endl;
    cout << "2. 1951"<< endl;
    cout << "3. 1937"<< endl;
    cin.ignore();
    cin >> no1[9];
    if(!(no1[9]==no2[9])){
        --score;
    }else{}

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