#include<iostream>
using namespace std;

int score = 15;
// Global Variables ---> i have a varibale and i want to access this variable between different functions, then there are two ways reference variable and global variable, But global variable is not recomended(Bad Practice) Because any one can change this value, always referrence variable is recommended


void a(int& i) {

    cout << score << " in a" << endl;
    score++;
    char ch = 'a';
    cout << i << endl;
}

void b(int& i) {
    cout << score << " in b" << endl;
    cout << i << endl;
}

int main() {
    cout << score << " in main" << endl;
    int i = 5;
    a(i);
    b(i);

    return 0;
}