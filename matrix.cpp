#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,k,l;
    cout<<"Enter the number of Row and collum:"<<endl;
    cin>>m>>n;
    int mat[m][n];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>mat[i][j];
        }
    }

    cout<<"The matrix is:"<<endl;

    for(int k=0; k<m; k++)
    {
        for(int l=0; l<n; l++)
        {
            cout<<mat[k][l]<<" ";


        }
        cout<<endl;

    }
}
