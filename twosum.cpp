// brute force
// two sum 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> nums;
//     nums.push_back(2);
//     nums.push_back(6);
//     nums.push_back(5);
//     nums.push_back(8);
//     nums.push_back(11);
//     //2 6 5 8 11 ->14
//     int target = 14 ;
//     for(int i = 0 ; i < nums.size() ; i++){
//         for(int j = 0 ; j < nums.size() ; j++){
//             if( nums[i] == nums[j] ){
//                 continue;
//             }
//             else if ( nums[i] + nums[j] == target){
//                  cout << "Indices: " << i << " " << j << endl;

//             }
//         }
//     }
//     return 0 ;
// }

// BETTER SOLUTION
// HASHMAP

// #include<iostream>
// #include<map>
// #include<vector>
// using namespace std;

// int main(){

//     vector<int> nums;
//     nums.push_back(2);
//     nums.push_back(6);
//     nums.push_back(5);
//     nums.push_back(8);
//     nums.push_back(11);
//     //2 6 5 8 11 ->14
//     int target = 14 ;


//     map<int , int> mpp;

//     for(int i = 0 ; i < nums.size() ; i++ ){

//         int num = nums[i];
//         int required = target - num ;

//         if( mpp.find(required) != mpp.end() ){
//              cout << "Indices are: "
//                  << mpp[required] << " "
//                  << i << endl;

//             return 0;
//         }

//         // Store current number with its index
//         mpp[num] = i;
//     }

//     cout << "No Pair Found";

//     return 0;
// }

// optimal solution
// without hasmap , map 
// used 2 pointer approach

#include<iostream>
#include<vector>
using namespace std ;

int main(){

    vector<int> nums;
// sorted nums
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(7);
    nums.push_back(11);

    int target = 9 ;

    int left = 0;

    int right = nums.size()-1;

    while(left < right){

        int sum = (nums[left]+nums[right]);

        if( sum  == target ){
            cout<<"PAIR FOUND"<<endl;
            
            cout << "Numbers : "
                 << nums[left]
                 << " "
                 << nums[right]
                 << endl;

            cout << "Indices : "
                 << left
                 << " "
                 << right; 

            return 0;
        }
        else if( sum < target){
            left++;
        }
        else if( sum > target){
            right--;
        }
    }
    cout << "No Pair Found";

    return 0;
}