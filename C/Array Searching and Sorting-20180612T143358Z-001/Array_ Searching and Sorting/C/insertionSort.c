/*
Same as playing cards. The first element is considered to be sorted and
others are unsorted. While we traverse through the unsorted list we pick numbers one by one
if element is less than the element in sorted list. It is kept to the left else right.
*/

#include<stdio.h>
#define N 10
void main()
{
    int List[N],size,i,j,temp;
    printf("Enter the size of list...\n");
    scanf("%d", &size);
    printf("Enter the elements of list one by one...\n");
    for(i=0; i<size; i++)
        scanf("%d", &List[i]);
    
    // Sort the list using insertion sorting technique
    // We had considered that the first element is sorted. Therfore loop starts from 1.
    for(i=1; i<size; i++)
    {
        temp = List[i];
        j=i-1;
        while((temp<List[j]) && (j>=0))
        {
            List[j+1] = List[j];
            j = j-1;
        }
        List[j+1] = temp;
    }

    printf("The sorted list...\n");
    for(i=0; i<size; i++)
        printf("%d ", List[i]);
    
}