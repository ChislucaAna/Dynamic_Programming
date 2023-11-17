#include<iostream>
#include<fstream>
using namespace std;
ifstream f("sir.in");
int n,a[100],L[100],p[100],v[100],i,k;
void citire()
{
    int i;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>a[i];
        v[i]=i+1;
    f.close();
}
void init()
{
    L[n]=1;
    p[n]=n;
}
void dinamica()
{
    int i,j;
    for(i=n-1;i>=1;i--)
    {
        L[i]=1;
        p[i]=i;
        for(j=i+1;j<=n;j++)
            if(a[i]<=a[j] && L[i]<=L[j])
        {
            L[i]=L[j]+1;
            p[i]=j;
        }
    }
}
void cauta_solutia()
{
    int i,mx=0;
    for(i=1;i<=n;i++)
        if(L[i]>mx)
    {
        mx=L[i];
        k=i;
    }
}
void afisare()
{
    int i,j;
    cout<<L[k]<<endl;
    j=k;
    for(i=1;i<=L[k];i++)
    {
        cout<<v[j]<<' ';
        j=p[j];
    }
}
int main()
{
    citire();
    init();
    dinamica();
    cauta_solutia();
    afisare();
}
