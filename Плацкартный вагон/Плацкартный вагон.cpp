#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	cout << "Enter amount of free places" << endl;
	int N;
	cin >> N;
	vector<int> place;
	for (int i = 0; i < N; i++) {
		int c;
		cin >> c;
		place.push_back(c);
	}
	sort(place.begin(), place.end());
	int sum = 0;
	for (int i = 0; i < N; i++) {
		if ((place[i] % 4 == 1) && (place[i] < 37)) {
			bool ok = true;
			if (N - i > 3) {
				for (int j = 1; j < 4; j++) {
					if ((place[i + j] - place[i + j - 1]) != 1) {
						ok = false;
					}
				}
			}
			else {
				ok = false;
			}
			if (ok == true) {
				int cupe = place[i] / 4;
				int first_side_place = 53 - 2 * cupe;
				for (int k = i + 1; k < N-1; k++) {
					if ((place[k] == first_side_place) || (place[k + 1] == first_side_place + 1)) {
						sum += 1;
					}
				}
			}
		}
	}
	cout << sum;
}