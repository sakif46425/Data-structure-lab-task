#include<iostream>
using namespace std;

int main()
{
    int arr[10],even=0,odd=0,i;
    cout<< "Enter 10 elements of array : "<<endl;

    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
            even++;
        else odd++;
    }
    cout<< " Even Number : "<<even<<endl;
    cout<< " Odd Number  : "<<odd<<endl;

    return 0;
}

