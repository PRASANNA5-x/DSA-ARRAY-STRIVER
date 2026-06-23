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

    int largest = INT_MIN ; 

    int secondlargest = INT_MIN ; 

    for(int i = 0 ; i < nums.size() ; i++){

        if(nums[i]>largest)
        {
            secondlargest = largest ;
            largest = nums[i];
        }
        else if(nums[i] > secondlargest && nums[i] != largest )
        {
            secondlargest = nums[i];
        }
    }
    cout<<"SECONDLARGEST  :   "<<secondlargest;

    return 0 ;



}