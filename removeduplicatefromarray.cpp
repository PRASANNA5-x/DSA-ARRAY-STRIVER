#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(10);
    nums.push_back(10);

    nums.push_back(20);
    nums.push_back(20);
    nums.push_back(20);
    
    nums.push_back(30);
    nums.push_back(30);
    nums.push_back(30);

    nums.push_back(40);
    nums.push_back(40);

    for(int a : nums)
    {
        cout<< a << "   ";
    }
    cout << endl ;

    int j = 0 ; 

    for ( int i = 0 ; i < nums.size() ; i++ )
    {
        if( nums[i] != nums[j] )
        {
            j++;

            nums[j] = nums[i];
        }

    }

     for(int i = 0 ; i <= j ; i++ )
        {
            cout << nums[i] << "    ";
        }
    


    return 0;

}