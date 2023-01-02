#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    vector<int> nums(n);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        sum += nums[i];
    }
    cout << sum << endl;
    return 0;
}