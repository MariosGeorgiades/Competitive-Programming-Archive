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

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < arr[a].size(); j++)
            arr[a[i] - 'a']++;
        int max = 0, pos = -1;
        for (i = 0; i < 26; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
                pos = i;
            }
        cout << (char)(pos + 'a') << endl;
    }

    return 0;
}
}
