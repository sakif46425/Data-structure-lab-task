#include<iostream>
using namespace std;

void odd(int start_value,int end_value)
{
    for(int i=start_value;i<=end_value;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int start_value,end_value;

    cout<<"Starting value :"<<endl;
    cin>>start_value;

    cout<<"Ending value :"<<endl;
    cin>>end_value;

    cout<<"Range:"<<endl;

    return 0;
}
