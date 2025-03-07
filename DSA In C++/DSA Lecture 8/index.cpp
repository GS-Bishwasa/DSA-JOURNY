#include <iostream>
using namespace std;
int main()
{
    // Switch Case
// int num =1;
//     switch (num)
//     {
//     case 1:
//         cout << "First"<<endl;
//         break;
//     case 2:
//         cout << "Second"<<endl;
//         break;

//     default: cout << "Default";
//         break;
//     }


// exit() in cpp
// int num =1;
// while (1)
// {
//    switch (num)
//    {
//    case 1:cout<<"Hello";
   
//     break;
   
//    default:
//     break;
//    }
//    exit(1);
// }


// Calculator Using Switch Case
// int a,b;
// char c;
// cin>>a;
// cin>>b;
// cin>>c;
// switch (c)
// {
// case '+':
//     cout<<a+b;
//     break;
// case '-':
//     cout<<a-b;
//     break;
// case '*':
//     cout<<a*b;
//     break;
// case '/':
//     cout<<a/b;
//     break;

// default:
//     break;
// }




// H.w
    // int amount;
    // cout<<"Enter the Amount : "<<endl;
    // cin>>amount;

    // int num = 1;
    // int note = 0;
    // switch (num){
    //     case 1: {
    //         note = amount/100;
    //         amount = amount - (100 * note);
    //         cout<<note<<" Rs.100 note requied."<<endl;
    //     }
    //     case 2:{
    //         note = amount/50;
    //         amount = amount - (50 * note);
    //         cout<<note<<" Rs.50 note requied."<<endl;
    //     }
    //     case 3:{
    //         note = amount/20;
    //         amount = amount - (20 * note);
    //         cout<<note<<" Rs.20 note requied."<<endl;
    //     }
    //     case 4:{
    //         note = amount/1;
    //         amount = amount - (1 * note);
    //         cout<<note<<" Rs.1 note requied."<<endl;
    //     }
    // }


    // H.W 2
    // int n;
    // cin>>n;

    // int ap= (3*n)+7;
    // cout<<ap;



    // H.W 3
// int a,b;
// cin>>a;
// cin>>b;
// int ans = 0;

// while (a!=0)
// {
//     int bit = a%2;
//     // int bit = a&1;
//     if (bit==1)
//     {
//         ans=ans+1;
//     }
    
//     a>>=1;
// }
// while (b!=0)
// {
//     int bit = b%2;
//     // int bit = a&1;
//     if (bit==1)
//     {
//         ans=ans+1;
//     }
    
//     b>>=1;
// }
// cout<<ans;



// H.W 4
int n;
cin>>n;
int num=1;
int prev=0;
int temp;
for (int i = 1; i <= n; i++)
{
    temp=num;
    num=num+prev;
    prev=temp ;
}
cout<<num;


    return 0;
}
