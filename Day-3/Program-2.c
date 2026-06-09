#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++) {
        int flag = 0;
        if(i < 2) continue;
        for(int j = 2; j <= i/2; j++) {
            if(i % j == 0) { flag = 1; break; }
        }
        if(flag == 0) printf("%d ", i);
    }
    return 0;
}