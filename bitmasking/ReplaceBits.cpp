#include <iostream>
using namespace std;


//you are given two 32-bit numbers, N ans M and two bit positions i and j
//write a method to set all bits between i and j in N equal to M,
//M becomes a substring of N locationed at and starting at j

//N = 1000000000
//M = 10101
//i = 2 j = 6
//output : 1001010100
void clearBitsInRange(int &n, int i , int j){
    int a = (-1) << (j+1);
    int b = (1 << i) - 1;
    int mask = a| b;
    n = n & mask;
}

void replaceBits(int &n, int i , int j , int m){
    clearBitsInRange(n, i, j);
    int mask = m << i;
    n = n | mask;
}
int main()
{
    int n, i, j, m;
    cin >> n >> i >> j >> m;
    replaceBits(n, i,j, m);
    cout << n << endl;
    return 0;
}
