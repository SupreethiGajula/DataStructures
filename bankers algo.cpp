#include<stdio.h>
int main(){
	int np,p[100],max[100][100],all[10][10],need[100][100],avail[100],i,j,nr=3,ans[100],index=0,finish[10];
	printf("enter the number of processes");
	scanf("%d",&np);
		printf("enter the allocated items");
		for(i=0;i<np;i++){
			for(j=0;j<nr;j++){
				scanf("%d",&all[i][j]);
			}
			
		}
		printf("enter the available resources");
		for(i=0;i<nr;i++){
			scanf("%d",&avail[i]);
		}
		printf("enter the max items");
		for(i=0;i<np;i++){
			for(j=0;j<nr;j++){
				scanf("%d",&max[i][j]);
			}
			
		}
			for(i=0;i<np;i++){
			for(j=0;j<nr;j++){
				need[i][j]=max[i][j]-all[i][j];
			}
			
		}
		
		for(i=0;i<np;i++){
			finish[i]=0;
		}
		for(i=0;i<np;i++){
			for(j=0;j<nr;j++){
				if(finish[i]=0){
					if(need[i][j]<=avail[j])
					avail[j]+=all[i][j];
					finish[i]=1;
					ans[index++]=i;
				}
			}
	}
	 for(int i=0;i<np;i++)
    {
      if(finish[i]==0)
      {
         printf("The following system is not safe");
        break;
      }
    }
     
      if(finish[i]==1)
    {
      printf("Following is the SAFE Sequence\n");
      for (i = 0; i < np - 1; i++){
        printf(" P%d ->", ans[i]);
      printf(" P%d", ans[np - 1]);
    }
	}
}

	
