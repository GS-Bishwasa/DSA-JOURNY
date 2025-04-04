#include <iostream>
using namespace std;

// Without Taking Extra Space
string replaceSpaces(string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str.replace(i, 1, "@40");
        }
    }
    return str;
}

// Taking Extra Space
// string replaceSpaces(string &str)
// {
//     string temp = "";
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == ' ')
//         {
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else
//         {
//             temp.push_back(str[i]);
//         }
//     }
//     return temp;
// }

int main()
{
string str = "Hello World";
cout<<replaceSpaces(str);
    return 0;
}