#include<iostream>
#include<deque>
using namespace std;
int main(){

deque<int> d;
d.push_back(1);
d.push_front(2);

for (int i:d)
{
    cout<<i<<" ";
}cout<<endl;

// d.pop_back();
cout<<"Element at 1st index"<<" "<<d.at(1)<<endl;
cout<<"Empty Or Not"<<" "<<d.empty()<<endl;
cout<<"First Element"<<" "<<d.front()<<endl;
cout<<"Last Element"<<" "<<d.back()<<endl;

cout<<"Before erase Size"<<" "<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<"After erase Size"<<" "<<d.size()<<endl;
return 0;
}