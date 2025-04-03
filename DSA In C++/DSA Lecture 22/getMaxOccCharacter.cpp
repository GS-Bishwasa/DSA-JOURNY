#include <iostream>
using namespace std;

char getMaxOccCharacter(string s)
{
    int arr[26] = {0};


    // Create an array count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        // Lowercase
        if (ch>='a' && ch<='z')
        {
            number = ch-'a';
        }else{//Uppercase
            number = ch-'A';
        }
        arr[number]++;

    }
    int maxi = -1;
    int ans = 0;
    // find Max Occr Character
    for (int i = 0; i < 26; i++)
    {
        if (maxi<arr[i])
        {
            ans  = i;
            maxi = arr[i];
        }

    }
    char finalans = 'a'+ans;
    return finalans;
}

int main()
{
string s;
cin>>s;
cout<<getMaxOccCharacter(s);
    return 0;
}