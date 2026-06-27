// BRUTE FORCE APPROACH
// USED SET DATA STRUCTURE TO STORE UNIQUE ELEMENTS
// #include<iostream>
// #include<vector>
// #include<set>
// using namespace std ; 

// int main(){

//     vector<int> first;
//     vector<int> second;

//     first.push_back(10);
//     first.push_back(20);
//     first.push_back(20);
//     first.push_back(30);
//     first.push_back(40);
//     first.push_back(40);
//     first.push_back(50);

//     second.push_back(50);
//     second.push_back(60);
//     second.push_back(70);
//     second.push_back(80);
//     second.push_back(90);
//     second.push_back(80);
//     second.push_back(90);
//     second.push_back(100);

   
//     set<int> st;

//     for(int i = 0 ; i < first.size() ; i++){
//         st.insert(first[i]);
//     }

//     for(int i = 0 ; i < second.size() ; i++){
//         st.insert(second[i]);
//     }

//     vector<int> temp(st.begin(), st.end());

//    for(int a : temp){
//         cout<<a<<"  ";
//    }

//     return 0 ;
// }

#include<iostream>
#include<vector>
using namespace std;

int main() {

    // First sorted array
    vector<int> first;

    first.push_back(10);
    first.push_back(20);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);
    first.push_back(40);
    first.push_back(50);

    // Second sorted array
    vector<int> second;

    second.push_back(50);
    second.push_back(60);
    second.push_back(70);
    second.push_back(80);
    second.push_back(90);
    second.push_back(90);
    second.push_back(100);

    // Vector to store union
    vector<int> temp;

    // Pointer for first array
    int i = 0;

    // Pointer for second array
    int j = 0;

    // Continue until one array gets finished
    while(i < first.size() && j < second.size()) {

        // If first array element is smaller
        if(first[i] < second[j]) {

            // Avoid duplicates
            if(temp.size() == 0 || temp.back() != first[i]) {
                temp.push_back(first[i]);
            }

            // Move first pointer
            i++;
        }

        // If second array element is smaller
        else if(second[j] < first[i]) {

            // Avoid duplicates
            if(temp.size() == 0 || temp.back() != second[j]) {
                temp.push_back(second[j]);
            }

            // Move second pointer
            j++;
        }

        // If both elements are equal
        else {

            // Add only one copy
            if(temp.size() == 0 || temp.back() != first[i]) {
                temp.push_back(first[i]);
            }

            // Move both pointers
            i++;
            j++;
        }
    }

    // If elements remain in first array
    while(i < first.size()) {

        if(temp.size() == 0 || temp.back() != first[i]) {
            temp.push_back(first[i]);
        }

        i++;
    }

    // If elements remain in second array
    while(j < second.size()) {

        if(temp.size() == 0 || temp.back() != second[j]) {
            temp.push_back(second[j]);
        }

        j++;
    }

    // Print union
    cout << "Union Array: ";

    for(int a : temp) {
        cout << a << " ";
    }

    return 0;
}
