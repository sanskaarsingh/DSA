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
int pattern13(int n)
{
   int i, j, c=0;
   for (i=0;i<n;i++)
   {
      for (j=0;j<=i;j++)
      {
         c++;
         cout << c << " ";
      }
      cout << endl;
   }
}
int pattern14(int n)
{
   int i;
   for (i=0;i<n;i++)
   {
      for (char ch='A'; ch<='A'+i;ch++)
      {
         cout << ch;
      }
      cout << endl;
   }
}
int pattern15(int n)
{
   int i;
   for (i=n;i>0;i--)
   {
      for (char ch='A';ch<='A'+i-1;ch++)
      {
         cout << ch;
      }
      cout << endl;
   }
}
int pattern16(int n)
{
   int i,j; char ch = 'A';
   for (i=0;i<n;i++)
   {
      for (j=0;j<=i;j++)
      {
         cout << ch;
      }
      cout << endl;
      ch++;
   }
}
int pattern17(int n)
{
   int i,j;
   for (i=0;i<n;i++)
   {
      int breakpoint=(n/2)-i;
      char ch = 'A';
      //spaces
      for(j=0;j<n-i-1;j++)
      {
         cout << " ";
      }
      //characters
      for(j=0;j<=(2*i)+1;j++)
      {
         cout << ch;
         if (j>=breakpoint)
         {
            ch++;
         }
         else
         {
            ch--;
         }
      }
      cout << endl;
   }
}
int pattern18(int n)
{
   int i, j;
   for (i=0;i<n;i++)
   {
      for (char ch='E'-i;ch<='E';ch++)
      {
         cout << ch;
      }
      cout << endl;
   }
}
int pattern19(int n)
{
   int i,j, inis =0;
   //upperhalf
   for (i=0;i<n;i++)
   {
      //stars
      for (j=0;j<n-i;j++)
      {
         cout << "*";
      }
      //spaces
      for (j=0;j<inis;j++)
      {
         cout << " ";
      }
      //stars
      for (j=0;j<n-i;j++)
      {
         cout << "*";
      }
      cout << endl;
      inis+=2;
   }
   //lowerhalf
   inis = 2*n-2;
   for (i=0;i<n;i++)
   {
      //stars
      for (j=0;j<=i;j++)
      {
         cout << "*";
      }
      //spaces
      for (j=0;j<inis;j++)
      {
         cout << " ";
      }
      //stars
      for (j=0;j<=i;j++)
      {
         cout << "*";
      }
      cout << endl;
      inis-=2;
   }
}
int pattern20(int n)
{
   int i,j,spaces = 2*n-2;
   for(i=1;i<=2*n-1;i++)
   {
      //stars
      int stars=i;
      if (i>n)
      {
         stars = 2*n-i;
      }
      for(j=1;j<=stars;j++)
      {
         cout << "*";
      }
      //spaces
      for(j=1;j<=spaces;j++)
      {
         cout << " ";
      }
      //stars
      for(j=1;j<=stars;j++)
      {
         cout << "*";
      }
      if (i<n)
      {
         spaces=spaces-2;
      }
      else
      {
         spaces=spaces + 2;
      }
      cout << endl;
   }
}
int pattern21(int n)
{
   int i,j;
   for(i=0;i<n;i++)
   {
      for (j=0;j<n;j++)
      {
         if(i==0||j==0||i==n-1||j==n-1)
         {
            cout << "*";
         }
         else
         {
            cout << " ";
         }
      }
      cout << endl;
   }
}
int pattern22(int n)
{
   int i,j;
   for(i=0;i<2*n-1;i++)
   {
      for(j=0;j<2*n-1;j++)
      {
         int top = i, left =j, right = (2*n-2)-j, down = (2*n-2)-i;
         cout << n-min((min(top,down)),(min(left,right)));
      }
      cout << endl;
   }
}

int main()
{
   int n;
   cin >> n;
   pattern22(n);
   return 0;
}