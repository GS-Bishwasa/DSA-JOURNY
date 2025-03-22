#include<iostream>
#include <array>


using namespace std;
int main(){

int arr[3]={1,2,3};

array<int,4> arr1 = {1,2,3,4};

int size = arr1.size();
for (int i = 0; i < size; i++)
{
    cout<<arr1[i]<<" "<<endl;
}

cout<<"Element at 3rd index"<<" "<<arr1.at(3)<<endl;
cout<<"Empty Or Not"<<" "<<arr1.empty()<<endl;
cout<<"First Element"<<" "<<arr1.front()<<endl;
cout<<"Last Element"<<" "<<arr1.back()<<endl;

return 0;
}