#include<stdio.h>
#define N 20
void mergeSort(int List[],int lb, int ub);
void merge(int List[], int lb, int mid, int ub);
void main()
{
    int List[N];
    int i,size,mid;
    printf("Enter the size of list\n");
    scanf("%d", &size);
    printf("Enter the elements one by one...\n");
    for(i=0; i<size; i++)
        scanf("%d", &List[i]);
    // Sort the list by merge sort.
    mergeSort(List, 0, size-1);
    printf("The sorted list is\n");
    for(i=0; i<size; i++)
        printf("%d ", List[i]);
}

void mergeSort(int List[], int lb, int ub)
{
    int mid;
    if(lb<ub)
    {
        mid = (lb+ub)/2;
        mergeSort(List, lb, mid);
        mergeSort(List, mid+1, ub);
        merge(List, lb, mid+1, ub);
    }
}

void merge(int List[], int lb, int mid, int ub)
{
    int mergeList[20];
    int ptr1, ptr2, ptr3;
    int i;
    ptr1 = lb;
    ptr2 = mid;
    ptr3 = lb;
    while((ptr1 < mid) && (ptr2 <= ub))
    {
        if(List[ptr1] <= List[ptr2])
        {
            mergeList[ptr3] = List[ptr1];
            ptr1++;
            ptr3++;
        }
        else{
            mergeList[ptr3] = List[ptr2];
            ptr2++;
            ptr3++;
        }
    }

    while(ptr1 < mid){
        mergeList[ptr3] = List[ptr1];
        ptr1++;
        ptr3++;
    }
    while(ptr2 <= ub)
    {
        mergeList[ptr3] = List[ptr2];
        ptr2++;
        ptr3++;
    }
    for(i=lb; i<ptr3; i++)
    {
        List[i] = mergeList[i];
    }
}