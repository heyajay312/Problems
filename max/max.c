#include <stdio.h>

int find_Max(int nums[]);

int numSize; // Number of Values

int main(void)
{
    printf("Enter the number of values to find the maximum: ");
    scanf("%i", &numSize);
    int number[numSize];

    // Get Numbers in number array
    // TODO

    int Maximum = find_Max(number);           // Maximum Value
    printf("The max value is %i\n", Maximum); // Print Maximum Value
}

int find_Max(int nums[])
{
    int max = 0;
    // TODO

    return max;
}
