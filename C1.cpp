#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    vector<int> vt(0);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < vt.size(); j++) {
            if (arr[i] == vt[j]) {
                cout << "Yes";
                return 0;
            }
        }
        vt.push_back(arr[i]);
    }
    cout << "No";
    return 0;
}
