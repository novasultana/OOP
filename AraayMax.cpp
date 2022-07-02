#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the size of Array:"<<endl;
    cin>>n;
    cout<<"Enter the numbers:"<<endl;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int idx,tempMax;
    tempMax=0;
    for(int j=0;j<n;j++){
        if(tempMax<arr[j]){
        tempMax=arr[j];
        idx=j;
    }
    }
    cout<<"Max num is:";
    cout<<tempMax<<endl;
cout<<"index num of the Maximum number "<<idx<<endl;
}
/**

123
125
548


How many students information you want to Input : 3
Enter the Name:nova
Enter ID:1234
Enter CGPA:3.3
Enter the Name:tumzid
Enter ID:5678
Enter CGPA:3.7
Enter the Name:shihab
Enter ID:6789
Enter CGPA:3.9
*/
