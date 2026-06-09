#include <stdio.h>
int main() {
    int a, b, x, y;
    scanf("%d %d", &a, &b);
    x = a; y = b;
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;
    int lcm = (x * y) / gcd;
    printf("LCM = %d", lcm);
    return 0;
}