#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& arr) {
    int candidate = 0, count = 0;

    for (int num : arr) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for (int num : arr) {
        if (num == candidate)
            count++;
    }

    if (count > arr.size() / 2)
        return candidate;
    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << majorityElement(arr);

    return 0;
}
