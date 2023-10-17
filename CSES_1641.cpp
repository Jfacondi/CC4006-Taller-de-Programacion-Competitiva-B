#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> l(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }


    vector<pair<int, int>> cabañas;
    for (int i = 0; i < n; i++) {
        cabañas.push_back({l[i], i});
    }

    sort(cabañas.begin(), cabañas.end()); 
    for (int i = 0; i < n - 2; i++) {
        int left = i + 1; 
        int right = n - 1; 

        while (left < right) {
            int sum = cabañas[i].first + cabañas[left].first + cabañas[right].first;

            if (sum == x) {

                vector<int> locations = {cabañas[i].second, cabañas[left].second, cabañas[right].second};
                sort(locations.begin(), locations.end());
                cout << locations[0] + 1 << " " << locations[1] + 1 << " " << locations[2] + 1 << endl;
                return 0;
            } else if (sum < x) {
                left++;
            } else {
                right--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}