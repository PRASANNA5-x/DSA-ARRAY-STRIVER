#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> nums;

    nums.push_back(1);
    nums.push_back(11);
    nums.push_back(10);
    nums.push_back(110);
    nums.push_back(111);

    int k;

    cout << "Enter k: ";
    cin >> k;

    int n = nums.size();

    // Temporary vector
    vector<int> temp(n);

    // Place every element at its new position
    for(int i = 0; i < n; i++) {
        temp[(i + k) % n] = nums[i];
    }

    cout << "Rotated Array: ";

    for(int x : temp) {
        cout << x << " ";
    }

    return 0;
}


// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
        
//         vector<int> temp(nums.size());

//         for(int i = 0 ; i < nums.size() ; i++){

//             temp[ ( i + k ) % nums.size()] = nums[i];

//         }

//         nums = temp ;

//     }
// };