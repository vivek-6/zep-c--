#include <iostream>
using namespace std;
#include <array>
#include <vector>

// int main(){

// int arr[] = {1,2,3,4,5};
// cout <<arr[0] <<endl;

// arr[2]=15;
// cout << arr[2] + arr[0] << endl;

// for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;

// }

// Finding the size of array

// int main(){

//     int arr[10] ={1,2,3,4,5,7,7,9,6,8};

//     int size = sizeof(arr)/sizeof(arr[1]);
//     cout <<"length of the array : " << size <<endl;

// cout << arr[100] << endl;

//     return 0;
// }

/// vector :- to run this we add #include<vector> in header file.

// int main()
// {

//     vector<int>abc(10, 88);
//     for (int i = 0; i < abc.size(); i++)
//     {
//         cout<<abc[i]<<" ";
//     }
//     return 0;
// }

int main(){
    vector<int>xyz;
    xyz.push_back(5);
    xyz.push_back(5);
    xyz.push_back(5);
    xyz.push_back(5);
    for (int i = 0; i < xyz.size(); i++)
    {
        cout<<xyz[i]<<" ";
        
    }
    cout<< xyz.size() << endl;
}