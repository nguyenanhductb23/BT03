#include <iostream>

using namespace std;

void input(char **arr, int nRows, int nCols) {
    for (int i = 1; i <= nRows; i++)
        for (int j = 1; j <= nCols; j++)
            cin >> arr[i][j];
}

void warn(char **arr, int nRows, int nCols) {
    char **mat = new char *[nRows+1];
    for (int i = 1; i <= nRows; i++) {
        *(mat+i) = new char [nCols+1];
        for (int j = 1; j < nCols+1; j++) {
            if (arr[i][j] == '*') mat[i][j] = '*';
            else
            mat[i][j] =   (arr[i-1][j-1]=='*') + (arr[i-1][j]=='*') + (arr[i-1][j+1]=='*')
                        + (arr[i][j-1]=='*')                 + 48   + (arr[i][j+1]=='*')
                        + (arr[i+1][j-1]=='*') + (arr[i+1][j]=='*') + (arr[i+1][j+1]=='*');
        }
    }
    for (int i = 1; i <= nRows; i++) {
        for (int j = 1; j <= nCols; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
    for (int i = 0; i <= nRows; i++) delete []mat[i];
    delete []mat;
}

int main()
{
    int nRows, nCols;
    cin >> nRows >> nCols;
    char **arr = new char *[nRows+2];
    for (int i = 0; i < nRows+2; i++) {
        *(arr+i) = new char [nCols+2];
        for (int j = 0; j < nCols+2; j++) arr[i][j] = ' ';
    }
    input(arr, nRows, nCols);
    warn(arr, nRows, nCols);
    for (int i = 0; i < nRows+2; i++) delete []arr[i];
    delete []arr;
    return 0;
}
