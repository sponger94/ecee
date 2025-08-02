//
// Created by Javokir on 8/2/2025.
// Implementation file for statistics functions used to analyze unsigned char arrays.
//

#include "stats.h"
#include <stdio.h>

void print_statistics(unsigned char* data, unsigned int size) {
    printf("Statistics:\n");
    printf("Minimum: %u\n", find_minimum(data, size));
    printf("Maximum: %u\n", find_maximum(data, size));
    printf("Mean   : %u\n", find_mean(data, size));
    printf("Median : %u\n", find_median(data, size));
}

void print_array(unsigned char* data, unsigned int size) {
    printf("Array Elements:\n");
    for (unsigned int i = 0; i < size; i++) {
        printf("%3u ", data[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    printf("\n");
}

unsigned char find_median(unsigned char* data, unsigned int size) {
    unsigned char temp[size];
    for (unsigned int i = 0; i < size; i++) {
        temp[i] = data[i];
    }

    // Sort temp array in descending order
    for (unsigned int i = 0; i < size - 1; i++) {
        for (unsigned int j = i + 1; j < size; j++) {
            if (temp[i] < temp[j]) {
                unsigned char t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }

    if (size % 2 == 0)
        return (temp[size/2 - 1] + temp[size/2]) / 2;
    else
        return temp[size/2];
}

unsigned char find_mean(unsigned char* data, unsigned int size) {
    unsigned int sum = 0;
    for (unsigned int i = 0; i < size; i++) {
        sum += data[i];
    }
    return (unsigned char)(sum / size); // Integer division rounds down
}

unsigned char find_maximum(unsigned char* data, unsigned int size) {
    unsigned char max = data[0];
    for (unsigned int i = 1; i < size; i++) {
        if (data[i] > max)
            max = data[i];
    }
    return max;
}

unsigned char find_minimum(unsigned char* data, unsigned int size) {
    unsigned char min = data[0];
    for (unsigned int i = 1; i < size; i++) {
        if (data[i] < min)
            min = data[i];
    }
    return min;
}

void sort_array(unsigned char* data, unsigned int size) {
    for (unsigned int i = 0; i < size - 1; i++) {
        for (unsigned int j = i + 1; j < size; j++) {
            if (data[i] < data[j]) {
                unsigned char temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

int main() {
    unsigned char test[40] = {
        34, 201, 190, 154, 8, 194, 2, 6,
        114, 88, 45, 76, 123, 87, 25, 23,
        200, 122, 150, 90, 92, 87, 177, 244,
        201, 6, 12, 60, 8, 2, 5, 67,
        7, 87, 250, 230, 99, 3, 100, 90
    };
    unsigned int size = 40;

    printf("Original Data:\n");
    print_array(test, size);
    print_statistics(test, size);

    sort_array(test, size);

    printf("\nSorted Data (Descending):\n");
    print_array(test, size);

    return 0;
}
