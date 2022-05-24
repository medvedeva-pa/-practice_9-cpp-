#include <iostream>
using namespace std;
class matrix
{
private:
    int mat[3][3];
    int l,c;
public:
    void getdate()
    {

        for (int i=0; i<5; i++)
            for (int j=0; j<5; j++)
                mat[i][j]=rand() %10;
    };
    void putdate()
    {
        cout << "amount of rows: \n";
        cin >> l;
        cout << "amount of columns: \n";
        cin >> c;
        for (int i=0; i<l; i++)
        {
            for (int j=0; j<c; j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;}
    };

};
int main()
{
    matrix mat;
    mat.getdate();
    mat.putdate();

    return 0;
}