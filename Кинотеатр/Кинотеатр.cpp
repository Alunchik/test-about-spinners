#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Enter amount of places" << endl;
    int N;
    cin >> N;
    cout << "Enter amount of children" << endl;
    int k;
    cin >> k;
    vector<int> space = {N};
    for (int i = 0; i < k-1; i++) {
        int a = space[0] % 2 == 0 ? (space[0] / 2 - 1) : (space[0] / 2);
        space[0] = space[0] / 2;
        space.push_back(a);
        sort(space.begin(), space.end(), greater<int>());
    }
    int a = space[0] % 2 == 0 ? (space[0] / 2 - 1) : (space[0] / 2);
    cout << a << endl << space[0] / 2;
}
