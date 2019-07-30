#include<stdio.h>
#include<stdlib.h>
int main()
{
    int key,size,j=0,k,cnt=0;
    printf("Enter the target: ");
    scanf("%d",&key);
    printf("Enter the size of array: ");
    scanf("%d",&size);
    k=size-1;
    int *arr=(int *)malloc(size*sizeof(int));
    for(int i=0;i<size;i++)
    {
        scanf("%d",arr+i);
    }
    while(j<k)
    {
        if(*(arr+j)+*(arr+k)>key)
            k--;
        else if(*(arr+j)+*(arr+k)<key)
            j++;
        else if(*(arr+j)+*(arr+k)==key)
        {
            printf("has");
            cnt=1;
            break;
        }
    }
    if(!cnt)
        printf("has not");
}

