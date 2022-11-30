#include<bits/stdc++.h>
using namespace std;
struct Node * Root=NULL;

struct Node
{
    struct Node * left;
    int data;
    struct Node * right;
};

int main()
{
    struct Node * n1 = new Node();
    n1->left=NULL;
    n1->data=10;
    n1->right=NULL;

    cout<<n1->data<<"  "<<endl;

    struct Node * n2 = new Node();
    n2->left=NULL;
    n2->data=10;
    n2->right=NULL;

    n1->left=n2;

    struct Node * tempL =n1;

    while(tempL!=NULL)
    {
        cout<<tempL->data<<" "<<endl;
        tempL=tempL->left;
    }

}
