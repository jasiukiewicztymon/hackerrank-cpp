#include <stdio.h>

void update(int *a,int *b) {
    int plus = *a + *b, minus;
    if (*a > *b) {
        minus = *a - *b;
    }   
    else {
        minus = *b - *a;
    }
    
    *a = plus;
    *b = minus;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
