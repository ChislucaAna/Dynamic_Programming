///rezolvarea bottom-up
#include<iostream>
using namespace std;
long v[1000];
long T(long n)
{
    v[1]=1;
    v[2]=2;
    for(long i=3; i<=n; i++)
        v[i]=v[i-1]+v[i-2];
    return v[n];
}
int main()
{
    long n;
    cin>>n;
    cout<<T(n);
}
