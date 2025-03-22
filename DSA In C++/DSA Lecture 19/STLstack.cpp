#include<iostream>
#include<stack>

using namespace std;
int main(){

stack<string> stk;

stk.push("GS");
stk.push("Bishwasa");
stk.push("HelloWorld");


cout<<"Top Element is"<<" "<<stk.top()<<endl;
stk.pop();
cout<<"Top Element is"<<" "<<stk.top()<<endl;


cout<<"Size is"<<" "<<stk.size()<<endl;

cout<<"Empty or Not"<<" "<<stk.empty()<<endl;
return 0;
}