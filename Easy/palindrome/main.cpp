#include <iostream>
using namespace std;

bool pali(int n){
    int real = n,a = 0,new_no = 0;
    while(n>0){
        a = n%10;
        new_no = new_no*10 + a;
        n = n/10;
    }
    return (real == new_no); 
}

int main()
{
    cout<<pali(12321);

    return 0;
}