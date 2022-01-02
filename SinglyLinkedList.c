# include <stdio.h>
# include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void insertElement(int data){
    struct Node* newNode, *tempNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;
   
    if(head == NULL){
        head = newNode;
        printf("Element insterted(head)\n");
        return;
    }

    tempNode = head;

    while (tempNode->next != NULL)
    {
        tempNode = tempNode->next;
    }

    tempNode->next = newNode;
    
    printf("Element insterted\n");
}

void deleteElement(){
    struct Node* lastSecondNode = head;
    struct Node* lastNode = head->next->next;

    while (lastNode != NULL)
    {
        lastNode = lastNode->next;
        lastSecondNode = lastSecondNode->next;
    }

    lastSecondNode->next = NULL;
    
    printf("Element removed!\n");
    
}

void printList(){
    struct Node* temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main()
{
    insertElement(1);
    insertElement(2);
    printList();
    deleteElement();
    printList();
    insertElement(3);
    printList();
    return 0;
}
