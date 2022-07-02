#include<iostream>
using namespace std;
int main()
{
    int n,i,c,j;
    cout<<"Enter the size of Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the Numbers:"<<" ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        c=0;

        for(j=1; j<=arr[i]; j++)
        {
            if(arr[i]%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            cout<<arr[i]<<" "<<"The number is Prime."<<endl;
        }
        else
        {
            cout<<arr[i]<<" "<<"The number is not Prime."<<endl;
        }
    }
}
