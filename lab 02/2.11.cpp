#include <iostream>
using namespace std;

int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    cout << "rows = ";
    cin >> r;
    cout << "columns = ";
    cin >> c;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << "a" << i + 1 << j + 1 << " = ";
            cin >> a[i][j];
        }
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << "b" << i + 1 << j + 1 << " = ";
            cin >> b[i][j];
        }
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];
    cout << "\t\tSum\t\t  " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }
    return 0;
}
