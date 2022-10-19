/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  double panjang, lebar, L;

  cout << "masukkan panjang: ";
  cin >> panjang;
  cout << "masukkan lebar: ";
  cin >> lebar;
  L = panjang * lebar;
  cout << "luas persegi: " << L;

  return 0;
}
