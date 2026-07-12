#include <iostream>
#include <vector>
using namespace std;

int maxAscendingSum(vector<int>& arr) {
    int curr = arr[0];
    int ans = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > arr[i - 1])
            curr += arr[i];
        else
            curr = arr[i];

        ans = max(ans, curr);
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << maxAscendingSum(arr);

    return 0;
}
