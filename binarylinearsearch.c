#include<stdio.h>
void linear();
void binary();
void linear()
{
    int a[10],i,n,flag=0,key;
    printf("enter the limit \n");
    scanf("%d",&n);
    printf("enter the elements \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("element to be searched \n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if (a[i]==key)
        printf("element found at position %d",i+1);
        flag=1;
    }
    if (flag==0)
    printf("Element not found");
}
 
void binary()
{
    int i,n,temp,j,a[10],start,mid,end,target=0,pos=0;
    printf("enter the limit:\n");
    scanf("%d",&n);
    printf("enter elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-(i+1);j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
        printf("sorted list in ascending order\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
        printf("\n Enter the target\n");
        scanf("%d",&target);
        printf("%d",target);
        start=0;
        end=n-1;
        while(start<=end)
        {
        	mid=(start+end)/2;
        	if (a[mid]==target)
        	{
        		pos=mid;
        		printf("element found at position %d", mid+1);
        		break;
			}
			else if(a[mid]<target)
			{
				start=mid+1;
			}
			else
			{
				end=mid-1;
			}
		
		if (pos==-1)
		{
			printf("Element not found");
			break;
		}
	}
}
    
void main()
{
    int n;
    printf("enter your choice: 1 linear search, 2 Binary search \n");
    scanf("%d",&n);
    switch (n)
	{
        case 1:
        linear();
        break;
        
        case 2:
        binary();
        break;
        
        default:
        printf("invalid choice");
        break;
    }
}
