#include<bits/stdc++.h>
using namespace std;

int k=0;
int main()
{
    int a[5]={10,20,30,40,50};
    int b[8]={1,2,3,4,5,6,7,8};
    int c[13];



    for(int i=0;i<5;i++)
    {
        c[k]=a[i];
        k++;
    }
    for(int i=0;i<8;i++)
    {
        c[k]=b[i];
        k++;
    }
    for(int i=12;i>=0;i--)
    {
        cout<<c[i];
    }

}
