#include <bits/stdc++.h>
using namespace std;

int digi_sum(int n){
    if(n == 0){
        return 0;
    }
    
    int real = n;
    
    int sum = 0; 
    while(n>0){
        int a = n%10;
        sum += a;
        n /= 10;
    }
    cout<<sum<<endl;
    
    if(sum<=9){
        return sum;
    }
    int digit = 0;
    while(sum>0){
        int b = sum%10;
        digit += b;
        sum /= 10;
    }
    return digit;
}

int main()
{
    cout<<digi_sum(0);

    return 0;
}