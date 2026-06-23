#include<iostream>
#include<vector>
#include <climits>
using namespace std ;

int main(){

  
  vector<int> nums(5);

    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;
    nums[3] = 40;
    nums[4] = 50;

    for (int a : nums){
        cout<< a <<"    ";
    }

    int smallest = INT_MAX ;

    for(int i = 0 ; i < nums.size() ; i++ ){
       
        
        if(nums[i] <  smallest){
            smallest = nums[i];
        }


    }
   
    cout << "Smallest Element = " << smallest << endl;

    return 0 ;
}