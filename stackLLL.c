#include<stdio.h>
#include<stdlib.h>
struct Node {
    int info;
    struct Node *next;
};
struct  Node *top = NULL;
void push();
void pop();
void display();
int main(){
int ch;
while(1){
    printf("\n 1. PUSH");
    printf("\n 2. POP");
    printf("\n 3. DISPLAY");
    printf("\n 4. EXIT ");
    printf("ENTER CHOICE");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1 : push();
    break;
    case 2 : pop();
    break;
    case 3 : display();
    break;
    case 4: exit(0);
    default: printf("entered wrong choice");
    }
}
}
    void push(){

    struct  Node *ptr;
    ptr =  (struct Node*)malloc(sizeof(struct Node));
    printf("enter the info part of ptr ");
    scanf("%d", &ptr->info);
    ptr->next = top;
    top = ptr;
}
void pop() {
    struct Node *ptr;
    if (top == NULL) {
        printf("underflow\n");
    } else {
        ptr = top;
        top = top->next;
        printf("Popped element: %d\n", ptr->info);
        free(ptr);
    }
}

void display() {
    struct Node *ptr;
        ptr = top;
        printf("Stack elements are:\n");
        while (ptr != NULL) {
            printf("%d\n", ptr->info);
            ptr = ptr->next;
     }
}