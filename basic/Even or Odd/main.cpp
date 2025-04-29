/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int isEven(int n){
    if((n&1) == 1){
        cout<< "odd";
    }
    else {
        cout<< "even";
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    isEven(n);

    return 0;
}