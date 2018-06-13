// WAP to insert a element in given array
/*
Algorithm insertArray()
{
    Step
    1. if(M < N) then Back = M + 1;
        else
            STOP;
    2. while( Back > I);
        {
            2.1 charList[Back] = charList[Back - 1];
            2.2 Back = Back - 1;
        }
    3. charList[I] = val;
    4. M = M + 1;
}
*/

#include<stdio.h>
#define N 20
void main()
{
    int List[N];
    int key;
    int Loc;
    int i, M;
    int back;
    printf("\n Enter the size of the list (<20)");
    scanf("%d", &M);
    printf("Enter the list one by one\n");
    for(i = 0; i < M; i++)
    {
        scanf("%d", &List[i]);
    }
    printf("\n Enter the key and location of relative to zero index\n");
    scanf("%d%d", &key, &Loc);
    // Insert the key at loc in list
    if(Loc > M + 1)
        printf("\n Insertion not possible.\n");
    else
    {
        back = M + 1;
        while(back > Loc)
        {
            List[back] = List[back - 1];
            back--;
        }
        // Inserting key
        List[back] = key;
        M = M + 1;
    }
        printf("Final lists is:\n");
        for(i=0; i < M; i++)
            printf("%d", List[i]);
}