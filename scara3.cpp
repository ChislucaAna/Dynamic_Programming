///rezolvarea top-down
#include<iostream>
using namespace std;
long v[1000];
long T(long n)
{
    if(v[n]!=0)
        return v[n];///daca rezultatul a fost calculat anterior il returnam fara a-l genera din nou
    if(n<3)
        v[n]=n;
    else
        v[n]=T(n-1)+T(n-2);
    return v[n];
}
int main()
{
    long n;
    cin>>n;
    cout<<T(n);
}
