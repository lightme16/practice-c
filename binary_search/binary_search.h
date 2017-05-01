//
// Created by alex on 01.05.17.
//

#ifndef PRACTICE_C_BINARY_SEARCH_H
#define PRACTICE_C_BINARY_SEARCH_H

#endif //PRACTICE_C_BINARY_SEARCH_H

int binary_search();

int binary_search_iter();

int binary_search(int array[], int low, int high, int key) {
    if (low > high)
        return -1;

    int mid = (high + low) / 2;

    if (key == array[mid])
        return mid;
    else if (key < array[mid])
        return binary_search(array, low, mid - 1, key);
    else
        return binary_search(array, mid + 1, high, key);
}

int binary_search_iter(int array[], int low, int high, int key) {
    while (low <= high) {
        int mid = (high + low) / 2;

        if (key == array[mid])
            return mid;
        else if (key < array[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
