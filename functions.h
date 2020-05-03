#include "Input_Validation_Extended.h"
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

//factorial function.
int factorialR(int);
void factorialWelcome();

int factorialR(int n)
{
  if(n==0)
  {
    return 1; // factorial if 0 == 1
  }
  else
  {
    return n * factorialR(n-1); // Where recursion occurs
  }
}

void factorialWelcome()
{
  int fInput = 0;
  cout << "Hello, please enter the number you want the factorial for: " << validateInt(fInput);
  cout << "\nThe factorial of " << fInput << " is " << factorialR(fInput);
  
  
}

void towerOH(int n, char A, char B, char C)
{

  if(n==1)
  {
    cout << "Move Disk " << n << " from " << A << " to " << C << endl;
    return;
  }
  towerOH(n-1,A,C,B);
  cout << "Move Disk " << n << " from " << A << " to " << C << endl;
  towerOH(n-1,B,A,C);

}
#endif