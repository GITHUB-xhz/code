#if 0
#include<fstream>
#include<string>
#include<iostream>
using namespace std;
int main() {
    ofstream oF("test.txt");
    oF << "hello" << " " << "这是一个文档\n";
    oF.close();
    ifstream iF;
    iF.open("test.txt", ios::in);
    char b[256], c[256];

    char buffer[256];
    if (!iF.is_open())
    {
        cout << "Error opening file"; exit(1);
    }
    while (!iF.eof())
    {
        iF.getline(buffer, 100);
        cout << buffer << endl;
    }
    iF.close();
    return 0;
}
#endif