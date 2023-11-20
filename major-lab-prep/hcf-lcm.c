#include <stdio.h>

int main () {
    int x, y, hcf, lcm;
    printf("Enter space separated numbers: ");
    scanf("%d %d", &x, &y);

    int max = x > y ? x : y;
    
    for (hcf = max; hcf >= 1; hcf--)
    {
        if (x % hcf == 0 && y % hcf == 0) { break; }
    }

    lcm = (x * y) / hcf;

    printf("HCF: %d, LCM: %d\n", hcf, lcm);
    
    return 0;
}