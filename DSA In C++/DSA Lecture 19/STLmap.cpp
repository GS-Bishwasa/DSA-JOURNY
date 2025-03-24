#include<iostream>
#include<map>
using namespace std;
int main(){
// Map hamara ek eaisa data structure hai jisme data key value ki form me save hota hai
// agar key hai "Love" value hai "Score" to love point kar raha hai score ki taraf
// every key is unique, one key refer to only one value

map<int,string> m;
m[1]= "GS";
m[2]= "Bishwasa";
m[13]= "Hello World";

m.insert({5,"Bheem"});

for (auto i:m)
{
    cout<<i.second<<" ";
}cout<<endl;


cout<<m.count(13)<<endl;


cout<<"Before erase"<<endl;
m.erase(13);
cout<<"After erase"<<endl;

for (auto i:m)
{
    cout<<i.second<<" ";
}cout<<endl;

return 0;
}