#include<iostream>
using namespace std;
int main()
{
    int array1[5]= {10,20,30,40,50};
    int array2[8]= {1,2,3,4,5,6,7,8};
    int marged[13];

    for(int i=0;i<5;i++)
    {
        marged[i]=array1[i];
        marged[i+5]=array2[i];
    }
    for(int i=0; i<8;i++)
    {
        cout<<marged[i];
    }



}
