//name: Bajade, Darvin Kobe M.
//activity name: PT 1
//description: Odd and Even Scheme
//date: 10/6/2021

#include <iostream>
using namespace std;

int main() 
{
  int a,b,c;

  cout << "Enter set number(s): ";
  cin >> a;
  cout << "Enter " << a << " number(s): ";

  while (c<a){
      c==0;
      cin >> b;
        if (b%2==0){
        cout << b << " is even."<<endl;
        }
        else if (b%2!=0){
        cout << b << " is odd."<<endl;
        }
      c++;
  }

  return 0;
}