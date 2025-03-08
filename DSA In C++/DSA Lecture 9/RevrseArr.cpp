#include<iostream>
using namespace std;

int main(){
int arr[5] = {1,2,3,4,5};

for (int i = 0; i < 5; i++)
{
    
    cout<<arr[i]<<" ";
}


int index=0;
int ans[5];
for (int i = 5-1; i >= 0; i--)
{
ans[index]=arr[i];
index++;
}
cout<<endl;
for (int i = 0; i < 5; i++)
{
    
    cout<<ans[i]<<" ";
}

return 0;
}