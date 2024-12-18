#include <stdio.h>

using namespace std;

int main() {
    unsigned long res = 0;
    while (fgetc(stdin) != EOF) {
        res++;
    }
    fprintf(stdout, "%8lu\n", res);
    return 0;
}