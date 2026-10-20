#include <stdio.h>
int main()
{
    int marks[4][2];
    int i, j, tot;
    int mid_h, mid_l, f_high, f_low;
    int ov_high, ov_low;
    int sum_mid = 0, sum_final = 0;

    for (i = 0; i < 4; i++)
    {
        printf("Enter Mid marks of student %d: ", i + 1);
        scanf("%d", &marks[i][0]);

        printf("Enter Final marks of student %d: ", i + 1);
        scanf("%d", &marks[i][1]);
    }

    mid_h = marks[0][0];
    mid_l = marks[0][0];

    f_high = marks[0][1];
    f_low = marks[0][1];

    ov_high = marks[0][0];
    ov_low = marks[0][0];

    for (i = 0; i < 4; i++)
    {
        tot = marks[i][0] + marks[i][1];

        printf("Total marks of student %d = %d\n", i + 1, tot);

        sum_mid = sum_mid + marks[i][0];
        sum_final = sum_final + marks[i][1];

        if (marks[i][0] > mid_h)
        {
            mid_h = marks[i][0];
        }

        if (marks[i][0] < mid_l)
        {
            mid_l = marks[i][0];
        }

        if (marks[i][1] > f_high)
        {
            f_high = marks[i][1];
        }

        if (marks[i][1] < f_low)
        {
            f_low = marks[i][1];
        }

        for (j = 0; j < 2; j++)
        {
            if (marks[i][j] > ov_high)
            {
                ov_high = marks[i][j];
            }

            if (marks[i][j] < ov_low)
            {
                ov_low = marks[i][j];
            }
        }
    }

    printf("\nHighest Mid marks = %d\n", mid_h);
    printf("Lowest Mid marks = %d\n", mid_l);

    printf("Highest Final marks = %d\n", f_high);
    printf("Lowest Final marks = %d\n", f_low);

    printf("Highest overall marks = %d\n", ov_high);
    printf("Lowest overall marks = %d\n", ov_low);

    printf("Average Mid marks = %.2f\n", sum_mid / 4.0);
    printf("Average Final marks = %.2f\n", sum_final / 4.0);

    return 0;
}
