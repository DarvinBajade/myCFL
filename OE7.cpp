//name: Bajade, Darvin Kobe M.
//activity name: OE7
//description: Login Credentials
//date: 11/24/2021

#include<iostream>
#include<cstring>

using namespace std;

void unsorted(int a[], int b);
void ascending(int a[], int b);
void descending(int a[], int b);
void Tryagain();
void password();
int ans=1;


const int size = 100;

int main (){
    char my_username[50] = "kobe boii",my_password[50] = "257187360",username[50],password[50];
   
    cout <<"||App locked||" << endl;
    cout << "Enter Username: " << endl;
    cin.getline(username,50);
    if(!(strcmp(my_username, username))){
         system("cls");
        cout << " Correct Username " << endl;
         cout << "Enter Password : ";
         cin.getline(password,50);
        if(!(strcmp(my_password, password))){
             system("cls");
            cout << " Access Granted, Welcome " << username << endl;
            system("pause");
        }else{
             system("cls");
            cout << "Incorrect Password " << endl;
            return 0;
        }
    }else{
         system("cls");
        cout << "Incorrect Username " << endl;
        return 0;
    }

    int a[size], b, ch;
    system("cls");
    cout << "-----------------------------------" << endl;
    cout << "Number of Elements in Array" << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;
    cout << "quantity of elements: ";
    cin >> b;

    system("cls");
    cout << "-----------------------------------" << endl;
    cout << "Enter " << b << " numbers" << endl;
    cout << "-----------------------------------" << endl;
      
    for(int i = 0; i < b; i++){
        cin >> a[i];
    }

    do{
        system("cls");
        cout << "-----------------------------------" << endl;
        cout << " Array sorting Program" << endl;
        cout << "-----------------------------------" << endl;
        cout << " [1] Searching Array " << endl;
        cout << " [2] Sort Array Ascending " << endl;
        cout << " [3] Sort Array Descending " << endl;
        cout << " [4] Exit " << endl;
        cout << "-----------------------------------" << endl;
        cin >> ch;

        switch (ch){
            case 1:{
                unsorted(a,b);
                Tryagain();
                break;
            }
            case 2:{
                ascending(a,b);
                Tryagain();
                break;
            }
            case 3:{
                descending(a,b);
                Tryagain();
                break;
            }
            case 4:{
                system("cls");
                cout << "-----------------------------------" << endl;
                cout << "Thank you for using the program" << endl;
                cout << "-----------------------------------" << endl;
                return 0;
            }                
            
            default:
                system("cls");
                cout << "-----------------------------------" << endl;
                cout << "Invalid Input" << endl;
                cout << "-----------------------------------" << endl;
                Tryagain();
                break;
        }
    }while (ans==1);
    
}

void unsorted(int a[], int b){
    system("cls");
    for(int x=0; x<b;x++){
        cout << "Unsorted Array Elmement ["<<x<<"] "<< a[x] << endl;
    }
}

void ascending(int a[], int b){
    int j, y, temp;

    for(y=0; y<b; y++){
        for(j=y+1; j<b; j++){
            if(a[j] < a[y]){
                temp = a[y];
                a[y] = a[j];
                a[j] = temp;
            }
        }
    }
    
    system("cls");
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(y=0; y<b; y++){
        cout<<"Ascending Array : "<<a[y]<<endl;
    }
}

void descending(int a[], int b){
    int j, y, temp;

    for (y=0; y<b; ++y){
        for (j=y+1;j<b;++j){
            if (a[y] < a[j]){
                temp = a[y];
                a[y] = a[j];
                a[j] = temp;
            }
        }
    }

    system("cls");
    cout<< endl << "Numbers in Descending Order : " << endl;
    for (y = 0; y < b; ++y){
        cout<<"Descending Array : "<<a[y];
        cout<< endl;
    }
}

void Tryagain(){
    cout << "------------------------------------" << endl;
    cout << "Do you want to try again?"<< endl;
    cout << "1 = to continue" << endl;
    cout << "2 = to exit" << endl;
    cout << "------------------------------------"<< endl;
    cin >> ans;
    system("cls");
}
