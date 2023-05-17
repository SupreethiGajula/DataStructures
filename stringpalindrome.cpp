#include<stdio.h>
#include<string.h>
int main(){
	int n;
	char str[50] = "madam";
	int c=0;
	n=strlen(str);
	for(int i=0;i<n;i++){
          if(str[i]!=str[n-i-1]){
          	c++;
          	break;
          	
		  }
		
}
if(c!=0){
	printf("not a pal");
}
else{
	printf("is a pal");
}
	
}
