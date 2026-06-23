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

    int largest = INT_MIN ;

    for(int i = 0 ; i < nums.size() ; i++ ){
       
        
        if(nums[i] >  largest){
            largest = nums[i];
        }


    }
   
    cout << "Largest Element = " << largest << endl;

    return 0 ;
}