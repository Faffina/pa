#include<iostream>
#include<cmath>
using namespace std;

int main(){
    for(int x = 0; x < 10000; x++)
        cout << sin(double(x) / 1000) << ", " << double(x) / 1000 << endl;
}