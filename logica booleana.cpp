/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    //negação
    
   // bool a = 1;
   // a = !a;
   // std::cout<<a;
cout<< "\nConjuncao (e)";

bool chuva = 1;
bool nublado = 1;
bool e = chuva && nublado;

cout<< "\nHoje esta chovendo e hoje esta sol. Valor = "<< e;
cout<< "\nChuva. Valor = "<< chuva;
cout<< "\nNublado. Valor = "<< nublado;

cout<<"\n";
cout<<"DISJUNÇÂO";

bool ou =chuva || nublado;

cout<< "\nHoje esta chovendo ou hoje esta sol. Valor = "<< ou;
cout<< "\nChuva. Valor = "<< chuva;
cout<< "\nNublado. Valor = "<< nublado;











    return 0;
}