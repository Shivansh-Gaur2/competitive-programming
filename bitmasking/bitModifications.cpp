#include <iostream>
using namespace std;

int getIthBit(int n, int i){
    
    int mask = 1 << i ;
    return (n & mask) > 0 ? 1 : 0;
}

void setIthBit(int &n, int i){
    int mask = (1 << i);
    n = n | mask;
}

void clearIthBit(int &n, int i){
    int mask = ~(1 << i);
    n=n & mask;
}

void clearLastBits(int &n, int i){
    int mask = (-1 << i);
    n = n & mask;
}

void clearBitsInRange(int &n, int i , int j){
    int a = (~0) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a|b;
    n = n & mask;

}
int main()
{
    int n ;
    int i;
    cin >> n >> i;

    cout << getIthBit(n, i);
    return 0;
}
