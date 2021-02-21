#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int val = 1;
    int arr[x][y];
    int max_num = x * y;
    int filled_cols = 0, filled_rows = 0;
    while (val <= max_num) {
        for (int i = filled_cols; i < y - filled_cols; i++) {
            arr[filled_rows][i] = val;
            val++;
        }
        filled_rows++;
        for (int i = filled_rows; i < x - filled_rows; i++) {
            arr[i][y - filled_cols - 1] = val;
            val++;
        }
        if (val <= max_num) {
            for (int i = y - 1 - filled_cols; i >= filled_cols; i--) {
                arr[x - filled_rows][i] = val;
                val++;
            }
            if (val <= max_num) {
                for (int i = x - 1 - filled_rows; i >= filled_rows; i--) {
                    arr[i][filled_cols] = val;
                    val++;
                }
                filled_cols++;
            }
        }
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
            cout << right << setw(3) << setfill(' ') << arr[i][j];
        cout << endl;
    }

    return 0;
}
