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
    int n,sum=0;
    cin>>n;
    for (int i = 0;i<=n;i++){
        sum += i; 
    }
    cout<<sum;
    // cout<<"sum of "<<n<<" numbers is: "<<(n*(n+1))/2;

    return 0;
}