#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> nums;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);
    nums.push_back(9);

    int size = nums.size() + 1 ;

    int actualsum = 0 ;

    int expectedsum = size * (size + 1) / 2 ;

    for( int i = 0 ; i < nums.size() ; i++ ){
        actualsum += nums[i] ;
    }

    int missingnumber = expectedsum - actualsum ;

    cout<< "MISSING NUMBER->"<<missingnumber;

    return 0 ;
}