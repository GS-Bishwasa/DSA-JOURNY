#include<iostream>
#include<queue>

using namespace std;

int main(){
// Queue means line, First In First Out

queue<string> que;

que.push("GS");
que.push("Bishwasa");
que.push("HelloWorld");

cout<<"Top Element is"<<" "<<que.front()<<endl;
que.pop();
cout<<"Top Element is"<<" "<<que.front()<<endl;

return 0;
}