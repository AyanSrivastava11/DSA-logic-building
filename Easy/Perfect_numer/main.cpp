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

vector<int> add_fract(vector<int> a,vector<int> b){
    vector<int> ans;
    
    int common_deno = lcm(a[1],b[1]);
    
    int num = (a[0]) * (common_deno / a[1]) + (b[0]) * (common_deno / b[1]);
    
    // now we need to convert num and common_deno in simple fraction ie can be done by divide by hcf
    
    ans.push_back(num);
    ans.push_back(common_deno);
    return ans;
    
}

int main()
{
    vector<int> a = {1,2};
    vector<int> b = {3,2};
    vector<int> ans = add_fract(a, b); 
    cout<<ans[0]<<", "<<ans[1];

    return 0;
}