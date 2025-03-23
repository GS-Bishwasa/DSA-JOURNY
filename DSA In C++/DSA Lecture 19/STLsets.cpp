#include <iostream>
#include <set>

using namespace std;
int main()
{
    // Set store only unique elements, if you insert same element more than  one time then it take it only once
    // there is no modification in elements, only in or out
    // elements come in sorted order

    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    for (int i : s)
    {
        cout << i << " ";
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for (int i : s)
    {
        cout << i << " ";
    }cout<<endl;


    cout<<"count--> "<<s.count(5); 
    return 0;
}