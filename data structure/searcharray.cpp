#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[10], i, j;
    cout << "Enter the numbers = ";
    for (i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number to be searched = ";
    cin >> j;
    int found = 0;
    for (i = 0; i < 4; i++)
    {

        if (a[i] == j)
        {
            found = 1;
            break;
        }
    }
    if (found)
        cout << "Found";
    else
    {
        cout << "Not Found";
    }

    return 0;
}