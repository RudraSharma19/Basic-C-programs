// Q138: Print all enum names and integer values using a loop.
#include <stdio.h>

enum Color {
RED,
YELLOW,
GREEN
};

int main() {
enum Color c;

for (c = RED; c <= GREEN; c++) {
    if (c == RED) {
        printf("RED=%d\n", c);
    } else if (c == YELLOW) {
        printf("YELLOW=%d\n", c);
    } else if (c == GREEN) {
        printf("GREEN=%d\n", c);
    }
}

return 0;
}
