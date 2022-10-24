#include<bits/stdc++.h>
using namespace std;

int main()

{
   int i,j,k,n,array_a[100];

   cout<< "Enter Array size : "<<endl;
   cin>>n;

   cout<< "Enter Elements of array : "<<endl;

   for(i=0;i<n;++i)
   {
       cin>>array_a[i];
   }

   for(i=0;i<n;++i)
   {
       for(j=i+1;j<n;)
       {
           if(array_a[i]==array_a[j])
           {
               for(k=j;k<n-1;++k)

                array_a[k]=array_a[k+1];
               --n;
           }

           else
            ++j;

   }

}

cout<< "Array Elements Without Duplicates Elements: "<<"  "<<endl;

for(i=0;i<n; ++i)
{
    cout<<array_a[i]<<endl;
}

for(int i=0;i<n;i++)
{
    if(array_a[i]==n)
    {
        cout<< "Array Already Unique"<<endl;

        break;
    }
}

return 0;

}
