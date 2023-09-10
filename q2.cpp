/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


bool IsArithmeticProgression (int * arr, int size);
bool IsArithmeticProgression (int * arr, int size = 3)
{

  int d = arr[1] - arr[0];
  for (int i = size-1; i > 0; --i)
    {
      if ((arr[i] - arr[i - 1]) != d)
	    return false;
    }
  return true;



}

int main ()
{
  // Write C++ code here
  int arr[5] = { 3, 6, 9, 12, 15 };
  int size = 5;
  cout<<IsArithmeticProgression (arr, size);
  return 0;
}
