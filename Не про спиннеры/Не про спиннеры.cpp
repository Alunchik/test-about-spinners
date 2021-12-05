#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B" << endl;
    int a; int b;
    cin >> a >> b;
    int num = 0;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            num += ((1 + (a - i)) * (1 + (b - j)));
        }
    }
    cout << num;
}
