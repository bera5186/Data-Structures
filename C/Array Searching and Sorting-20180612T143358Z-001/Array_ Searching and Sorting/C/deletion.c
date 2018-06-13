#include<stdio.h>
#define N 20
void main()
{
    int List[N];
    int Loc, i, M, back;
    printf("enter the size of array:\n");
    scanf("%d", &M);
    printf("Enter elements one by one:\n");
    for(i=0; i<M; i++)
    {
        scanf("%d", &List[i]);
    }
    printf("Enter location from where the deletion is required:\n");
    scanf("%d", &Loc);
    if(Loc > M)
        printf("Deletion not possible.");
    else{
        back = Loc;
        while(back < M)
        {
            List[back] = List[back + 1];
            back++;
        }
        M = M -1;
    }
    printf("the final result is:\n");
    for(i=0; i<M; i++)
        printf("%d", List[i]);
}