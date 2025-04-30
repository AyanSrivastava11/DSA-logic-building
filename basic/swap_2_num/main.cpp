/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    
    // c = a;
    // a = b;
    // b = c;
    
    a = a+b;
    b = a-b;
    a = a-b;
    
    cout<<a<<b;

    return 0;
}