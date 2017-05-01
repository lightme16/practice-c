#include <stdio.h>
#include <assert.h>
#include "binary_search.h"

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int rv;

    rv = binary_search(array, 0, 5, 4);
    assert(rv == 3);

    printf("Result recursive: %d\n", rv);

    rv = binary_search_iter(array, 0, 5, 4);
    assert(rv == 3);

    printf("Result iter: %d\n", rv);

    return 0;
}

