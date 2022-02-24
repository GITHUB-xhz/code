#if 1
#include<iostream>
using namespace std;

int fun(int x) {
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i += 1) {
		if (a[i] == x) {
			return 1;
		}
	}
	return 0;
}
int main() {
	int a;
	cin >> a;
	cout << typeid(a).name() << "\n";
	if (typeid(a).name() =="int") {
		cout << fun(a) << "\n";
	}
	return 0;

}
#endif