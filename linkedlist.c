#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
tydef struct node NODE;
NODE *head=NULL,*tail=NULL,*temp=NULL;
NODE* createnode(){
	NODE *new;
	new = (NODE *)malloc(sizeof(NODE));
	return new;
} 
int main(){
	int n;
	NODE *nn;
	while(1){
		if(head==NULL){
			nn = createnode();
			printf("enter a number:");
			scanf("%d",&n);
			nn->next=NULL;
			nn->data=n;
			tail=head;
		}
		else{
			nn = createnode();
			printf("enter a number:");
			scanf("%d",&n);
			nn->data=n;
			nn->next=NULL;
			tail->next=nn;
			tail=nn;
		}
		printf("If you want to add press-1,press-0:to exit:");
		int opt;
		scanf("%d",&opt);
		if(opt==0){
			break;
		}
	}

	printf("/nThe elements present in linked list are:");
	temp=head;
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	return 0;
}