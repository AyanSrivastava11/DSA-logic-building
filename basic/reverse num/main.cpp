// Reverse Digits of A Number

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 12345;
    int ans = 0;
    while(num>0){
        ans = ans*10 + num%10; 
        num /=10;
    }
    cout<<ans;
}