//  1098 - Sequence IJ 4

#include <stdio.h>

int main() {
    for (int i = 0; i <= 20; i += 2) {
        for (int j = 1; j <= 3; j++) {
            float fl_i = i / 10.0;
            float fl_j = fl_i + j;
            if (i % 10 == 0) {
                printf("I=%d J=%d\n", (int)fl_i, (int)fl_j);
            } else {
                printf("I=%.1f J=%.1f\n", fl_i, fl_j);
            }
        }
    }
    return 0;
}
