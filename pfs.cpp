#include<stdio.h>
int main(){
	int bt[10],wt[10],tat[10],total = 0,temp,pr[10],p[10],pos,avg_wt,avg_tat,n,i,j;
	printf("enter the number of processes");
	scanf("%d",&n);
	printf("enter the burst time and priority of processes");
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&bt[i],&pr[i]);
		p[i] = i+1;
	}
	//sorting burst time process id and priority
	for(i=0;i<n;i++){
		pos = i;
		for(j=i+1;j<n;j++){
			if(pr[j]<pr[pos])
			pos = j;
		}
		temp = pr[i];
		pr[i] = pr[pos];
		pr[pos] = temp;
		temp = bt[i];
		bt[i] = bt[pos];
		bt[pos] = temp;
		temp = p[i];
		p[i] = p[pos];
		p[pos] = temp;
	}
	wt[0] = 0;//initially waiting time is 0
	for(i=1;i<n;i++)
	{
		wt[i] = 0;
		for(j = 0;j<i;j++)
		wt[i] = wt[i]+bt[j];
	total = total+wt[i];
	}
	avg_wt = total/n;
	total = 0;
	printf("\nprocess\tburst time\twaiting time\tturnaround time");
	for(i = 0;i<n;i++){
		tat[i] = wt[i]+bt[i];
		total = total+tat[i];
		printf("\np[%d]\t\t %d\t\t %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
	}
	avg_tat = total/n;
	printf("average waiting timw is %d",avg_wt);
	printf("average turnaround time is %d",avg_tat);
	return 0;
}
