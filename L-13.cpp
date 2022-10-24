#include<iostream>
using namespace std;

string encode(string s, int k)
{
    int n = s.length();
    for(int i=k; i<n; i=i+k+1)
        s[i]= s[i]+2;
    return s;
}
string ConvertedIntoDecode(string s, int k )
{
    int n = s.length();
    for(int i=k; i<n; i=i+k+1)
        s[i]= s[i];
    return s;
}
int main()
{
    while(1)
    {
        string str;
        cout<<"Sample String (s): ";
        getline (cin, str);
        int j;
        cout<<"Sample Integer (j):";
        cin >> j;
        string convertedString = encode(str,j);
        cout<<"YOur encode is:"<<" "<<convertedString<<"\n\n";
        string ConvertedString=ConvertedIntoDecode(str, j);
        cout<<" YOur decode of encode is:"<<" "<<ConvertedString<<"\n\n";
        cin.get();
    }
    return 0;
}

