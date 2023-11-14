#include <bits/stdc++.h>
using namespace std;
ifstream f("summax.in");
ofstream g("summax.out");

int arr[100000],s[100000][2],n;

int findMaxSum()
{
    if (n == 1) {
        return arr[0];
    }
       for (int i = 1; i < n; i++) {
        s[i][1] = s[i - 1][0] + arr[i];
        s[i][0] = max(s[i - 1][1],
                       s[i - 1][0]);
    }
    return max(s[n - 1][0], s[n - 1][1]);
}

void init()
{
    s[0][0] = 0;
    s[0][1] = arr[0];
}

void citire()
{
    f>>n;
    for(int i=0; i<n; i++)
    {
        f>>arr[i];
    }
}
int main()
{
    citire();
    init();
    g << findMaxSum();
}
