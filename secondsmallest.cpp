#include<iostream>
#include<climits>
#include<vector>
using namespace std ;

int main() 
{
    vector<int> nums;

    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(50);
    nums.push_back(60);

    int smallest = INT_MAX ; 

    int secondsmallest = INT_MAX ; 

    for(int i = 0 ; i < nums.size() ; i++){

        if(nums[i]<smallest)
        {
            secondsmallest = smallest ;
            smallest = nums[i];
        }
        else if(nums[i] < secondsmallest && nums[i] != smallest )
        {
            secondsmallest = nums[i];
        }
    }
    cout<<"SECONDSMALLEST :   "<<secondsmallest;

    return 0 ;



}