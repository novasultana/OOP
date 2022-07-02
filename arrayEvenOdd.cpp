#include<iostream>
using namespace std;
int main()

{
    int n,i,j;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the Numbers:"<<endl;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(j=0;j<n;j++)
    {
        if(arr[j]%2==0)
        {
            cout<<arr[j]<<" number is even"<<endl;

        }
        else{
            cout<<arr[j]<<" number is odd"<<endl;
        }
    }
    return 0;
}
