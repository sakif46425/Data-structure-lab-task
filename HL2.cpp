#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b,i,j;
    cout<<"Enter Your first array : "<<" ";
    cin>>a;
    int array_1[a];
    cout<<"Enter the elements of the first array : "<<" ";
    for(i=0;i<a;i++)
    {
        cin>>array_1[i];
    }
    cout<< "Enter Second size of array : "<<" ";
    cin>>b;
    int array_2[b];
    cout<< "Elements of the two arrays : "<<" ";
    for(i=0;i<b;i++)
    {
        cin>>array_2[i];
    }
    cout<<"\nYour common elements of the two arrays: "<<" ";

  for(i=0;i<a;i++)

  {

    for(j=0;j<b;j++)

    {

      if(array_1[i]==array_2[j])


      {

        cout<<array_1[i]<<" ";

        }
      else{cout<<"No common element!"<<endl;
    }
   }

  }

  getch();

  return 0;

}
















