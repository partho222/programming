#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    char typ[20];
    int kase=0;

    cin >> typ;

    while(typ[0]!='*')
    {
        if(typ[0]=='H')
        {
            cout << "Case " << ++kase << ": Hajj-e-Akbar\n";
        }

        else
        {
            cout << "Case " << ++kase << ": Hajj-e-Asghar\n";
        }

        cin >> typ;
    }

    return 0;
}
