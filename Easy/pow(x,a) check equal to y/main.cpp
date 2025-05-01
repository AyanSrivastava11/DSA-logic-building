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
    int x = 10,y = 1;
    int a = 0;
    
    // Basic approach - so much computation
    // while(1){
    //     if((pow(x,a) <= y) || (pow(x,a) == 0)){
    //         if((pow(x,a)) == y){
    //             cout<<"true";
    //             break;
    //         }
    //         else{
    //             a++;
    //         }
    //     }
    //     else{
    //         cout<<"not";
    //         break;
    //     }
    // }
    
    long int power = 1;
    while(power<y){
        power = power * x;
    }
    
    if(power == y){
        cout<<"true";
    }
    else    cout<<"False";
    

    return 0;
}