#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};


int getDecimalValue(struct Node* head) {
    int num =0;
   int arr[50];
    int  i =0;
    while(head != NULL){
       num = (num * 2 )+head->data;
        head = head->link;
    }
   return num;
}


int main() {
    struct Node *head = NULL, *newNode;
    int n , i;
     scanf("%d",&n);
int num;
    for (i = 1; i <= n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d",&num);
        newNode->data = num;
        newNode->link = NULL;

        if (head == NULL) {
            head = newNode;   // first node only
        } else {
            static struct Node *last; // keeps track of last node
            if (last == NULL) last = head;
            last->link = newNode;     // attach new node
            last = newNode;           // move last forward
        }
    }


    int res = getDecimalValue(head);
    printf("value %d",res);
    printf("\n\n");
    // Print linked list
    newNode = head;
    while (newNode != NULL) {
        printf("%d -> ", newNode->data);
        newNode = newNode->link;
    }
    printf("NULL\n");

    return 0;
}
