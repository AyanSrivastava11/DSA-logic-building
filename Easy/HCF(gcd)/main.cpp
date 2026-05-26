#include <iostream>
using namespace std;

int hcf(int a,int b){
    if(a == 0)
        return b;
    
    else if(b == 0)
        return a;
        
    else if(a == b)
        return a;
    
    else if(a>b){
        return hcf((a-b),b);
    }
    return hcf(a,(b-a));
}

int main()
{
    cout<<hcf(1,6);
    
    int p = 5,q = 4;
    int r = min(p,q);
    
    while(r>0){
        if(r%p ==0 && r%q==0){
            cout<<r;
            break;
        }
        r--;
    }

    return 0;
}