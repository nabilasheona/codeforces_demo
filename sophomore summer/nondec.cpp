#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int coins = 0;

        for (int i = 1; i < n; ++i) {
            if (a[i - 1] > a[i]) {
                coins += 2;
                a[i] = a[i - 1];
            }
        }

        cout << coins << endl;
    }

    return 0;
}
