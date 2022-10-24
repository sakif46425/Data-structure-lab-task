#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10]={12,32,43,1,54,53,15,64,3,13};

    int even=0,odd=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }

    cout<<even << "Enter Even Number "<<endl;
    cout<<odd <<  "Enter Odd Number "<<endl;

    return 0;
}
