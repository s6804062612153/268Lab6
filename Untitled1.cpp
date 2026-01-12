#include <stdio.h>
int main()
{ int i,j,T[5][6];
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			if(i%2==0){
				T[i][j]= 0;
			}
			else{
				T[i][j]= 5;
			}
			}
		}
	printf("Result:\n");
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			printf("%d ",T[i][j]);
		}
		printf("\n");
	}
}
