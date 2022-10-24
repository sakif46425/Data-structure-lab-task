#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,j;

    cout<< "Enter 1st Array Size : "<<"  "<<endl;
    cin>>a;

    int array_1[a];

    cout<< "Enter the Elements of the First Array : "<<"  "<<endl;

    for(i=0;i<a;i++)
    {
        cin>>array_1[i];
    }
    cout<< "Enter 2nd Array Size : "<<"  "<<endl;
    cin>>b;

    int array_2[b];

    cout<< "Enter the Elements of the Second Array : "<<"  "<<endl;

    for(i=0;i<b;i++)
    {
        cin>>array_2[i];
    }

    cout<< "Common Elements of the Two Arrays : "<<"  "<<endl;

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(array_1[i]==array_2[j])
            {
                cout<<array_1[i]<<"  "<<endl;


            }
            else

                {
                    cout<<"No common Elements " <<endl;

                }
        }
    }



    return 0;



}
