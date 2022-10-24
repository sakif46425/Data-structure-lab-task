#include<bits/stdc++.h>
using namespace std;
#define n 5
int a[5];
int top=-1;

/*int pop()
{
    return
}*/

bool isFull()
{
    if(top==n-1)
    {
        return true;
    }

    return false;
}
void push(int data)

{
    if(isFull())
    {
        cout<<"Stack Overflow. "<<endl;
    }
    else

{

    top++;
    a[top]=data;
}
}

void print()
{
    for(int i=top;i>=0;i--)
    {
        cout<<a[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    push(10);
    push(20);
    push(40);
    push(40);
    push(50);
    push(60);
    push(60);
    print();


    return 0;
}
