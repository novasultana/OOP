#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Array is [3][3]"<<endl;
    int arr[3][3];
    for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                cin>>arr[i][j];
            }
        }
        cout<<"Enter the size of Collum:";
        cin>>n;
        int a,b;
        int sum[a][b];
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                if (n==arr[i][j])
                {
                    sum[a][b]=arr[i]+arr[j];

                }
                cout<<"Sum is:";
                cout<<sum;
            }
        }

}

/**
1 1
2 2
3 3
4 4
5 5
6 6
7 7
8 8
9 9
10 10
11 11
12 12
**/
