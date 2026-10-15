#include <stdio.h>
int main()
{
    int i, j;
    int prod[5][2];
    int tot[5];
    int gtot = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter quantity of product %d: ", i + 1);
        scanf("%d", &prod[i][0]);

        printf("Enter unit price of product %d: ", i + 1);
        scanf("%d", &prod[i][1]);
    }
    for (i = 0; i < 5; i++)
    {
        tot[i] = 0;

        for (j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                tot[i] = prod[i][j] * prod[i][j + 1];
            }
        }

        gtot = gtot + tot[i];
    }
    printf("\nQuantity\tUnit Price\tTotal Price\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t\t%d\t\t%d\n",
               prod[i][0], prod[i][1], tot[i]);
    }
    printf("\nGrand Total = %d\n", gtot);
    return 0;
}
