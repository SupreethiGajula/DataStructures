#include<stdio.h>
int main()
{
	int at[20],bt[20],tat[20],i,j,n,remain,rt[20],time_qua,time,wait=0,turnaround=0;
	printf("enter the total number of processes:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the arrival time and burst time for process");
		scanf("%d %d",&at[i],&bt[i]);
		rt[i]=bt[i];
	}
	printf("enter the time quantum");
	scanf("%d",&time_qua);
	printf("\n\nprocess\t|turnaround time|waiting time\n\n");
	for(time=0;i=0;remain!=0);
	{
		if(rt[i]<=time_qua && rt[i]>0){
			time+=rt[i];
			rt[i]=0;
		}
		else if(rt[i]>0){
			rt[i]=rt[i]-time_qua;
			time = time+time_qua;
		}
		else if(rt[i]==0){
			remain--;
		}
		printf("p[%d]\t|\t%d\t|\t%d\n",i+1,time-at[i],time-at[i]-bt[i]);
		wait+=time-at[i]-bt[i];
		turnaround+=time-at[i];
	}
	if(i==n-1)
	i=0;
	else if(at[i+1]<=time )
	i++;
	else
	i=0;

}
