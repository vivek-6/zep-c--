#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// int main (){
// Q1. Find an elemement in the array(arr,num)
// Q2. Find the minimum element in the array.
// Q3. Find the maximum element in the array.

// vector<int>abc(5);
// for(int i=0; i<abc.size();i++){
// cin >> abc[i];
// }
// for(int i=0; i<abc.size();i++){
// cout << abc[i];
// }
// return 0;
// }

//  int findElement(vector<int> myArr, int num){
//     for(int i=0;i<myArr.size();i++){
//         if(myArr[i] == num){
//             return i; // returning index here
//         }
//     }
//     return -1; // element is not present in the array
// }
// int maximumElement(vector<int>myArr){
//     int maxEle = -(int)1e9;
//     for(int i=0;i<myArr.size();i++){
//       maxEle = max(myArr[i],maxEle);
//     }
//     return maxEle;
// }
// int main(){
//     vector<int>myArr(5);
//     for(int i=0; i<myArr.size();i++){
//         cin>>myArr[i]; 
//     }
//     cout<<maximumElement(myArr);
// return 0;
// }

void addArrays(vector<int> &a, vector<int> &b){
    int n = a.size();
    int m = b.size();

    vector<int>res(max(n,m)+1, 0);

    int i = n-1;
    int j = m-1;
    int k = res.size() - 1;

    int carry = 0;
    while(k >= 0){
        int sum = carry;
        if(i >= 0){
            sum+=a[i];
            i--;
        }
        if(j >= 0){
            sum+=b[j];
            j--;
        }

        res[k] = sum%10;
        k--;
        carry = sum/10;
    }

    for(int i=0;i<res.size(); i++){
        cout<<res[i]<<" ";
    }

    return;
}

int main(){
     vector<int>myArr = {9,5,4,9};
    vector<int>arr = {2,1,4};

    addArrays(myArr, arr);
}
