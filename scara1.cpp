///rezolvarea cu recurenta abordata direct
#include<iostream>
using namespace std;
long T(long n)
{
    if(n<3)
        return n;
    else
        return T(n-1)+T(n-2);
}
int main()
{
    long n;
    cin>>n;
    cout<<T(n);
}
