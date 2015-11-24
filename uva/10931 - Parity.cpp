#include <stdio.h>
#include <iostream>
#include <stdlib.h>

#define MAX 50

using namespace std;

int main()
{
    long int num_dec;

    cin >> num_dec;

    while(num_dec!=0)
    {
        long int num_bin[MAX],i=0,bup,bup2,j,sum=0;

        bup=num_dec;
        bup2=num_dec;

        while(num_dec!=0)
        {
            num_bin[i++]=num_dec%2;
            num_dec=bup/2;
            bup=num_dec;
        }

        cout << "The parity of ";

        for(j=i-1;j>=0;j--)
        {
            sum=sum+num_bin[j];
            cout << num_bin[j];
        }

        cout << " is " << sum << " (mod 2).\n";
        cin >> num_dec;
    }
    return 0;
}
