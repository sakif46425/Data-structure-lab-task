#include <iostream>

 using namespace std;


 int main()


{

    int array[25],dup[25];

    int size,i,j,cnt;

    cout<<"Enter your array size:"<<" ";

    cin>>size;

    cout<<"Enter your array elements:"<<" ";

    for(i=0; i<size; i++)

    {

        cin>>array[i];

        dup[i]=-1;

    }

    for(i=0; i<size; i++)

    {

        cnt=1;

        for(j=i+1; j<size; j++)

        {

            if(array[i]==array[j])

            {

                cnt++;

                dup[j]=0;

            }

        }

        if(dup[i]!=0)

        {

            dup[i]=cnt;

        }

    }

    cout<<"Duplicates elements in array:"<<" "<<endl;

    for(i=0; i<size; i++)

    {

        if(dup[i]!=0)

        {

            cout<<"Your Number is"<<" "<<array[i]<<endl;

            cout<<"your number"<<" "<<array[i]<<" "<<" occured"<<" "<<dup[i]<<" "<<"times"<<endl;

        }

    }

    return 0;

}
