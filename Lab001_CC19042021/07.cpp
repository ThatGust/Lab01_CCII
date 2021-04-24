/*

#include <iostream>
#include <math.h>

using namespace std;

void seven() {
    long long int counter = 0;
    long long int primeNum = 0;
    bool isPrime;
    int num=0;
    for (int i = 2; i < 10000000; i++)
    {

        num = i;

        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime == true)
        {
            primeNum = num;

        }
        if (counter == 10001)
        {
            break;

        }

    }

    cout << primeNum;
}


int main() {

    seven();

    return 0;
}

*/