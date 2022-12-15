#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
int q[10],max;
static int front=-1,rear=-1;
int main()
{          int i;
	int ch;
	front=rear=-1;
	printf("Enter the size of the queue");
	scanf("%d",&max);
	while(1)
	{          printf("\n1.ENQUEUE");
		printf("\n2.DEQUEUE");
		printf("\n3.DISPLAY");
		printf("\n4.EXIT");
		printf("\nEnter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{          case 1:enqueue();
				break;
			case 2:dequeue();
				break;
			case 3:display();
				break;
			case 4:exit(0);
			default:
				printf("INVALID CHOICE");
		}
	}
	return 0;
}
void enqueue()
{          int item;
	if(rear==max-1)
	{      printf("Queue is full");
	}
		else
		{       if(front=-1)
			{       front=0;
			}
			printf("Enter the item to be inserted");
			scanf("%d",&item);
			rear++;
			q[rear]=item;
		}
}
void dequeue()
{         if(front==-1)
	{         printf("Queue is empty");
	}
	else
	{          printf("%d is removed from the queue\n",q[front]);
		if(front==rear)
		{          rear=-1;
			front=-1;	
		}
		else
		{          front=front+1;
		}
           }
}

void display()
{          int i;
	if(front==-1)
	{         printf("Queue is empty\n");
	}
	else
	{          printf("\n Elements of the queue are:\n");
		for(i=front;i<=rear;i++)
		{        printf("%d \n",q[i]);
		}
	}
}
