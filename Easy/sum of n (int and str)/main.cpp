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
    int n =12345;
    string s = "123456789123";
    
    int sum =0;
    int sum_string =0;
    
    
    while(n!=0){
        sum += n%10;
        n /= 10;
    }
    cout<<sum<<endl;
    
    for(int i = 0;i< s.length(); i++){
        sum_string = sum_string + (s[i] - '0');
        
    }
    cout<<sum_string;

    return 0;
}