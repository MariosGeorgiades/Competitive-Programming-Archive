#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    string arr[a];
    for (int i = 0; i < a; i++)
        cin >> arr[i];

    int counts[26] = {0};
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
            counts[arr[i][j] - 'a']++;
    }

    int max_count = 0;
    for (int k = 0; k < 26; k++)
    {
        if (max_count < counts[k])
        {
            max_count = counts[k];
        }
    }
    long long int baseNum = 7;
    for (int i = 1; i < max_count; i++)
        baseNum = baseNum * 7;
    if (baseNum < 0)
        baseNum = -baseNum;
    long long int baseNumbOut = std::abs(baseNum % 100);
    if(baseNumbOut < 10)
        cout<<'0'<<baseNumbOut<<endl;
    else cout << baseNumbOut << endl;
    return 0;
}
