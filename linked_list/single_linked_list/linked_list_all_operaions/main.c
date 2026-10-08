#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int data;
  struct node *link;
}list;
enum{
  success,
  failure
};
int insert_data_first(list **head,int data){

	list *new = malloc(sizeof(list));
	if(new == NULL){
	    return failure;
	}
	new->data =data;
	new->link = *head;
	
	
	    *head = new;
	    return success;
}

int insert_data_last(list **head,int data){
  list *new =malloc(sizeof(list));
  if(new == NULL){
    return failure;
  }
  new->data= data;
  new->link = NULL;
  if(*head == NULL){
    *head =new;
    return success;
  }

  list *temp = *head;
  while(temp->link != NULL){
    temp =temp->link;
  }
  temp->link = new;
  return success;

}
int delet_list(list **head,int data){
  if(head == NULL){
    return failure;
  }
  list *temp= *head;
  while(*head != NULL){
     temp  = *head;
    *head = (*head)->link;
    free(temp);
  }
  return success;

}
int delet_first(list**head){
  if(head == NULL){
    return failure;
  }
  list *temp =*head;
  *head= (*head)->link;
  return success;
}

void print_list(list *head){
  if(head == NULL){
    printf("List is empty\n");
  }else{
    while(head != NULL){
      printf("%d->",head->data);
      head =head->link;
    }
    printf("NULL\n");
  }
}

int main(){
    list *head = NULL;
    int choice;
      int data ;
      printf("1.Insert first\n2.Insert last\n3.Delete list\n4.Print list\n5.Delete first\n6.Exit\n");
    while (1){
      scanf("%d",&choice);
     
      switch (choice)
      {
      case 1:
        scanf("%d",&data);
        if(insert_data_first(&head,data) == failure){
          return -1;
        }else{
          puts("success");
        }
        break;

      case 2:
        scanf("%d",&data);
        if(insert_data_last(&head,data) ==failure){
          return -1;
        }else{
          puts("success");
        }
        break;

      case 3:
      if(delet_list(&head,data)== failure){
        return -1;
      }else{
        puts("delet Success");
      }
      break;

      case 4:
      print_list(head);
      break;

      case 5:
      if(delet_first(&head)== failure){
        return -1;
      }else{
        puts("success first node delet");
      }
      break;


      
      case 6:
      return 0;

      default:
      printf("Invalid choice\n");
        break;
      }

    } 


    return 0;
    
  }
    
   
    


   
    