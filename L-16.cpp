#include<bits/stdc++.h>
using namespace std;

int square(int x)

{
   return x*x;
}
int sum(int x,int y)
{
    return x+y;
}

int main()
{
    int a=20;
    int b=10;

    cout<<square(a)<<endl;
    cout<<sum(a,b)<<endl;
    cout<<square(sum(a,b))<<endl;
}










