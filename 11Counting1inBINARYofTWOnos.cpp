#include <iostream>
using namespace std;
int bit1(int c)
{
    int x = 0;

    while (c != 0)
    {
        if (c & 1 == 1)
        {
            x++;
        }
        c = c >> 1;
    }
    return x;
}
int bit(int a, int b)
{
    int sum = bit1(a) + bit1(b);

    return sum;
}
int main()
{
    cout << "sum of binary digit is " << bit(5, 7) << endl;

    return 0;
}