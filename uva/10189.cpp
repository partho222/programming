#include <cstdio>
#include <iostream>
#include <cmath>

char mat[300][300];
long int m,n,chk=0;


using namespace std;

int main()
{
    long int row,col,kount=0;
    while(cin >> col >> row)
    {
        long int i,j;
        if(col==0 && row==0)
        {
            return 0;
        }
        for(i=1;i<=col;i++)
        {
            for(j=1;j<=row;j++)
            {
                cin >> mat[i][j];
            }
        }
        for(m=0;m<300;m++)
        {
            for(n=0;n<300;n++)
            {
                if(mat[m][n]!=42)
                mat[m][n]=48;
            }
        }
        for(i=1;i<=col;i++)
        {
            for(j=1;j<=row;j++)
            {
                if(mat[i][j]==42)
                {
                    if(mat[i][j+1]!=42)
                    mat[i][j+1]++;
                    if(mat[i][j-1]!=42)
                    mat[i][j-1]++;
                    if(mat[i-1][j]!=42)
                    mat[i-1][j]++;
                    if(mat[i-1][j+1]!=42)
                    mat[i-1][j+1]++;
                    if(mat[i-1][j-1]!=42)
                    mat[i-1][j-1]++;
                    if(mat[i+1][j]!=42)
                    mat[i+1][j]++;
                    if(mat[i+1][j+1]!=42)
                    mat[i+1][j+1]++;
                    if(mat[i+1][j-1]!=42)
                    mat[i+1][j-1]++;
                }
            }
        }

        if(chk==1)
        {
            cout << "\n";
        }
        chk=1;
        cout << "Field #" << ++kount  << ":\n";
        for(i=1;i<=col;i++)
        {
            for(j=1;j<=row;j++)
            {
                cout << mat[i][j];
            }
            cout << "\n";
        }

    }
    return 0;
}
