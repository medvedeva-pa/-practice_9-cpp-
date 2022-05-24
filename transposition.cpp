#include <iostream>
using namespace std;
int main()
{
    int l, c, a[10][10], b[10][10], i, j;
    cout << "amount of rows: \n";
    cin >> l;
    cout << "amount of columns: \n";
    cin >> c;
    cout << endl << "amount of elements in first matrix: " << endl;

    for(i = 0; i < l; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << "element a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];

        }
    for(i = 0; i < l; ++i){
        for(j = 0; j < c; ++j)
            cout << a[i][j] << " ";
    }

    for(i = 0; i < l; ++i){
        for(j = 0; j < c; ++j)
            b[i][j] = a[j][i];
    }
    for(i = 0; i < l; ++i){
        for(j = 0; j < c; ++j)
            cout << b[i][j] << " ";
    }

    return 0;
}