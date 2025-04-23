#include<iostream>
using namespace std;

// This is very bad Practice, Because the variables in this function are only for this function when function work is finished then the memory erassed, so if memory is going to erased then what we are gonna reference to the function. 
// int& func(int n){
// int num = n;
// int& ans = num;
// return ans;
// }


// void update2(int &n){
//     n++;
// }

// void update1(int n){
//     n++;
// }

int main(){

int i = 5;
int &j = i;

// // Before Increment of i
// cout<<i<<endl;
// cout<<j<<endl;
// i++;
// // After Increment of i
// cout<<i<<endl;
// cout<<j<<endl;


// // Before Increment of j
// cout<<i<<endl;
// cout<<j<<endl;
// j++;
// // After Increment of j
// cout<<i<<endl;
// cout<<j<<endl;


// int n = 5;
// cout<<"Before Increment "<<n<<endl;
// update1(n);
// cout<<"After Increment "<<n<<endl;


// cout<<"Before Increment "<<n<<endl;
// update2(n);
// cout<<"After Increment "<<n<<endl;


// cout<<func(5);

return 0;
}