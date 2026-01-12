#include <stdio.h>
int main()
{ int n,b,i,j;
	scanf("%d %d",&n,&b);
	int T[n][b];
	for(i=0;i<n;i++){
		for(j=0;j<b;j++){
			scanf("%d",&T[i][j]);
			}
		}
	for(i=0;i<n;i++){
		for(j=0;j<b;j++){
			T[i][j]=T[i][j]+1;
			}
		}
	printf("Result:\n");
	for(i=0;i<n;i++){
		for(j=0;j<b;j++){
			printf("%d ",T[i][j]);
		}
		printf("\n");
	}
}
