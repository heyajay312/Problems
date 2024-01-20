#include <stdio.h>

int find_Max(int nums[]);

int numSize; // Number of Values

int main(void)
{
    numSize = get_int("Enter the number of values to find the maximum: ");
    int numbers[numSize];

    // Get Numbers in an array 
    int j;
    for (j=0; j<numSize; j++)
    {
        numbers[j]=j+1;
    }

    int Maximum = find_Max(numbers);          // Maximum Value
    printf("The max value is %i\n", Maximum); // Print Maximum Value
}

int find_Max(int nums[])
{
    int max = 0;
    // TODO
    int i=0;
    while (i<numSize)
    {
        if (nums[i]>max)
        {
            max = nums[i];
        }
        i++;
    }

    return max;
}

