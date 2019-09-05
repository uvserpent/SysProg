/**
 * Extreme Edge Cases
 * CS 241 - Fall 2019
 */
#include <stdio.h>
#include <stdlib.h>

#include "camelCaser.h"
#include "camelCaser_tests.h"

int main() {
    char * example = " .";
    char ** camelCased = camel_caser(example);
    printf("the first value is %s\n", camelCased[0]);
    // Feel free to add more test cases of your own!

    if (test_camelCaser(&camel_caser, &destroy)) {
        printf("SUCCESS\n");
    } else {
        printf("FAILED\n");
    }
}
