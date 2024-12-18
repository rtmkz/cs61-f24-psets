#include <stdio.h>
#include <cctype>

using namespace std;

unsigned long words, lines, bytes;
int main() {
    char c = fgetc(stdin);
    char prev = ' ';
    while (c != EOF) {
        if (isspace(prev) && !isspace(c)) {
            words++;
        }
        if (c == '\n') {
            lines++;
        }
        bytes++;
        
        prev = c;
        c = fgetc(stdin);
    }
    
    fprintf(stdout, "%lu %lu %lu\n", lines, words, bytes);
    return 0;
}