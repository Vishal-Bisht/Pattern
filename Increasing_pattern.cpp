#include <iostream>
using namespace std;

int main()
{
    int n, row, col;
    cout<<"Enter a number (between 0-9): ";
    cin>>n;

    for(row = 1; row<=n; ++row){
        for(col =1; col<=row; ++col){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(row = 1; row<=n; ++row){
        for(col =1; col<=row; ++col){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(row = 1; row<=n; ++row){
        for(col =1; col<=row; ++col){
            cout<<row<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(row = 1; row<=n; ++row){
        for(col = row; col>=1; --col){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(row = 1; row<=n; ++row){
        for(col = 1; col<=row; ++col){
            char alph = 'a'+(row-1);
            cout<<alph<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(row = n; row>=1; --row){
        for(col = 1; col<=row; ++col){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    for (row = 1; row <= n; ++row)
    {
        for (col = 1; col <= n - (row - 1); ++col)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    for (row = 1; row <= n; ++row)
    {
        for (col = 1; col <= n - (row - 1); ++col)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (row = 1; row <= n; ++row)
    {
        for (col =n; col >=n-(row-1); --col)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}