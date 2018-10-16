#include <stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node Node;

Node *head = NULL;
Node *last = NULL;

void insertbeg (int n);
void insertend (int n);

void deletebeg (void);
void deleteend (void);

void display(Node *n);

int main(){
    int ch,n;
    int choice = 'y';

    printf("1. Insert at beg \n 2. insert at end \n 3. del at beg \n 4. del at end \n 5. display \n");
    scanf("%d",&ch);
    do{
        switch(ch){
            case 1: scanf("%d",&n);
                    insertbeg(n);
                    break;
            case 2: scanf("%d",&n);
                    insertend(n);
                    break;
            case 3: deletebeg();
                    break;
            case 4: deleteend();
                    break;
            case 5: display(head);
                    break;
            default : printf("^_^");
        }
        fflush(stdin);
        printf("\nAgain ... ?");
        scanf("%c",&choice);
    }while((choice == 'y') || (choice == 'Y'));
}

void insertbeg (int n){
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = n;

    if(head == NULL){
        ptr->next = NULL;
        head = ptr;
    }
    else{
        Node *cptr = head;
        ptr->next = cptr;
        head = ptr;
    }
}


void insertend (int n ){
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = n;
    

    if(head == NULL){
        head = last = ptr;
        ptr->next = NULL;
    }
    else{
        last->next = ptr;
        ptr->next = NULL;
        last = ptr;
    }
}

void deletebeg(void){
    if(head == NULL){
        printf("\n Nothing to delete");
    }
    else{
        Node *cptr = head;
        head = head->next;
        printf("\n Deleted : %d",cptr->data);
        free(cptr);

    }
}

void deleteend(void){
    if(head == NULL){
        printf("\n Nothing to delete ");
    }
    else{
        Node *cptr = head;
        Node *ptr = head;
        while(cptr != last){
            ptr = cptr;
            cptr = cptr->next;
        }
        last = ptr;
        printf("\n Deleted : %d",cptr->data);
        free(cptr);
        
    }
}

void display(Node *n){
    if(n == NULL){
        printf("\n Nothing to show");
    }
    else{
        while(n->next != NULL){
            printf("%d",n->data);
            n = n->next;
        }
        printf("%d",n->data);
    }
}