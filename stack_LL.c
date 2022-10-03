#include<stdio.h>
#include<malloc.h>
struct node {
 int data;
 struct node *link;
};
struct node *start=NULL;
void Insert();
void Delete();
void Display();
int length();
void main()
{
 int ch;
 do
 {
 printf("\n\nMENU");
 printf("\n1 Insert\n2 Delete\n3 Display\n4 Exit");
 printf("\nChoice ? ");
 scanf("%d",&ch);


 switch(ch)
 {
 case 1: push(); break;
 case 2: pop(); break;
 case 3: Display(); break;
 case 4: break;
 default : printf("\nWrong Choice ");
 }
 }while(ch!=5);
 printf("\nThank You ");
} // end of main



int length()
{
 int c=0;
 struct node *p=start;
 while(p!=NULL)
 {
 c++;
 p=p->link;
 }
 return c;
}


void Display()
{
 struct node *p;
 if(start==NULL)
 printf("\nEmpty");


 else
 {
 printf("\n Stack List is \n TOP >>>");
 p=start;
 while(p!=NULL)
 {
 printf("%d\n",p->data);
 p=p->link;
 }
 }
}

void push() // push function
{
 struct node *p,*n;
 int i,pos;
 printf("\nEnter position where you want to insert the number ");
 scanf("%d",&pos);
 if(pos<=length()+1)
 {
 n=(struct node *)malloc(sizeof(struct node));
 printf("\nEnter number ");
 scanf("%d",&n->data);
 if(pos==1)
 {
 n->link=start;
 start=n;
 }
 else
 {
 p=start;
 for(i=1;i<pos-1;i++)
 p=p->link;
 n->link=p->link;
 p->link=n;
 }
 printf("\n%d is inserted at %d position ",n->data,pos);
 }


 else
 printf("\nInvalid position");
}


void pop()
{
 struct node *p,*n;
 int pos,i;
 if(start==NULL)
 printf("\nUNDERFLOW");
 else
 {
 printf("\nEnter the position from where you want to delete the number ");
 scanf("%d",&pos);
 if(pos<=length())
 {
 if(pos==1)
 {
 n=start;
 start=start->link;
 printf("\n%d is deleted from %d position", n->data,pos);
 free(n);
 }
 else
 {
 p=start;
 for(i=1;i<pos-1;i++)
 p=p->link;
 n= p->link;


 p->link = n->link;
 printf("\n%d is deleted from %d position", n->data,pos);
 free(n);
 }
 }
 else
 printf("\nInvalid position");
 }
} //end of Delete
