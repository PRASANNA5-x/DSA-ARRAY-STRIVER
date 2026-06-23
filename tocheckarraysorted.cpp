#include<iostream>
#include<vector>
using namespace std; 


int main(){

    vector <int> nums ;

    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(50);
    nums.push_back(60);

    bool sorted = true ;

    for(int i = 0 ; i < nums.size()-1  ; i++ ){

        if(nums[i]>nums[i+1]){
            sorted = false ; 
            break;

        }
    }
    if(sorted){
        cout<<"array sorted";
    }else{
        cout<<"array is not sorted";
    }

    return 0;
}