#include<iostream>
using namespace std;

int isPrime(int n)
{
    int flag=1;
    for(int i=2; i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}

void factorical(int n)
{
    int result = 1;
    for(int i=n;i>=1;i--)
    result

}
