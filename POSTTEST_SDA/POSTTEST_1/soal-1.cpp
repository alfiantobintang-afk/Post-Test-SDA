#include <iostream>
using namespace std;

int FindMin(int A[], int n, int &index) {
    int min = A[0];
    index = 0;

    for (int i = 1; i < n; i++) {
        if (A[i] < min) {
            min = A[i];
            index = i;
        }
    }
    return min;
}

int main() {
    int fib[8] = {1, 1, 2, 3, 5, 8, 13, 21};
    int indexMin;

    int minValue = FindMin(fib, 8, indexMin);

    cout << "Nilai minimum : " << minValue << endl;
    cout << "Indeks        : " << indexMin << endl;

    return 0;
}
