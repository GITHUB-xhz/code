#if 0
#include<iostream>
using namespace std;

int n_jie(int n){
	if (n == 1) {
		return 1;
	}
	else {
		
		return n * n_jie(n - 1);
	}
}
int main() {
	cout << n_jie(5);
}
#endif