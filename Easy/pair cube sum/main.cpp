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
    int n = 9;
    int a = 0;
    for(int i = 1;i<=n;i++){
        for(int j = 0;j<=n;j++){
            if(i*i*i + j*j*j == n)
                a++;
        }
    }
    cout<<a;

    return 0;
}