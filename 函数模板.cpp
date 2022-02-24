#if 0
#include<iostream>
using namespace std;
void print(char x, int n = 1)
{
    for (int i = 0; i < n; i++)
    {
        cout << x;
    }
}
void print(double x, int n = 1)
{
    for (int i = 0; i < n; i++)
    {
        cout << x;
    }
}
int main()
{
    print('*'); cout << endl;
    print('*', 5); cout << endl;
    print(5.2, 6); cout << endl;
    print(double(5), 6); cout << endl;
    return 0;
}
#endif