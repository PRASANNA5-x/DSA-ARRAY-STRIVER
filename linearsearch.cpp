#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> nums;

    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(50);

    int index = -1;
    int number ; 

    cout << "which no to find out:";
    cin >> number ;

    for( int i = 0 ; i < nums.size() ; i++ ){

        if( nums[i] == number ){
            index = i ;
            break; 
        }

    }

     cout << index;
    return 0 ;


}