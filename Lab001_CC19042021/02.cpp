/*

#include <iostream>

using namespace std;

int fibbonacci(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return (fibbonacci(n - 1) + fibbonacci(n - 2));
	}
}

void fibo() {
	long long int a = 4000000;
	long long int x = 0;
	int y = 1;
	while (x < a)
	{
		int b = fibbonacci(y);
		if (b > a)
		{
			break;
		}
		if (b % 2 == 0)
		{
			x = x + b;
		}
		y++;
	}
	cout << x;
}


int main() {

	fibo();

}

*/
