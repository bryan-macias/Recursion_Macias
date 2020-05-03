//Bryan Macias, COSC 1437
//Tower of Hanoi problem using recursion.
//Factorial function

#include <iostream>
#include "functions.h"
using namespace std;

int main() 
{
  int n = 0;

  factorialWelcome();
  cout << "\n\nTower Of Hanoi" << endl;
  cout << "Enter the starting number of disks: " << validateInt(n) << endl;

  towerOH(n, 'A', 'B', 'C');

  return 0;
}