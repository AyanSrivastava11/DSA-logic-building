#include <bits/stdc++.h>
using namespace std;

int lcm(int a,int b){
    int min_no = min(a,b);
    int max_no = max(a,b);
    
    for(int i = max_no; ; i+= max_no){
        if((i % min_no) == 0){
            return i;
        }
    }
}

int main()
{
    cout<<lcm(12,18);
    
    // hcf * lcm = a * b;
    
    return 0;
}