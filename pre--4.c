/*out put 
----*
---**
--***
-****
*****

*/

#include<stdio.h>

void main(){
	
	int i,j,k;
	
	for(i=10;i>=6;i--){
	
		for(k=6; k<=i; k++){
			printf("-");
				
		}
		for(j=10;j>=i;j--){
	printf("*");
}
		printf("\n");
	}
}
