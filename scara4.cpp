///rezolvarea prin proces iterativ
#include<iostream>
using namespace std;
long v[1000];
long T(long n)
{
    long a,b,c,s;
    if(n<3)
        return n;
    else
    {
        a=1;
        b=1;
        s=2;
        for(long i=3; i<=n; i++)
        {
            c=a+b;
            a=b;
            b=c;
            s=s+a;
        }
        return s;
    }
}
int main()
{
    long n;
    cin>>n;
    cout<<T(n);
}
