#include <stdio.h>

int find_Max(int nums[]);

int numSize; // Number of Values

int main(void)
{
    numSize = get_int("Enter the number of values to find the maximum: ");
    int numbers[numSize];

    // Get Numbers in an array 
    TODO

    int Maximum = find_Max(numbers);          // Maximum Value
    printf("The max value is %i\n", Maximum); // Print Maximum Value
}

int find_Max(int nums[])
{
    int max = 0;
    // TODO

    return max;
}

