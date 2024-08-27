#include <iostream>

using namespace std;

int main()
{
    int w;
    cin >> w;

    // Check if it is possible to divide the weight into two even numbers
    if (w > 2 && w % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
