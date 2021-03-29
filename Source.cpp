#include <iostream>
#include "LongLong_Public.h"

int main()
{
    LongLong_Public A, B;

    cout << "\nLongLong1" << endl;
    cin >> A;
    cout << A;

    cout << "\nLongLong2" << endl;
    cin >> B;
    cout << B;

    if (A > B) { cout << "A>B" << endl; }
    if (A < B) { cout << "A<B" << endl; }
    if (A == B) { cout << "A=B" << endl; }

    cout << "A++" << endl; cout << A++ << endl;
    cout << "A--" << endl; cout << A-- << endl;
    cout << "++A" << endl; cout << ++A << endl;
    cout << "--A" << endl; cout << --A << endl;


    return 0;
}