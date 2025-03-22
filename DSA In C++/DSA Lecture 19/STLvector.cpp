#include<iostream>
#include<vector>

using namespace std;
int main(){
// Vector is a dynamic array, it double its size when it fully filled
vector<int> arr;

cout<<"Capacity-->"<<arr.capacity()<<endl;

arr.push_back(5);
cout<<"Capacity-->"<<arr.capacity()<<endl;

arr.push_back(10);
cout<<"Capacity-->"<<arr.capacity()<<endl;

arr.push_back(6);
cout<<"Capacity-->"<<arr.capacity()<<endl;
cout<<"Size-->"<<arr.size()<<endl;


cout<<"Element at 3rd index"<<" "<<arr.at(1)<<endl;
// cout<<"Empty Or Not"<<" "<<arr.empty()<<endl;
cout<<"First Element"<<" "<<arr.front()<<endl;
cout<<"Last Element"<<" "<<arr.back()<<endl;



cout<<"\n Before POP";
for (int i:arr)
{
    cout<<" "<<i<<" ";
}cout<<endl;

arr.pop_back();

cout<<"\n After POP";
for (int i:arr)
{
    cout<<" "<<i<<" ";
}cout<<endl;


cout<<"Before Clear Size"<<" "<<arr.size()<<endl;
arr.clear();
cout<<"After Clear Size"<<" "<<arr.size()<<endl;




vector<int> arr1(5,1);
vector<int> last(arr1);
cout<<"Print arr1"<<endl;
for (int i:last)
{
    cout<<i<<" ";
}



return 0;
}