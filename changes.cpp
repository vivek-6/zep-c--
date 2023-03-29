#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int findElement(vector<int> myArr, int num){
    for(int i=0;i<myArr.size();i++){
        if(myArr[i] == num){
            return i; // returning index here
        }
    }
    return -1; // element is not present in the array
}
int minimumElement(vector<int> myArr){
    int minEle = (int)1e9;
    for(int i=0;i<myArr.size();i++){
        minEle = min(myArr[i], minEle);
    }
    return minEle;
}

int maximumElement(vector<int> myArr){
    int maxEle = -(int)1e9;
    for(int i=0;i<myArr.size(); i++){
        maxEle = max(myArr[i], maxEle);
    }
    return maxEle;
}


    //Q1 Find an element in the array(arr, num)
    //q2 Find the minimum element in the array.
int main(){
    vector<int>myArr(5);
    for(int i=0; i<myArr.size();i++){
        cin>>myArr[i]; 
    }
    // }
    cout<<endl;
    // cout<<findElement(myArr, 5);
    cout<<minimumElement(myArr);
    // cout<<minimumElement(myArr);
    cout<<maximumElement(myArr);


}