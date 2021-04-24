/*


#include <iostream>
#include <vector>
#include <math.h>


using namespace std;

void nine() {
    int max = 1000;
    int z2 = 0;
    vector<int> temp(max + 1);
    for (int i = 1; i < max; i++)
    {
        for (int j = i + 1; j < max - i; j++)
        {
            int a1 = i * i + j * j;
            int a = sqrt(a1);
            if (a * a != a1)
            {
                continue;
            }
            int sum = i + a + j;
            if (sum > max)
            {
                cout << temp[sum] << " ";
                break;
            }
            if (temp[sum] < i * j * a)
            {
                temp[sum] = i * j * a;

            }
        }

    }
}

int main() {

    nine();

    return 0;
}
*/


