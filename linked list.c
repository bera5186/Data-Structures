#include<stdio.h>
#include<stdlib.h>

struct node{
              int info ;
              struct node* next ;
           };


struct node* head ;
void create(int number);
void print(struct node* n);

int main(){

             create(10);
             printf("%d",head->info);
             //print(head);
             return 0 ;

          }

void create(int number){
                        struct node* head = ( struct node*)malloc(sizeof(struct node *)) ;
                        struct node* temp = head;
                        struct node* newnode ;
                        for(int i=1;i<=number;i++){
                                                      if(head = NULL){
                                                        printf("enter data for head node (node %d)",i);
                                                        scanf("%d",&head->info);
                                                        head -> next = NULL ;
                                                        printf("%d\n",temp->info);
                                                      }
                                                      struct node* newnode = (struct node*)malloc(sizeof(struct node)) ;
                                                      printf("Enter data for node %d  ",i);
                                                      scanf("%d",&newnode->info);
                                                      temp -> next = newnode;
                                                      newnode = temp ;

                                                    }
                                                    free(temp);
                                                    newnode -> next = NULL ;
                }
void print(struct node* n){
                          while(n != NULL)
                            printf("%d -> ",n -> info);
                            n = n -> next;
                        }
