/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double a;
  double r;
  
  cout<< "\ninsira a altura:";
  cin>> a;
  
  cout<< "\ninsira a raio:";
  cin>> r;
  
  double area = (2*3.14)*(r*r)+(2*3.14)*(r*a);
  
  cout<<"\nArea: "<< area;
  
  double latas = area/15;
  
  latas = ceil(latas);
  
  cout<<"\nLatas:"<< latas;
  
  double valor = latas*50;
  
  cout<<"\nValor total: "<< valor;
  
  
  
  
    return 0;
}