#include <iostream>
using namespace std;
 int pattern1(int n)
 {
   int i, j;
   for(i=0; i<n; i++)
   {
      for(j=0;j<n;j++)
      {
         cout << "*";
      }
      cout << endl;
   }
 }
 int pattern2(int n)
 {
   int i, j;
   for (i=1;i<=n;i++)
   {
      for(j=1;j<=i;j++)
      {
         cout << "*";
      }
      cout << endl;
   }
 }
int pattern3(int n)
{
   int i,j;
   for (i=1;i<=n;i++)
   {
      for (j=1;j<=i;j++)
      {
         cout << j;
      }
      cout << endl;
   }
}
int pattern4(int n)
{
   int i,j;
   for (i=1;i<=n;i++)
   {
      for (j=1;j<=i;j++)
      {
         cout << i;
      }
      cout << endl;
   }
}
int pattern5(int n)
{
   int i, j;
   for (i=n;i>=1;i--)
   {
      for(j=1;j<=i;j++)
      {
         cout << "*";
      }
      cout << endl;
   }
}
int pattern6(int n)
{
   int i,j;
   for (i=n;i>=1;i--)
   {
      for(j=1;j<=i;j++)
      {
         cout << j;
      }
      cout << endl;
   }
}
int pattern7(int n)
{
   int i,j;
   for (i=0;i<n;i++)
   {
      //spaces
      for(j=0; j<n-i-1; j++)
      {
         cout << " ";
      }
      //stars
      for(j=0;j<(2*i)+1;j++)
      {
         cout << "*";
      }
      cout << endl;
   }
}
int pattern8(int n)
{
   int i,j;
   for (i=5;i>0;i--)
   {
      //spaces
      for(j=0;j<=5-i-1;j++)
      {
         cout << " ";
      }
      //stars
      for(j=0;j<(i*2)-1;j++)
      {
         cout << "*";
      }
      cout << endl;
   }
}
int pattern9(int n)
{
   int i,j;
   for (i=0;i<n;i++)
   {
      //spaces
      for(j=0; j<n-i-1; j++)
      {
         cout << " ";
      }
      //stars
      for(j=0;j<(2*i)+1;j++)
      {
         cout << "*";
      }
      cout << endl;
   }
   for (i=5;i>0;i--)
   {
      //spaces
      for(j=0;j<=5-i-1;j++)
      {
         cout << " ";
      }
      //stars
      for(j=0;j<(i*2)-1;j++)
      {
         cout << "*";
      }
      cout << endl;
   }
}
int pattern10(int n)
{
   int i, j;
   for(i=1; i<=2*n-1; i++)
   {
      int stars =i;
      if (i>n)
      {
         stars = 2*n-i;
      }
      for (j=1;j<=stars;j++)
      {
         cout << "*";
      }
      cout << endl;
   }
}
int pattern11(int n)
{
   int i, j, start;
   for(i=0;i<n;i++)
   {
      if(i%2==0)
      {
         start = 1;
      }
      else
      {
         start = 0;
      }
      for (j=0;j<=i;j++)
      {
         cout << start;
         start = 1 - start;
      }
      cout << endl;
   }
}
int pattern12(int n)
{
   int i, j;
   for (i=1;i<=n;i++)
   {
      //numbers
      for(j=1;j<=i;j++)
      {
         cout << j;
      }
      //spaces
      for (j=1;j<=2*(n-i);j++)
      {
         cout << " ";
      } 
      //numbers
      for(j=i;j>=1;j--)
      {
         cout << j;
      }
      cout << endl;
   }
}

int main()
{
   int n;
   cin >> n;
   pattern12(n);
   return 0;
}