#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, mult = 1;
    vector<int> nums(n);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        if(i%2==1){
            mult*=nums[i];
        }
    }
    cout << mult << endl;
    return 0;
}