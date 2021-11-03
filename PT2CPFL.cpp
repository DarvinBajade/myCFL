//Performance Task 
//Description: Conversion Console App using [Dollar to Peso & Peso to Dollar]
//                 This is also a Debug activity
//Name: Bajade, Darvin Kobe M.

#include <iostream>

using namespace std;

//function for monetary formatting
struct group_facet: public numpunct<char> {
    protected:
        string do_grouping() const { return "\003"; }
};

// First function prototypes
    void promptAndWait();

/* Function takes two arguments: one float and one unsigned int.
    The unsigned int has a default value of 1. Function returns no value.*/
void dollarsToPeso(float rate, double dollars = 0);
void PesoToDollar(float rate, double peso = 0);
int ans = 1;

int main() 
{
    //Declare the variables for the user input.
    double rate = 50.73; // $1 = 50.73 Pesos
    double dollarsIn, pesoIn;
    int ch;

    do{
        system("cls");
        cout << endl;
        cout << "Dollar to Peso Conversion App" << endl << endl;
        cout << "[1] Dollar to Peso" << endl;
        cout << "[2] Peso to Dollar" << endl;
        cout << "[0] Exit the Coversion App" << endl;
        cout << "Select Conversion : ";
        cin >> ch;

        switch(ch){
            case 1:{
                system("cls");
                cout << "----------------------------------------------------------------------------------" << endl;
                cout << "<< Convert Dollar to Peso >>" << endl;
                cout << "Enter a US dollar amount (without the dollar sign, commas or a decimal) : [####] " << endl;
                cout << "----------------------------------------------------------------------------------" << endl;
                cin >> dollarsIn;
                dollarsToPeso(rate, dollarsIn); 
                promptAndWait();
                break;
            }
            case 2:{
                system("cls");
                 cout << "----------------------------------------------------------------------------------" << endl;
                cout << "<< Convert Peso to Dollar >>" << endl;
                cout << "Enter Philippine Peso amount (without the peso sign, commas or a decimal) : [####]" << endl;
                 cout << "----------------------------------------------------------------------------------" << endl;
                cin >> pesoIn;
                PesoToDollar(rate, pesoIn);
                promptAndWait();
                break;
            }
            case 0:{
                system("cls");
                cout << "Conversion App Terminated \nThank you for using the app!";
                return 0;
            }
            default:{
                system("cls");
                cout << "Invalid Input!" << endl;
                promptAndWait();
            }

        }
    }while(ans == 1); 
return 0;
}



    void promptAndWait(){
    cout << "------------------------------------" << endl;
    cout << "Do you want to Convert again?"<< endl;
    cout << "1 = to continue" << endl;
    cout << "2 = to exit" << endl;
    cout << "------------------------------------"<< endl;
    cin >> ans;
    }

    void dollarsToPeso (float rate, double dollar) {
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "\n$" << dollar << " = " << (rate * dollar) << " Pesos. \n";
    }

    void PesoToDollar(float rate, double peso){
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "\nP " << peso << " = " << (peso / rate) << " US. \n";
    }