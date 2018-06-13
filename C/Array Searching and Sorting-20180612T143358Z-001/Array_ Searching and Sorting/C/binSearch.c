#include<stdio.h>
#include<time.h>
#define SIZE 10
void main(int argc, char const *argv[])
{
    // Creating a list of array
    int series[SIZE];

    // Variables required
    int first = 0;    // Starting index value
    int last = SIZE - 1;    // Last index value
    int pos = -1;       // It will store the index of searched value
    int flag = 0;       // When the element is found flag value is changed, and we came out of loop.
    int middle;
    int value;
    printf("Enter elements of array...\n");     // Insert elements in array...
    for(int i=0; i<SIZE; i++)           //Remember the list must be sorted...
        scanf("%d",&series[i]);


    printf("Enter the value to be searched...\n");
    scanf("%d", &value);
    int time;
    while(first <= last && flag == 0)       // Loop until first <= last and flag is zero
    {
        middle = (first+last)/2;            // Taking the middle element
        if(series[middle] == value)     // If value is found at middle return its index
        {
            pos = middle;
            flag = 1;           // When value is found, flag becomes 1.
            break;
        }
        else{       
            if(series[middle] < value)      // If middle is less than value. Then the element next to middle becomes
                                            // the first element.
            {
                first = middle + 1;
            }
            else{
                last = middle - 1;      // If above is not the case last element becomes the preceeding value to middle.
            }
        }
    }
    if(flag == 1)
    {
        printf("The element is found at %d index", pos);
    }
    else
    {
        printf("Element not found in series.");
    }


}
