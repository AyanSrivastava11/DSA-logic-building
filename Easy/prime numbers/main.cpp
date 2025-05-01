/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6,a = 0;
    
    if(n<=1)
        cout<<"Not Prime";
    else{
        for(int i = 2;i<sqrt(n); i++){
            if(n%i == 0){
                a = 1;
                cout<<"Not Prime";
                break;
            }
        }
    }
    if(a != 1)
        cout<<"prime";

    return 0;
}