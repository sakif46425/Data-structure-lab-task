#include<bits/stdc++.h>
using namespace std;

struct student
{
    int id;
    string name;
    double cgpa;

};

int main()
{
    student s={100,"Richard",3.7};
    cout<<s.id<<" "<<s.name<<" "<<s.cgpa<<endl;

    student *p;

    p=&s;

    cout<<p->id<<" "<<(*p).name<<" "<<(*p).cgpa<<endl;

    student *s1 = new student();
    cin>>s1->id>>s1->name>>s1->cgpa;

    cout<<s1->id<<s1->name<<s1->cgpa;

    return 0;
}


