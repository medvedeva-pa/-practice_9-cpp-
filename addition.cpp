#include <iostream>
using namespace std;
int main()
{
    int l, c, a[10][10], b[10][10], sum[10][10], i, j;
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

    cout << endl << "amount of elements in second matrix: " << endl;
    for(i = 0; i < l; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << "element b" << i + 1 << j + 1 << ": ";
            cin >> b[i][j]; }
    for(i = 0; i < l; ++i)
        for(j = 0; j < c; ++j) sum[i][j] = a[i][j] + b[i][j];
    cout << endl << "summ: " << endl;
    for(i = 0; i < l; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][ j] << " ";
            if(j == c - 1) cout << endl;
        }
    return 0;
}