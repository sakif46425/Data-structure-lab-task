#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int m, n;
int A[10][10];
int transpose[10][10];
cout << "Enter the your rows and culumns size: "<<" ";
cin >> m>>n;

cout << "Enter your  matrix elements:"<<endl;
for(int i = 0; i < m; i++)
{
 for(int j = 0; j < n; j++)
 cin >> A[i][j];
}
cout<<"...................."<<endl;
 for (int i = 0; i < m; ++i)
      for (int j = 0; j < n; ++j) {
         transpose[j][i] = A[i][j];
      }
   cout << "Your Transpose Matrix is:"<<endl;
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j) {
         cout << " " << transpose[i][j];
         if (j == m - 1)
            cout << endl << endl;
      }

cout << endl;
}


