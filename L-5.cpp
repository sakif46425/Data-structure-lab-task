#include<iostream>
using namespace std;

void number(int arr[],int n)
{
    int even=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
    }
    cout<<even<<"Even number"<<endl;
    int odd=0;
    for(int i=0;i<n;i++)
        {
        if(arr[i]%2!=0)
        {
            odd++;
        }
    }
    cout<<odd<<"Odd number"<<endl;}
    int main(){
        int arr[10];
    cout<<"Enter 10 numbers: "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    number(arr,10);
    return 0;


}


