#include<iostream>
#include<vector>
using namespace std;

void reversestr(vector<char> s){
    int sta = 0;
    int e = s.size()-1;
    while (sta < e) {
       swap(s[sta],s[e]);
       sta++;
       e--;
    }

    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i]<<" ";
    }
    
}

int main(){
vector<char> s;
s.push_back('h');
s.push_back('e');
s.push_back('l');
s.push_back('l');
s.push_back('o');

reversestr(s);

return 0;
}