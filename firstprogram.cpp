#include <iostream>
using namespace std;
// int main()
// {
// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);

// #endif

//   int a, b;
//   cin >> a >> b;
//   cout << a + b;

//   return 0;
// };

  // int number;
  // cout<<"type a number";
  // cin>> number;
  // if(number>=0){
  //   cout<<"positve number";
  // } 
  // else if(number<=0){
  //   cout <<"negative number";
  // } else{
  //   cout <<"neither positive nor negative";
  // }
   
   //Even odd:-
  //  if(number%2==0){
  //   cout<<"Even number";
  //  }else{                    
  //  cout<<"odd number";
  //  }
                  // printing number from 1-5:-

//   int main(){
//   int number;
//   for(int number=1; number<=5; number++){
//   cout << number <<endl;}
//   return 0;
// };


// check weather number is greter than 5 

// int main (){
//   int number;
//   cout<< "enter a number";
//   cin >> number;
//   if(number>5){
//     cout << "number is greater than 5" <<endl;
//   }else if(number<5){
//     cout << "number is smaller than 5" << endl;
//   }else{
//     cout << "number is equal to 5" << endl;
//   }
//   return 0;
// };

// checking weather a number is positive or not

// int main(){
//   int num ;
//   cout << "enter a num";
//   cin >> num;
//   if(num > 0){
//    cout << "+ve number" << endl;
//   }else if(num < 0){
//     cout << "-ve number" << endl;
//   }else{
//     cout << "neither +ve nor -ve";
//   }
//   return 0;
// };

// Checking number is even or odd

// int main(){
//   int num;
//   cout << "enter a number";
//   cin >> num;

// if(num%2 == 0){
// cout << "Even number" << endl;
// }else{
//   cout << "Odd number" << endl;
// }
// return 0;
// };

// checking letter is consontant or vowel;

// int main(){
//   char ch;
//   cout << "enter a letter";
//   cin >> ch;
//   if(ch== 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){
//     cout << "leteer is vowel" << endl;
//   }else{
//     cout << "letter is consonent" << endl ;
//   }
// };

            // print the sum of natural  number using while loop;

// int main(){
// int a;
// cin >> a;

// int i =1;
// int sum = 0;

// while (i<= a)
// {
//   sum = sum+i;
//   i=i+1;
// }
// cout << "total sum " << sum << endl;

// }

                  // Prime number by while loop:-

// int main(){

// int a;
// cout << "Enter a number";
// cin >> a;
// if(a%2!=0){
// cout << " prime number" << endl ;
// }else{
//   cout << "Not a prime number" << endl;
// }
// }

//Finding qutotient and remainder 

// int main(){

// int dividend;
// int divisor;

// cout << "enter your dividend";
// cin >> dividend;

// cout << "enter your divisor";
// cin >> divisor;


// int qutotient =  dividend / divisor;
// int remainder =  dividend % divisor;

// cout << "qutotient is " << qutotient << endl;
// cout << " remainder" << remainder << endl;

// }

// Reversing number

// int main(){
//   int n;
//   cout << "enter number";
//   cin >> n;

//   int ans = 0;
//   while ( n!=0)
//   { 
//     int rem = n%10;
//     ans= ans*10 + rem;
//     n=n/10;
//   }
//   cout << "the number is" << ans << endl;

//   return 0;
// }

// prime number

// int main(){
//   int n;
//   cin >> n;
//   int i =2;

//   while (i<n){
//       if(n%i==0){
//         cout << "not prime for : " << i << endl;
//       }
//       else{
//           cout << " prime for : " << i << endl;
//       }
//       i=i+1;
//   }

// }

//count digits of number:-
// int main(){

//   int a;
//   cout<< "Enter number";
//   cin>>a;

//   int count =0;;
//   while(a!= 0){

//      a=a/10;
//      count= count+1;    

//   }
//   cout << count<<endl;
// }

// int main(){
//   int a;
//   cout << "Enter star num";
//   cin >> a;

// for( int a=1; a<=1;a++){
//   cout<<"*" <<endl;
//   cout<<"**" <<endl;
//   cout<<"***" <<endl ;
//   cout<<"****" <<endl;
//   cout<<"*****" <<endl;

// }
// }

// int main(){
//    int row;
//    int cst;
//    for(int row=1;row<=5;row++){
//     for(int cst =1;cst<=row; cst++){
//       cout<< "*";
    
//     }
//     cout << endl;
//    }
// }

// int main(){
//    int row;
//    int cst;
//    for(int row=5;row>=1;row--){
//     for(int cst =1;cst<=row; cst++){
//       cout<< "*";
    
//     }
//     cout << endl;
    
//    }
// }

// int main(){
//   int n;
//   cout << "enter number";
//   cin >> n;
//    int nsp =n-1;
//    int nst =1;

//    for(int row =1;row <=n;row++){
//      for(int csp=1;csp<=nsp;csp++){
//          cout << " ";
//      }
//      for(int cst=1;cst<=nst;cst++){
//       cout<<"*";
//      }
//      nsp--;
//      nst++;
//      cout<<endl;
//    }
// }

// int main(){
//   int n;
//   cout << "enter number";
//   cin >> n;
//    int nsp =n;
//    int nst =n;

//    for(int row =1;row <=n;row++){
//      for(int csp=1;csp<=nsp;csp++){
//          cout << " ";
//      }
//      for(int cst=1;cst<=nst;cst++){
//       cout<<"*";
//      }
//      nsp++;
//      nst--;
//      cout<<endl;
//    }
// }

//  int main(){
//    int row;
//    int cst;
//    for(int row=1;row<=5;row++){
//     for(int cst =1;cst<=row; cst++){
//       cout<< cst;
    
//     }
//     cout << endl;
//    }
// }

// int main(){
//   int n;
//   cout<<"Enter number";
//   cin>>n;

//   for(int row=1; row<=n;row++){
//     for(int col=1; col<=n;col++){
//     if (row==col){
//       cout<<"*";
//     }else{
//       cout<<" ";
//     }
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// int main(){
//   int n;
//   cout<<"Enter number";
//   cin>>n;

//   for(int row=1; row<=n;row++){
//     for(int col=1; col<=n;col++){
//     if (row==col){
//       cout<<"*";
//     }else{
//       cout<<" ";
//     }
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// Star patter 

// int main(){
//   int n;
//   cout << "Enter number";
//   cin >> n;

//   int outerspacing =n/2;
//   int innerspacing = -1;

//   for(int row=1; row<=n;row++){
//      for(int col=1; col<=outerspacing;col++){
//       cout<<" ";
//      }
//      cout<<"*";
//      for (int col=1;col<=innerspacing;col++){
//       cout<< " ";
//      }
//      if(row >1 && row < n){
//       cout << "*";
//      }
//      if(row <=n/2){
//       outerspacing--;
//       innerspacing+=2;
//      }else{
//       outerspacing--;
//       innerspacing-=2;
//      }
//      cout<<endl;
//   }
//   return 0;
// }

int main(){
   int row;
   int cst;
   for(int row=1;row<=4;row++){
    for(int cst =1;cst<=row; cst++){
      cout<< "1";
    }
    cout << endl;
   }
    for(int row=1;row<=4;row++){
    for(int cst =1;cst<=row; cst++){
      cout<< "1";
    }
    cout << endl;
   }
  return 0; 
}