#include <iostream>
#include "bins.h"
using namespace std;

typedef unsigned long long int faffa;

int main()
{
    faffa maxn = 288800000;
    faffa* list = new faffa[maxn];
    cerr << "init list:";
    for(faffa i = 0; i < maxn; i++)
        list[i] = i * i;
    cerr << "fine\n";

    faffa s = 0;
    for(faffa b = 2; b < 333333335; b++)
    {
        if(b % 10000 == 0)
            cerr << "\r" << double(b) / 333333335 * 100 << "%"; 
        faffa a = b - 1;
        if(a % 2 == 0 and bins(list, 1, maxn-1, b*b-a*a/4) != 0)
            {s += b*3 - 1; cout << b << "-\n"; cerr << "\r          hit:" << b; continue;}

        a = b + 1;
        if(a % 2 == 0 and bins(list, 1, maxn-1, b*b-a*a/4) != 0)
            {s += b*3 + 1; cout << b << "+\n"; cerr << "\r          hit:" << b; continue;}
    }
    cerr << endl;
    cerr << s << endl;;
}