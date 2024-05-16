#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int n = 4;

    for (row = 1; row <= n; ++row)
    {
        if (row != 1)
        {
            for (col = 1; col <= 4 - (1 % row); ++col)
                cout << "  ";
        }
        for (col = 1; col <= 1 % row; ++col)
        {
            cout << "* ";
        }
        for (col = 1; col <= 3 - (1 % row); ++col)
        {
            cout << "  ";
            if (row == 4)
                cout << " ";
        }
        for (col = 1; col <= 1 % row; ++col)
            cout << "* ";

        cout << endl;
    }
    return 0;
}