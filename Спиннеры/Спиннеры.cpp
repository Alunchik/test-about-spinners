#include <iostream>

using namespace std;

int main()
{
    std::cout << "Enter"; 
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    while (!(cin >> a >> b >> c))
    {
        cout << "This is not a number, try again" << endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }
    if ((a > c) || (a <= 0) || (b <= 0) || (c <= 0)) {
        cout << "Can't calculate it with this data";
    }
    else {
        int n = (c - a) / b;
        cout << n;
    }
}