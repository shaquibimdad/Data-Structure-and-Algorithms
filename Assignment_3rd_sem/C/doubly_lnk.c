#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
  struct node *prev;
};
struct node *start=NULL;

void insertAtbegin(){
  struct node *newnode;
  newnode=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter data-");
  scanf("%d",&newnode->data);
  newnode->next=NULL;
  newnode->prev=NULL;
  if(start==NULL){
    start=newnode;
  }
  else{
    start->prev=newnode;
    newnode->next=start;
    start=newnode;
  }
}

void insertAtend(){
  struct node *newnode,*temp;
  newnode=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter data-");
  scanf("%d",&newnode->data);
  newnode->next=NULL;
  newnode->prev=NULL;
  temp=start;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  newnode->prev=temp;
}


void create(){
  struct node *newnode,*temp;
  char c='y';
  while((c=='y')||(c=='Y')){
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->prev=NULL;
    if(start==NULL){
      insertAtbegin();  
    }
    else{
      insertAtend();
    }
    printf("\nDo you want to continue-");
    scanf(" %c",&c);
  }
}

void insertatpos(){
  struct node *temp;
  int i=1,pos,cnt=0,c;
  printf("\nEnter position-");
  scanf("%d",&pos);
  temp=start;
  while(temp!=NULL){
    temp=temp->next;
    cnt++;
  }
  c=cnt+1;
  if(pos>c){
    printf("\nInvalid position");
  }
  else if(pos==1){
    insertAtbegin();
  }
  else if(pos==c){
    insertAtend();
  }
  else{
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter data-");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    temp=start;
    while(i<pos-1){
      temp=temp->next;
      i++;
    }
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
    newnode->next->prev=newnode;
  }
}

void insertaftergivenVal(){
  struct node *newnode,*temp;
  int key;
  newnode=(struct node *)malloc(sizeof(struct node));
  newnode->next=NULL;
  newnode->prev=NULL;
  printf("\nEnter element after which you want to insert-");
  scanf("%d",&key);  
  temp=start;
  while(temp!=NULL){
    if(key==temp->data){
      if(temp->next==NULL){
        insertAtend();
      }
      else{
      printf("\nEnter data-");
      scanf("%d",&newnode->data);
      newnode->next=temp->next;
      newnode->prev=temp;
      temp->next->prev=newnode;
      temp->next=newnode;}
      break;  
    }
    temp=temp->next;
  }
  if(temp==NULL){
    printf("Not Found!");
  }
}

void display(){
  struct node *temp;
  if(start==NULL){
    printf("\nEmpty");
  }
  else{
    temp=start;
    while(temp!=NULL){
      printf("%d<--->",temp->data);
      temp=temp->next;
    }
    printf("NULL\n");
  }
}

void deletebegin(){
  struct node *temp;
  if(start==NULL){
    printf("/nList is empty");
  }
  else{
    temp=start;
    start=start->next;
    start->prev=NULL;
    free(temp);
  }
}

void deleteEnd(){
  struct node *temp;
  temp=start;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  if(temp==NULL){
    printf("\nEmpty");
  }  
  else{
    temp->prev->next=NULL;
    free(temp);
  }
}

void deleteatpos(){
  int pos,i=1,cnt=0;
  struct node *temp;
  temp=start;
  while(temp!=NULL){
    temp=temp->next;
    cnt++;
  }
  printf("\nEnter position : ");
    scanf("%d", &pos);
  if(pos>cnt){
    printf("\nInvalid");
  }
  else if(start==NULL){
    printf("\nList is Empty");
  }
  else if(pos==1){
    deletebegin();
  }
  else if(pos==cnt){
    deleteEnd();
  }
  else{
    temp=start;
    while(i<pos){
      temp=temp->next;
      i++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
      temp->next->prev=temp->prev;
    free(temp);
    }
    
  }
}

void delete_val(){
  struct node *temp,*n;
  int key;
  n=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter the element after which you want to delete-");
  scanf("%d",&key);
  
  temp=start;
  while(temp!=NULL){
    if(key==temp->data){
      if(temp->next->next!=NULL){
        n=temp->next;
        temp->next=n->next;
        n->next->prev=temp;
        free(n);
      }
      else{
        n=temp->next;
        temp->next=NULL;
        free(n);
      }
      break;  
    }
    temp=temp->next;
  }
  if(temp==NULL){
    printf("Not Found!");
  }
}

void reverse(){
  struct node *temp,*current;
    current=start;
    while(current!=NULL){
      temp=current->prev;
      current->prev=current->next;
      current->next=temp;
      current=current->prev;
    }
    if(temp!=NULL){
      start=temp->prev;
    }    
  }

int main(){
  int ch;
while(1){
    printf("\nEnter your choice-\n1.Create\n2.At end \n3.At begin \n4.Display \n5.After a given value \n6.After given position \n7.Delete from start \n8.Delete from end \n9.Delete after any given value \n10.Delete at any given position \n11.Reverse \n12.Exit!");
    scanf("%d",&ch);
    switch(ch){
      case 1:printf("\nFirst create a list-");
          create();
          break;
      case 2:
        printf("\nInsert at end");
        insertAtend();
        break;
      case 3:
        printf("\nInsert at begin");
        insertAtbegin();
        break;
      case 4:
        printf("\nDisplay");
        display();
        break;
      case 5:
        printf("\nEnter any value after which you want to insert");
        insertaftergivenVal();
        break;
      case 6:
        printf("\nEnter after any position-");
        insertatpos();
        break;
      case 7:
        printf("\nDelete from beginning-");
        deletebegin();
        break;
      case 8:
        printf("\nDelete from end-");
        deleteEnd();
        break;
      case 9:
        printf("\nDelete after any given value-");
        delete_val();
        break;
      case 10:
        printf("\nDelete after any given position-");
        deleteatpos();
        break;
      case 11:
        printf("\nTo reverse the list-");
        reverse();
        break;
      case 12:
        exit(0);
      default:
        printf("\nWrong choice");
    }
  }
  
  
  return 0;
  
}