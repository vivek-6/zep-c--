#include <iostream>
using namespace std;

//write a function to check weather a number is even or odd.

int odd(){
    int number;
    cout << "Enter a number" << endl;
    cin >> number;

   if(number%2==0){
    cout<<"Even number";
   }else{                    
   cout<<"odd number";
   }
   return 0;
}
int main(){
   odd();
  return 0;
}

// void great(){
//    cout << "My Name is vivek singh" <<endl;
//    return;
// }

// void sam(){
//     int a=15;
//     int b=5;
//     int c=(a+b);
//     cout << c << endl;
//     return;
// }
// int odd(){
//   int num;
//   cout << "Enter Number to check :-" <<endl;
//   cin >> num;
//   if(num%2==0){
//     cout << "Number is Even" << endl;
//   }else{
//     cout << "Number is odd" << endl;
//   }
//   return 0;
// }

// int main(){
//     great();
//     sam();
//     odd();
//     return 0;

// }

// int printNumber(int num){
// cout<<num<<endl;
// return 0;
// }
// int main(){
//     printNumber(55);
// }