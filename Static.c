#include <stdio.h>

int bruh() {
    static int hmm = 0;
    hmm++;
    print("%d ", hmm);
    return hmm;
}

int main() {
    printf("%d ", bruh());
    printf("%d ", bruh());
    return 0;
}
