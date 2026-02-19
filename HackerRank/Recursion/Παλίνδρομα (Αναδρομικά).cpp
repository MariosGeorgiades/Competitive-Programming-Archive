#include <bits/stdc++.h>
#include <string>
using namespace std;
bool isPalRec(string str, int s, int e)
{

    if (s == e)
    return true;
    if (str[s] != str[e])
    return false;
    if (s < e)
    return isPalRec(str, s + 1, e - 1);

    return true;
}

bool isPalindrome(string str)
{
    int n = str.size();

    if (n == 0)
        return true;

    return isPalRec(str, 0, n - 1);
}
int main()
{
    string str;
    cin>>str;
    if (isPalindrome(str))
    cout << "palindrome";
    else
    cout << "not palindrome";

    return 0;
}
