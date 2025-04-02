#include<iostream>
#include<algorithm>
using namespace std;

void reversestr(string s){
    int sta = 0;
    int e = s.size()-1;
    reverse(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i];
    }
    
}

int main(){
string str = "Hello World!";

reversestr(str);

return 0;
}