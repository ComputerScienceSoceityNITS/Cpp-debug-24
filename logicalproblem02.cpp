#include <bits/stdc++.h>
using namespace std;

bool check(char a, char b)
{
    return (a ^ b) == 0;
}

int main()
{
    char a;
    char b;
    cout << "Enter the characters :";
    cin >> a >> b;
    if (check(a, b))
    {
        cout << "Yes" << endl;
    }

    else
    {
        cout << "No" << endl;
    }
    return 0;
}