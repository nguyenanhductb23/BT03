#include <iostream>

using namespace std;

void bubbleSort(int a[], int N) {
    for (int k = N-1; k > 0; k--) {
       bool swapped = false;
       for (int i = 1; i <= k; i++) {
          if (a[i-1] > a[i]) {
             int temp = a[i];
             a[i] = a[i-1];
             a[i-1] =  temp;
              swapped = true;
          }
       }
       if (!swapped) break;
    }
}

int main()
{
    int N;
    cin >> N;
    int T[N];
    for (int i = 0; i < N; i++)
        cin >> T[i];
    //Để tổng thời gian đợi là ít nhất
    //thì cần ưu tiên người có thới gian khám ngắn hơn khám trước
    bubbleSort(T,N);
    int sum = 0;
    for (int i = 0; i < N-1; i++) sum += T[i]*(N-1-i);
    cout << sum;
    return 0;
}
