#include <iostream>
#include <cstring>
#include "vec.h"
using namespace std;

int main ()
{
    Vector A,B ;

    cout << " A vector : ";
        for ( int i = 0 ; i < 5 ; i++)
        {
            int x;
            cout << " enter x " << i << "\t";
            cin >> x ;
            A.insert(i,x);
        }

        cout << " B vector : ";

            for ( int i = 0 ; i < 5 ; i++)
        {
            int x;
            cout << " enter x " << i << "\t";
            cin >> x ;
            B.insert(i,x);
        }


        cout << " A output : ";
        A.print();
        B.print();
    }