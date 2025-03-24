#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
// Some Predefined Functions To Save Time from writing The Entire code for an algoritham like:- Binary Search
vector<int> v;

v.push_back(1);
v.push_back(3);
v.push_back(6);
v.push_back(7);


cout<<"Search 5-> "<<binary_search(v.begin(),v.end(),5)<<endl;
cout<<"Search 3-> "<<binary_search(v.begin(),v.end(),3)<<endl;

cout<<"Lower Bound-> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
cout<<"Upper Bound-> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

int a=3;
int b=5;

cout<<"Max -> "<<max(a,b)<<endl;
cout<<"Min -> "<<min(a,b)<<endl;

swap(a,b);
cout<<"a -> "<<a<<" "<<"b -> "<<b<<endl;

string str = "GS Bishwasa";
reverse(str.begin(),str.end());
cout<<str<<endl;

rotate(v.begin(),v.begin()+1,v.end());
cout<<"After Rotate"<<endl;
for(int i:v){
cout<<i<<" ";
}cout<<endl;

sort(v.begin(),v.end());
cout<<"After Sort"<<endl;
for(int i:v){
cout<<i<<" ";
}

return 0;
}