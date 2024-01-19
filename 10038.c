#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int sequence[3000];
    int differences[3000];

    while (scanf("%d", &n) == 1)
    {
        // Read the sequence
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &sequence[i]);
        }

        // Calculate the absolute differences between consecutive elements
        for (int i = 1; i < n; i++)
        {
            differences[i - 1] = abs(sequence[i] - sequence[i - 1]);
        }

        // Initialize an array to keep track of the presence of differences
        int present[3000] = {0};

        // Check if the differences form a Jolly Jumper sequence
        int isJolly = 1;
        for (int i = 0; i < n - 1; i++)
        {
            int diff = differences[i];
            if (diff >= 1 && diff <= n - 1 && !present[diff])
            {
                present[diff] = 1;
            }
            else
            {
                isJolly = 0;
                break;
            }
        }

        // Print the result for the current sequence
        if (isJolly)
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }
    }

    return 0;
}