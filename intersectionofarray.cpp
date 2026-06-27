// BRUTE FORCE 
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// int main(){

//     int i = 0 ; 
//     int j = 0 ;
    

//     vector<int> first;
//     first.push_back(10);
//     first.push_back(20);
//     first.push_back(20);
//     first.push_back(30);
//     first.push_back(40);

//     vector<int> second;
//     second.push_back(10);
//     second.push_back(20);
//     second.push_back(40);
//     second.push_back(50);

//     vector<int> ans;

//     int n = first.size();
//     int m = second.size();

//     for( i = 0 ; i < n ; i++){

//         int element = first[i];

//         for(j = 0 ; j < m ; j++){

//             if( element == second[j] ){

//                 ans.push_back(element);

//                 second[j] = INT_MIN;

//                 break;

//             }
//         }

//     }


//     cout<< "INTERSECTION OF TWO ARRAYS :-> " ;
//     for(int a : ans){
//         cout << a <<"   " ; 
//         cout<<endl;
//     }




//     return 0 ;

// }


// OPTIMAL SOLUTION 

#include<iostream>
#include<vector>
using namespace std ; 

int main() {


    vector<int> first ; 
    vector<int> second;
    vector<int> ans ;

    first.push_back(1);
    first.push_back(2);
    first.push_back(2);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);

    second.push_back(2);
    second.push_back(2);
    second.push_back(3);
    second.push_back(3);

    int i = 0 ;
    int j = 0 ;

    while( i < first.size() && j<second.size() ){

        if( first[i]==second[j]){
            ans.push_back(first[i]);
            i++;
            j++;
        }
        else if( first[i] > second[j] ){
            j++;
        }
        else if( first[i] < second[j] ){
            i++;
        }
    }

    cout<< "INTERSECTION ->";
    for(int a : ans){
        cout<<a<<"  ";
    }
    cout<<endl;




    return 0 ;
}