#include <bits/stdc++.h>
using namespace std;

vector<string> FizzBuzz(int n){
    vector<string> s;
    
    for(int i = 1;i<=n;i++){
        if((i%3 == 0 && i%5==0))
        s.push_back("FizzBuzz");
        
        else if((i%3) == 0)
        s.push_back("Fizz");
        
        else if((i%5) ==0)
        s.push_back("Buzz");
        
        else
        s.push_back(to_string(i));
        
    }
    
    return s;
    
    
}

int main()
{
    int n = 20;
    vector<string> ans = FizzBuzz(n);
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << " ";
    }


    return 0;
}