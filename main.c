#include <stdio.h>
#include <time.h>

long timediff(clock_t t1, clock_t t2) {
    long elapsed;
    elapsed = ((double)t2 - t1) / CLOCKS_PER_SEC * 1000;
    return elapsed;
}

long fibonacci(long i) {

    if(i == 0) {
        return 0;
    }

    if(i == 1) {
        return 1;
    }
    return fibonacci(i-1) + fibonacci(i-2);
}

int  main() {

    clock_t t1, t2;
    long elapsed;
    int diff;
    long i;

    for (i = 0; i < 100; i++) {
        t1 = clock();
        printf("%d",i);
        printf(" : %d", fibonacci(i));
        t2 = clock();
        elapsed = timediff(t1, t2);
        printf(" - took : %ld ms\t\n", elapsed);
    }

    printf("\n");
    return 0;
}
