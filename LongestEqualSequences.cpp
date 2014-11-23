#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int A[20][20];
    int n,m,br=1,br_max=0;
    cout<<"Vuvedete broq na redovete i kolonite."<<endl;
    cin>>n;
    cout<<"Vuvedete matricata."<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(A[i][j]==(A[i][j+1]))
            {
                br++;
            }
            else
            {
                if(br>br_max) br_max=br;
                br=1;
            }
        }
        if(br>br_max) br_max=br;
        br=1;
    }
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(A[i][j]==(A[i+1][j]))
            {
                br++;
            }
            else
            {
                if(br>br_max) br_max=br;
                br=1;
            }
        }
        if(br>br_max) br_max=br;
        br=1;
    }
    for(int s=1;s<2*n-2;s++)
    {
       for(int j=1;j<n;j++)
        {
            if(s-j>=0&&s-j+1<n)
            {
                if(A[s-j][j]==A[s-j+1][j-1])
                {
                    br++;
                }
                else
                {
                    if(br>br_max) br_max=br;
                    br=1;
                }
            }
        }
        if(br>br_max) br_max=br;
        br=1;
    }
    for(int d=2-n;d<=n-2;d++)
    {
        for(int j=0;j<n-1;j++)
        {
           if(j+d>=0&&j+d+1<n)
            {
                if(A[j+d][j]==A[j+d+1][j+1])
                {
                    br++;
                }
                else
                {
                    if(br>br_max) br_max=br;
                    br=1;
                }
            }
        }
        if(br>br_max) br_max=br;
        br=1;

    }
    cout<<br_max;

    return 0;
}
