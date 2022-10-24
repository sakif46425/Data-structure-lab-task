#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int *m,int n,int item)
{
    for(int i=0;i<n;i++)
    {
        if(m[i]==item)
            return i;
    }
    return -1;
}
int main()
{
    int a[10];
    cout<<"enter 10 elements: "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    int item;
        cout<<"You are searching Item : "<<endl;
        cin>>item;
    int i=LinearSearch(a,10,item);
    if( i==-1)
    {
        cout<<"Item not found..."<<endl;
    }
    else
    {
        cout<<a[i]<<"Found in"<<i<<"location";
    }




    return 0;


}
