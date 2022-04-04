#include<stdio.h>
#include<stdlib.h>
typedef struct node* lstptr;
struct node
{
int data;
lstptr link;
};
lstptr first=NULL;

lstptr getnode()
{
lstptr ptr;
ptr=(lstptr) malloc(sizeof(struct node));
}


void insertbegin(int ele)
{
lstptr new;
new=getnode();
new->data=ele;
new->link=NULL;
if(first!=NULL)
{
new->link=first;
}

first=new;

}

void insertend(int ele)
{
lstptr new,temp;
new=getnode();
new->data=ele;
new->link=NULL;
if(first!==NULL)
{
temp=first;
while(temp->link!=NULL)
temp=temp->link;
temp->link=new;
}
else
first=new;
}

void display()
{
lstptr temp;
if(first==NULL)
{
printf("\nList is Empty");
exit(0);
}
temp=first;
while(temp->link!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
printf("%d\t",temp->data);


}

void deletebegin()
{
lstptr temp;
if(first==NULL)
{
printf("list is emplty");
exit(0);
}
temp=first;
first=first->link;
free(temp);
}


void deleteend()
{
lstptr temp,prev;
temp=first=prev;
if(first==NULL)
{
printf("list is emplty");
}
else if(first->link==NULL)
first=NULL;
else
{
while(temp->link!=NULL)
{
prev=temp;
temp=temp->link;
}
prev->link=NULL;
}
free(temp);
}

void main()
{
int op=1,ch,ele;
while(op)
{
printf("\n 1.INSERT BEGIN \n 2.INSERT END\n 3.DELETE BEGIN \n 4.DELETE END\n5.Display");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1 :printf("\nEnter the element:");
	scanf("%d",&ele);
	insertbegin(ele);
	break;

case 2: printf("\nEnter the element:");
	scanf("%d",&ele);
	insertend(ele);
	break;

case 3: deletebegin();
	break;
case 4: deleteend();
	break;
case 5: display();
	break;
}
printf("\nDo you want to continue?(0/1)");
scanf("%d",&op);
}
}
