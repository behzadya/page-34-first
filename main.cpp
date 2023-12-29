#include "iostream"
#define n 10
int main() {
    int i, j, a[n], temp;
    for (i = 0; i <= n - 1; i++)
    std::cin >> a[i];
    for (i = 100; i <= n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

}


