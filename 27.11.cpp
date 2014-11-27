#include<iostream>
#include<iomanip>
using namespace std;
long int fact(int n)
{
    long int fact=1;
    for(int i=1;i<n+1;i++)
    fact*=i;
    return fact;
}
bool chetnost(int n)
{
    return (n%2);
}
bool prime(int n)
{
    bool b=true;
    if(n==1) b=false;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        b=false;
    }
    return b;
}
char bukvi(char a)
{
    if(a>'a'&&a<'z') return (a+'A'-'a');
    if(a>'A'&&a<'Z') return (a+'a'-'A');
}
char simvol(int n)
{
    int suma=0;
    while (n>0)
    {
       suma+=(n%10);
       n/=10;
    }
    if(suma>0&&suma<27)
    return ((char) ('a'+suma-1));
    else return 'A';
}
int NOD (int a,int b)
{
  while (a!=b)
  {
      if(a>b) a=a-b;
      else b=b-a;
  }
  return a;
}
int cifra (int n,int c)
{
  int count=0;
  while (n>0)
  {
      if(n%10==c)
      count++;
      n/=10;
  }
  return count;
}
bool cifra_prime (int n,int c)
{
    return prime(cifra(n,c));
}
void tr (int n,char c)
{
  for(int i=0;i<n;i++)
  cout<<c<<" ";
  cout<<endl;
  for(int i=1;i<n-1;i++)
  {
      cout<<setw(i)<<" ";
      cout<<c;
      cout<<setw(2*n-2*i-3)<<" ";
      cout<<c<<endl;
  }
  cout<<setw(n)<<c;
}
int main()
{
    int n;
    char c;
    cin>>n>>c;
    while(n<1||n>100)
    cin>>n;
    tr(n,c);
}
