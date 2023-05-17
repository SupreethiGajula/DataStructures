#include<stdio.h>
#include<stdlib.h>
struct pcb{
int pid,arrival,burst,turnaround;
};
void pline(int);
int main(){
int i,n,j;
float avg = 0.0,sum = 0.0;
struct pcb p[10],temp;
printf("enter the number of processes");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the arrival time and burst time for process %d",i+1);
scanf("%d %d",p[i].arrival,p[i].burst);
p[i].pid = i+1;
}
for(i=0;i<n;i++){
for(j=0;j<n-i-1;j++){
if(p[j].arrival > p[j+1].arrival){
temp=p[j];
p[j]=p[j+1];
p[j+1]=temp;
}
}
}
for(i=0;i<n;i++)
{
sum = sum + p[i].burst;
p[i].turnaround = sum;
}
sum = 0;
pline(44);
printf("%d\t%d\t%d\t%d\n",p[i].pid,p[i].arrival,p[i].burst,p[i].turnaround);
sum+=p[i].turnaround;
pline(44);
avg = sum/float(n);
printf("total turnaround time is .%f",sum);
printf("average turnaround time is .%3f",avg);
}
void pline(int x){
int i;
for(i=0;i<x;i++)
{
printf("__");
}
printf("\n");
}

