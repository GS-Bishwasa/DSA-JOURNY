#include<iostream>
using namespace std;

int getMax(int size[],int n){
int max = INT_MIN;
for (int i = 0; i < n; i++)
{
    if (size[i]>max)
    {
        max=size[i];
    }
    
}
return max;

}
int getMin(int size[],int n){
int min = INT_MAX;
for (int i = 0; i < min; i++)
{
    if (size[i]<min)
    {
        min=size[i];
    }
    
}
return min;

}

int main(){
int size[7]={1,2,3,4,50,100,30};


cout<<getMax(size,7)<<endl;
cout<<getMin(size,7)<<endl;
return 0;
}