#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    while(1)
    {
        int tri_a,tri_b,tri_c;
        cin >> tri_a >> tri_b >> tri_c;

        if(tri_a==0 && tri_b==0 && tri_c==0)
        {
            return 0;
        }

        else
        {
            if(((tri_a*tri_a)+(tri_b*tri_b))==(tri_c*tri_c))
            {
                cout << "right" << "\n";
            }
            else if(((tri_a*tri_a)+(tri_c*tri_c))==(tri_b*tri_b))
            {
                cout << "right" << "\n";
            }
            else if(((tri_b*tri_b)+(tri_c*tri_c))==(tri_a*tri_a))
            {
                cout << "right" << "\n";
            }
            else
            {
                cout << "wrong" << "\n";
            }
        }

    }
}
