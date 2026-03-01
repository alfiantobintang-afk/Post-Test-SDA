#include <iostream>
using namespace std;

void reverseArray(int* arr, int n) {
    int* start = arr;
    int* end = arr + n - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int prime[7] = {2, 3, 5, 7, 11, 13, 17};

    cout << "Array sebelum dibalik:\n";
    for (int i = 0; i < 7; i++) {
        cout << prime[i] << " (Alamat: " << &prime[i] << ")\n";
    }

    reverseArray(prime, 7);

    cout << "\nArray setelah dibalik:\n";
    for (int i = 0; i < 7; i++) {
        cout << prime[i] << " (Alamat: " << &prime[i] << ")\n";
    }

    return 0;
}