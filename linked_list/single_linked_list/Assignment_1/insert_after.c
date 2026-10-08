/*
insert after
   *head int gdata,int ndata

   1 check if list is empty
     if(*head == null){
     return list empty;
     }

     2 travers and check for data
      slist *temp = *head;
      while(temp != NULL){
        if(temp->data == gdata){
            1 allocate memory
            2 validate
            3 update data
            Slist *new = malloc(sizeof(Slist))
            if(new== null){
            return failure
            }
            new->data = ndata;
            new->link = temp->link;
            temp->link = new;
            return success;

        }
            temp = temp->link
      
      }

*/