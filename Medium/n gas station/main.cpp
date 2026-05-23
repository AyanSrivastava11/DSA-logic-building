/*

This question was asked in Infosys Interview from me. 

It was a coding question to calculate cost of vehicle to move from arr[i] gas stations to start.
We are given an array of size n , in each index i of array we have a number arr[i] which tells us the current loaction of vehichle.
If arr[i] = 1 then it means vehicle is at start and cost to move from start is 0.
If arr[i] = k then it means vehicle is at kth gas station and cost to move from kth gas station to start is 1.
We have to calculate total cost of moving vehicle from all gas stations to start.

example 1: arr = {2,2,1,2}, n = 4
moving steps:
from arr[0] gas station = 2 to start : 2 -> 3 -> 4 -> 1 , cost = 3
from arr[1] gas station = 2 to start : 2 -> 3 -> 4 -> 1 , cost = 3
from arr[2] gas station = 1 to start : 1 , cost = 0
from arr[3] gas station = 2 to start : 2 -> 3 -> 4 -> 1 , cost = 3
total cost = 3 + 3 + 0 + 3 = 9

example 2: arr = {2,2,3}, n = 3
moving steps:
from arr[0] gas station = 2 to start : 2 -> 3 -> 1 , cost = 2
from arr[1] gas station = 2 to start : 2 -> 3 -> 1 , cost = 2
from arr[2] gas station = 3 to start : 3 -> 1 , cost = 1
total cost = 2 + 2 + 1 = 5

example 3: arr = {1,2}, n = 2
moving steps:
from arr[0] gas station = 1 to start : 1 , cost = 0
from arr[1] gas station = 2 to start : 2 -> 1 , cost = 1
total cost = 0 + 1 = 1

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2,2,2};
    int n=arr.size();
    
    int total_cost = 0;
    
    for(int i =0;i<n;i++){
        int cost =0;
        int count = i;

        if(arr[i] == 1) cost += 0;
        
        while(arr[count] != 1 && count <n ){
            count = arr[count];
            cost = cost + ( n - count + 1);
            break;
        }
        total_cost += cost;
    }
    cout<<total_cost;


    return 0;
}