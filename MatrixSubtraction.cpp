#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j;
    cout<<"Enter number of Row and collum of first Matrix: ";
    cin>>m>>n;
    int mat[m][n];
    cout<<"Enter the elements of First Matrix:"<<endl;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>mat[i][j];
        }
    }
    int m2,n2,k,l;
    cout<<"Enter the number of Row and collum of Second Matrix:";
    cin>>m2>>n2;
    int mat2[m2][n2];
    cout<<"Enter the elements of Second Matrix:"<<endl;

    for(k=0; k<m2; k++)
    {
        for(l=0; l<n2; l++)
        {
            cin>>mat2[k][l];
        }
    }
    int x,y,a,b;
    cout<<"Subtraction of the Matrix is:"<<endl;
    a=m;
    b=n;
    int SumMat[a][b];
    for(x=0; x<a; x++)
    {
        for(y=0; y<b; y++)
        {
            SumMat[x][y]=mat[x][y]-mat2[x][y];
             cout<<SumMat[x][y]<<" ";
        }
        cout<<endl;



    }
}

