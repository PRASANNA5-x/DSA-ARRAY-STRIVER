#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);

    int maxi = 0 ;

    int count = 0;

    for(int i = 0 ; i < nums.size() ; i++){

        if(nums[i]==1){
            count++;
            maxi = max(maxi , count);
        }
        else{
            count = 0;
        }
    }
   //return maxi;
   cout << "Maximum Consecutive 1's = " << maxi << endl;

    return 0;
}