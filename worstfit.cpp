#include<stdio.h>
int main(){
	int bno,pno,bsize[10],psize[10],i,j;
	int flag[10],allocation[10];
	for(i=0;i<10;i++)
	{
		flag[i]=0;
		allocation[i]=-1;
	}
	printf("enter the number of blocks:");
	scanf("%d",&bno);
	printf("enter the size of blocks");
	for(i=0;i<bno;i++){
			scanf("%d",&bsize[i]);
	}
	printf("enter the number of processes");
	scanf("%d",&pno);
	printf("enter the size of processes");
	for(i=0;i<pno;i++)
	{
		scanf("%d",&psize[i]);
	}
	for(i=0;i<pno;i++){
		int index=-1;
		for(j=0;j<bno;j++){
			if(flag[j]==0 && bsize[j]>=psize[i]){
				if (index == -1){
				index=j;
		}
			else if(bsize[j]>bsize[index]){
			index=j;
		}
		}
		}
		if(index!=-1){
					allocation[i]=index;
				flag[index]=1;
				 bsize[index] -= psize[i];
			}
}
	printf("\nProcess No.\tProcess Size\tBlock no.\n");
    for (int i = 0; i < pno; i++)
    {
        printf("%d \t\t\t %d \t\t\t", i+1, psize[i]);
        if (allocation[i] != -1)
            printf("%d\n",allocation[i] + 1);
        else
            printf("Not Allocated\n");
    }
}
