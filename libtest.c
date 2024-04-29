#include <stdio.h>
#include "libtest.h"

void assert(struct TestModule t) {
    printf("Module: %s\n", t.name);
    printf("It %s\n", t.description);

    switch (t.typeOf) {
        case 1:
            printf("Expected %d with type int, received %d\n", *(int*)t.expected, *(int*)t.received);
            if (*(int*)t.expected == *(int*)t.received) {
                printf("PASS\n");
                return;
            }
            break;
        case 2:
            printf("Expected %c with type char, received %c\n", *(char*)t.expected, *(char*)t.received);
            if (*(char*)t.expected == *(char*)t.received) {
                printf("PASS\n");
                return;
            }
            break;
        case 3:
            if (*(float*)t.expected == *(float*)t.received) {
                printf("PASS\n");
                return;
            }
            printf("Expected %f with type float, received %f\n", *(float*)t.expected, *(float*)t.received);
            break;
        case 4:
            if (*(double*)t.expected == *(double*)t.received) {
                printf("PASS\n");
                return;
            }
            printf("Expected %lf with type double, received %lf\n", *(double*)t.expected, *(double*)t.received);
            break;
    }
    printf("FAIL");
}