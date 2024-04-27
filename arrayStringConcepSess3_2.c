#include <stdio.h>
#include <limits.h>

int main() {
    int lenOfArray;
    scanf("%d", &lenOfArray);

    int arr[lenOfArray];

    for (int i = 0; i < lenOfArray; i++) {
        scanf("%d", &arr[i]);
    }

    int nth;
    scanf("%d", &nth);

    int max = INT_MIN;

    for (int i = 0; i < lenOfArray; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int fqArr[max + 1];

    for (int i = 0; i <= max; i++) {
        fqArr[i] = 0;
    }

    for (int i = 0; i < lenOfArray; i++) {
        fqArr[arr[i]]++;
    }

    int count = 0;
    for (int i = max; i >= 0; i--) {
        if (fqArr[i] > 0) {
            count++;
        }
        if (count == nth) {
            printf("%dth largest - %d\n", nth, i);
            break;
        }
    }

    return 0;
}

