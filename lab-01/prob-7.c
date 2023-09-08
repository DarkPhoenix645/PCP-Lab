#include <stdio.h>

// Denominations should be ordered in descending order
const int denominations[] = {100, 50, 10};
const int denominations_size = sizeof(denominations)/sizeof(int);

int main() 
{
    // Calculating which denominations to hand out for any given amount of money
    // Available denominations: 10, 50, 100
    int money;
    goto input;

    input:
        printf("How much money do you need?: ");
        scanf("%i", &money);
        if (money % 10)
        {
            printf("Cannot divide input amount using currently available denominations");
            goto input;
        }
        else
        {
            int notes = 0;

            for (int i = 0; i < denominations_size; i++)
            {
                while (money >= denominations[i]) 
                {
                    notes = money / denominations[i];
                    money %= denominations[i];
                }

                if (notes == 0) 
                {
                    continue;
                }
                else
                {
                    notes == 1 ? printf("%i note of denomination %i\n", notes, denominations[i]) : 
                                 printf("%i notes of denomination %i\n", notes, denominations[i]) ;
                    notes = 0;
                }
            }

            return 0;
        }
}