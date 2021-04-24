/*

#include <iostream>
#include <vector>

using namespace std;

int multiples(int number) {
	int sum=0;
	int x = 0;
	vector<int> v;
	while (x < number)
	{
		if (x % 3 == 0)
		{
			v.push_back(x);
		}
		if (x % 5 == 0)
		{
			v.push_back(x);
		}
		x++;
	}

	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		sum += *it;

	return sum;
}


int main() {
	int a;
	cout << "Numero Maximo ";
	cin >> a;
	cout << multiples(a);


	return 0;
}


*/

