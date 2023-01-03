#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    cout << "Sorted Array" << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (k == a[mid])
        {
            cout << "Yes =>"
                 << " " << mid << " "
                 << "index" << endl;
            break;
        }
        if (k < a[mid])
        {
            high = mid - 1;
        }
        if (k > a[mid])
        {
            low = mid + 1;
        }
    }

    if (low > high)
        cout << "No" << endl;

    return 0;
}