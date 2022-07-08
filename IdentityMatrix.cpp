#include<iostream>
using namespace std;
int main()
{
    int row,col,i,j;
    cout<<"Enter number of Row:"<<" "<<endl;
    cin>>row;
    cout<<"enter number of collum:" <<endl;
    cin>>col;
    int arr[row][col];
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }
    /**
    3
    3
    1 0 0
    0 1 0
    0 0 1

    */

    int n=0;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {

            if(i==j&&arr[i][j]!=1)
            {
                n=1;
                break;
            }
        }
    }
    if(n==0)

    {
        cout<<"The matrix is Identity Matrix:)"<<endl;

    }
    else
    {
        cout<<"The matrix is not Identity Matrix!!"<<endl;
    }



}
