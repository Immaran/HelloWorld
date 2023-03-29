#include <iostream>
#include <conio.h>

using namespace std;

int sgn(double value)
{
    return (0 < value) - (value < 0);
}

int main()
{
    for (int x = 0; x < 10; x++)
    {
        cout << (char)((sgn(4.5 - x) + 1) / 2 * (1.125 * pow(x, 4) - 9.583 * pow(x, 3) + 25.875 * pow(x, 2) - 20.417 * x + 72) + (sgn(x - 4.5) + 1) / 2 * (1.125 * pow(x, 4) - 32.584 * pow(x, 3) + 347.877 * pow(x, 2) - 1624.427 * x + 2883));

        if (x == 4) cout << ' ';
        if (x == 9) cout << "!\n";
    }
}