#include <cs50.h>
#include <stdio.h>

int find_Max(int nums[]);

int numSize; // Number of Values

int main(void)
{
    numSize = get_int("Enter the number of values to find the maximum: ");
    int numbers[numSize];

    // Get Numbers
    for (int i = 0; i < numSize; i++)
    {
        numbers[i] = get_int("Number %i: ", i + 1);
    }

    int Maximum = find_Max(numbers); // Maximum Value
    printf("%i\n", Maximum);         // Print Maximum Value
}

int find_Max(int nums[numSize])
{
    int max = 0;
    // TODO
    return max;
}
