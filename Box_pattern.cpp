#include <iostream>
using namespace std;

int main()
{

    int n, row, col;
    cout<<"Enter a number (between 0-9): ";
    cin>>n;

        for(int row = 1; row<=n; ++row){
            for(int col = 0; col<n; ++col){
                cout<<"* ";
            }
            cout<<endl;
        }

    cout<<endl;

        for(int row = 1; row<=n; ++row){
            for(int col = 1; col<=n; ++col){
                cout<<row<<" ";
            }
            cout<<endl;
        }
    cout<<endl;

        for(int row = 1; row<=n; ++row){
            for(int col = 1; col<=n; ++col){
                cout<<col<<" ";
            }
            cout<<endl;
        }
    cout<<endl;

        for(int row = 1; row<=n; ++row){
            for(int col = n; col>=1; --col){
                cout<<col<<" ";
            }
            cout<<endl;
        }
    cout<<endl;

        for(int row = 1; row<=n; ++row){
            for(int col = 1; col<=n; ++col){
                cout<<col*col<<" ";
            }
            cout<<endl;
        }
    cout<<endl;

    for (row = 1; row <= n; ++row)
    {
        for (col = 1; col <= n; ++col)
        {
            char alph = 'a' + (col-1);
            cout << alph << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (row = 1; row <= n; ++row)
    {
        for (col = 1; col <= n; ++col)
        {
            cout << (row-1)*n+col<< " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}