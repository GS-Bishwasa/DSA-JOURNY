#include<iostream>
#include<list>

using namespace std;

int main(){
// In STL list we can not directly print print the element like do in deque,array and vector using at(), in list we have to travel to that element after that we can print the element

list<int> lst;
lst.push_back(1);
lst.push_front(3);
for (int i:lst)
{
    cout<<i<<" ";
}cout<<endl;

lst.erase(lst.begin());
cout<<"After erase"<<endl;
for (int i:lst)
{
    cout<<i<<" ";
}


return 0;
}