#if 0
#include<iostream>
using namespace std;
void swap(int* x, int* y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
void swap2(int& p, int& q)
{
    int t = p;
    p = q;
    q = t;
}
int main() {
    int a = 5, & r = a, b = 8;
    cout << a << '\t' << r << "\n";
    r = 3;
    cout << a << '\t' << r << "\n";
    swap(&a, &b);
    cout << a << b << "\n";
    swap2(a, b);
    cout << a << b << "\n";
    return 0;
}
#endif