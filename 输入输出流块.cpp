#if 0
#include<iostream>
using namespace std;
void help()
{
    cout << "请输入： 左运算数  运算符  右运算数\n" << "-------------------\n";
}

int main() {
#if 0
    cout << "hello world" << endl;
    cout << 1 + 2 << endl;
    double radius;
    cin >> radius;
    cout << 3.14 * radius * radius;
#endif
#if 1
    double a, b;
    char c;
    help();
    cin >> a >> c >> b;
    if (c == '+')
    {
        cout << a + b;
    }
    else if (c == '-')
    {
        cout << a - b;
    }
    else if (c == '*')
    {
        cout << a * b;
    }
    else if (c == '/')
    {
        cout << a / b;
    }
#endif
}
#endif