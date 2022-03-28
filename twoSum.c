#include <stdio.h>
#include <stdlib.h>

void targetIndex(int *nums, int target);

int main (void){

    // get array size
    int size;

    printf("Array Size: ");
    fflush(stdout);
    scanf("%d", &size);
    printf("\n");


    // Allocate num values
    int nums[size];
    
    for (int i = 0; i < size; i++)
    {
        printf("nums[%i]: ", i);
        fflush(stdout);
        scanf("%d", &nums[i]);
    }
    printf("\n");

    // show given numbers
    printf("Input: nums = [");

    for (int i = 0; i < size; i++)
    {
        printf(" %d ", nums[i]);
    }
    printf("], ");


    // get target input
    int target;

    printf("target: ");
    fflush(stdout);
    scanf("%d", &target);

    printf("\n");
    

    // print the result
    targetIndex( nums, target );
    
}

void targetIndex(int *nums, int target){

    // instantiate a and b with no indices
    int a = -1, b = -1;

    // find two numbers equaling target
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (target - nums[i] == nums[j])
            {
                // replace a and b with matching indices
                a = j;
                b = i;
                break;
            }
            
        }
    }

    printf("Output: [%d, %d] \n", a, b);

}
