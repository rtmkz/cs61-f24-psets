#include <cstring>
#include <cassert>
#include <cstdio>
#include <algorithm>

int main(int argc, char* argv[]) {
    std::sort(argv + 1, argv + argc);
    for (int i = 1; i < argc; i++) {
        fprintf(stdout, "%s\n", argv[i]);
    }
}