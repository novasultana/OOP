#include<iostream>
using namespace std;
int main()
{
    int n,i,c,j;
    cout<<"Enter the size of array:";
    cin>>n;
   cout<<"Prime numbers are:";
   for(i=0;i<n;i++)
   {
       c=0;
       for(j=1;j<i;j++)
       {
           if(i%j==0)
           {
               c++;
           }
       }
       if(c==2)
       {
           cout<<i<<endl;
       }
       return 0;
   }
