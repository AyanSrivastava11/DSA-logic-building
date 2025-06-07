#include <bits/stdc++.h>
using namespace std;

bool arms(int n){
    int sum = 0,a = 0,real = n;
    
    int k = to_string(n).size();
    
    while(n>0){
        a = n%10;
        sum += pow(a,k);
        n = n/10;
    }
    
    if(sum == real)    return true;
    else    return false;
}

int main()
{
    int lower = 1,upper = 1000;
    for(int i = lower;i<=upper;i++){
        if(arms(i)){
            cout<<i<<", ";
        }   
    }

    return 0;
}