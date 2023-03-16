#include <NTL/ZZ_pXFactoring.h>

using namespace std;
using namespace NTL;

int main()
{
   ZZ p,a[5][10],x;
   int i,j,n,m,flag;
   cin >> p;
   n=NumBits(p);
   ZZ_p::init(p);
   for(i=0;i<5;i++)
   {
       for(j=0;j<10;j++)
       {
           a[i][j]=0;
       }
   }

   ZZ_pX f;
   cin >> f;

   Vec< Pair< ZZ_pX, long > > factors;

   CanZass(factors, f);

   cout << factors << "\n";
   m=0;

   x=factors[4].b;
   flag =0;

   for(i=0;i<5;i++)
   {

       if(factors[i].b<=5&&factors[i].b>=1)

      {

             m++;

      }

   }

   cout<<endl<<m<<endl;

   a[m-1][n-1]=1;
   cout<<"\n\n";

   for(i=0;i<5;i++)
   {

       for(j=0;j<10;j++)
       {
           cout<<a[i][j]<<" ";
       }
       cout<<endl;

   }




}