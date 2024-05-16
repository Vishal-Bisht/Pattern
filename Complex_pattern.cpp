#include <iostream>
using namespace std;

int main()
{
    int n,  row, col;
    cout << "Enter a number (between 0-9): ";
    cin >> n;

    for (row = 1; row <= n; ++row)
    {
        for (col = 1; col <= n - row; ++col)
            cout << "  ";
        for (col = 1; col <= 2 * (row - 1) + 1; ++col)
            cout << "* ";

        cout << endl;
    }
    cout << endl;

    for (row = 1; row <= n; ++row)
    {
        for (col = 1; col <= n - row; ++col)
            cout << "  ";
        for (col = 1; col <= row; ++col)
            cout << col <<" ";
        for(col = row-1; col>=1; --col)
            cout<< col << " ";

        cout << endl;
    }
    cout << endl;

    for (row = 1; row <= n; ++row)
    {
        if (row != 1)
        {
            for (col = 1; col <= row - 1; ++col)
                cout << "  ";
        }
        for (col = n; col >= row; --col)
            cout <<"* ";
        for (col = row + 1; col <= n; ++col)
            cout <<"* ";

        cout << endl;
    }
    cout << endl;

    for (row = 1; row <= n; ++row)
    {
        for (col = row; col <= n; ++col)
            cout <<"* ";
        if (row != 1)
        {
            for (col = 1; col <= (row - 1)*2; ++col)
                cout << "  ";
        }
        for (col = n; col >= row; --col)
            cout <<"* ";

        cout << endl;
    }
    for(row = n; row >= 1; --row){
        for (col = row; col <= n; ++col)
            cout <<"* ";
        if (row != 1)
        {
            for (col = 1; col <= (row - 1)*2; ++col)
                cout << "  ";
        }
        for (col = n; col >= row; --col)
            cout <<"* ";

        cout << endl;
    }
    cout << endl;

    for (row = 1; row <= n; ++row)
    {
        for (col = 1; col <= row; ++col)
        {
            cout << "* ";
        }

        for (col = 1; col <= 2*n - 2 * row; ++col)
        {
            cout << "  ";
        }

        for (col = 1; col <= row; ++col)
        {
            cout << "* ";
        }

        cout << endl;
    }
    for (row = n - 1; row >= 1; --row)
    {
        for (col = 1; col <= row; ++col)
        {
            cout << "* ";
        }

        for (col = 1; col <= 2*n - 2 * row; ++col)
        {
            cout << "  ";
        }

        for (col = 1; col <= row; ++col)
        {
            cout << "* ";
        }

        cout << endl;
    }
    cout << endl;

    for (row = 1; row <= n; ++row)
    {
        for (col = 1; col <= n- row; ++col)
        
            cout << " ";
        

        for (col = 1; col <= row; ++col)
        
            cout << "* ";
        


        for (col = 1; col <= n- row; ++col)
        
            cout << " ";
        

        cout << endl;
    }
    for (row = n-1; row >= 1; --row)
    {
        for (col = 1; col <= n- row; ++col)
        
            cout << " ";
        

        for (col = 1; col <= row; ++col)
        
            cout << "* ";
        


        for (col = 1; col <= n- row; ++col)
        
            cout << " ";

        cout << endl;
    }
    cout << endl;

    for (row = 1; row <= n; ++row)
    {
        for (col = 1; col <= n- row; ++col)
        
            cout << "   ";
        

        for (col = 1; col <= row; ++col)
        
            cout << "* ";
        


        for (col = 1; col <= n- row; ++col)
        
            cout << "   ";
        

        cout << endl;
    }
    for (row = n-1; row >= 1; --row)
    {
        for (col = 1; col <= n- row; ++col)
        
            cout << "   ";
        

        for (col = 1; col <= row; ++col)
        
            cout << "* ";
        


        for (col = 1; col <= n- row; ++col)
        
            cout << "   ";

        cout << endl;
    }
    cout << endl;
    return 0;
}