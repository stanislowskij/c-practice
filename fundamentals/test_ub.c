#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stuff {
    int arg;
    void (*action)(int);
} Stuff;

void method(int x) {
    printf("%d\n", x);
}

int main() {
    // Stuff s;
    // int x = 3;
    // s.arg = x;
    // s.action = method;

    // s.action(s.arg);

    // int *p = &x;

    // ++*p;

    // printf("%d", p);

    char *s2 = malloc(7);
    s2 = "world!";
    char s1[14] = "Hello, ";

    size_t len = sizeof(s1);
    printf("%d\n", len);
    strcat(s1, s2);

    printf("%s\n", s1);
    printf("%s\n", s2);
}
