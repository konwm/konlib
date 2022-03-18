#include <stdlib.h>
#include <stdio.h>
#include "hello.h"

int main(int argc, char** argv) {
    int v = 10;
    int i;

    say_hello(v);

    for (i = 0; i < argc; i++) {
        printf("args[%d] is : %s\n", i, argv[i]);
    }

    return 0;
}