void foo(int a, int b, char *str) {
    char buffer1[64];
    char buffer2[128];
    int x, y;

    x = 1;
    strcpy(buffer1, str);
    y = 2;
}

void main() {
    int i;
    char long_str[20];
    for (i = 0; i < 20; i++) {
        long_str[i] = '4';
    }
    foo(1, 2, long_str);
}