#include<iostream>
using namespace std;
int main()
{
    int n,i,c,d,j;
    cout<<"Enter te size of Array;";
    cin>>n;
    int arr[n];

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int par[5];
    int impar[5];
    c=0;
    d=0;

    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            par[c]=arr[i];
            c++;
            if(c>5)
            {
                c=0;
            }

        }
        else
        {
            impar[d]=arr[i];
            d++;
            if(d>5)
            {
                d=0;
            }
        }

}
    for(i=0; i<5; i++)
    {
        cout<<"par["<<i<<"]="<<par[i]<<endl;

    }
    for(i=0;i<5;i++)
    {
           cout<<"impar["<<i<<"]="<<impar[i]<<endl;

    }

}
