//Given a string, find the first non-repeated character. If none exists, return -1.
// Example:
// Input: "hackerearth"
// Output: 'c'


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hackerearth";
    unordered_map<char,int> mp;
    
    for(char ch:s){
        mp[ch]++;
    }
    for(char ch:s){
        if(mp[ch] == 1){
            cout<<ch;
            return 0;
        }
    }
    cout<<-1;

    return 0;
}


Write a SQL query to find the names of employees 
who have placed an order using tables Employees and Orders.

select Employee.name from Employees JOIN orders on Employees.id = orders.id;




