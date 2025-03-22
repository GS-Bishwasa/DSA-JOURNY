#include<iostream>
#include<queue>

using namespace std;

int main(){
// You create a queue whos first element is always greatest is called priority queue, if its max heap the maximum element is coming out, if its mi heap the minimun element is coming out

// MAX Heap
priority_queue<int> maxi;

// MEAN Heap
priority_queue<int,vector<int>, greater<int> > mini;


maxi.push(1);
maxi.push(3);
maxi.push(2);
maxi.push(0);


int size = maxi.size();
for (int i = 0; i < size; i++)
{
    cout<<maxi.top()<<" ";
    maxi.pop();
}cout<<endl;


mini.push(5);
mini.push(1);
mini.push(0);
mini.push(4);
mini.push(3);

int m = mini.size();
for (int i = 0; i < m; i++)
{
    cout<<mini.top()<<" ";
    mini.pop();
}


return 0;
}