#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Vuvedete simvola : "<<endl;
    cin>>c;
    int n;
    cout<<"Vuvedete kolko golqm shte e triugulnikut : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<c<<" ";
    }
    cout<<endl;
    for(int i=1;i<n-1;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<c;
        for(int k=0;k<2*n-3-2*i;k++)
        {
            cout<<" ";
        }
        cout<<c;
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<" ";
    }
    cout<<c<<endl;

    return 0;
}
