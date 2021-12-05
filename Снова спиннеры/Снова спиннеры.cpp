#include <iostream>

using namespace std;

int main()
{
    cout << "Enter amount of lopastey" << endl;
    int m;
    while ((!(cin >> m)) || m<=0)
    {
        cout << "This is not a suitable number, try again" << endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }
    int four = 0;
    int three = 0;
    for (int i = 0; i < m/3; i++) {
        for (int j = 0; j < m/3; j++) {
            if ((4 * i + 3 * j) == m) {
                four = i;
                three = j;
                break;
            }
        }
    }
    cout << three << endl << four;
}
