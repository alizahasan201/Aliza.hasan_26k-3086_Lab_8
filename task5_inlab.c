#include <stdio.h>
int main()
{
    int arr[3][3];
    int i, j;
    int null = 1, diagonal = 1, upper = 1;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter element: ");
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] != 0)
            {
                null = 0;
            }

            if (i != j && arr[i][j] != 0)
            {
                diagonal = 0;
            }

            if (i > j && arr[i][j] != 0)
            {
                upper = 0;
            }
        }
    }

    printf("\nSquare Matrix: Yes (3x3)\n");

    if (null == 1)
        printf("Null Matrix: Yes\n");
    else
        printf("Null Matrix: No\n");

    if (diagonal == 1)
        printf("Diagonal Matrix: Yes\n");
    else
        printf("Diagonal Matrix: No\n");

    if (upper == 1)
        printf("Upper Triangular Matrix: Yes\n");
    else
        printf("Upper Triangular Matrix: No\n");

    return 0;
}
