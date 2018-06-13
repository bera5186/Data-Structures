#include<stdio.h>
#define SIZE 4     //Define size of array
int main(int argc, char const *argv[])
{
    int list[SIZE],i;
    // Now we need to searh for a particular item from list. Initialize a variable item.
    int item;
    // To return the value of index at which item is located.
    int pos;

    // Taking input in array.
    for(i = 0; i < SIZE; i++)
    {   
        scanf("%d", &list[i]);
    }

    printf("Enter element to be searched :");
    scanf("%d", &item);

    // Traversing array to find the location of ITEM.
    for(i=0; i< SIZE; i++)
    {
        // While traversing if the element is equal to item. Store its index in pos. And break out of loop.
        if(list[i] == item)
        {
            pos = i;
            break;
        }
    }
    printf("The element was found at location %d index.", pos);

    return 0;
}
