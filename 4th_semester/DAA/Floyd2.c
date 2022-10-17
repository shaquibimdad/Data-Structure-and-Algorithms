#include<stdio.h>
#include<stdlib.h>
#define inf 9999
int min( int a ,int b){
	return (a>b)?b:a;
	/*will use for calculating min cost*/
}
int path(int** d,int n){
	/*shortest path calculation*/
	int i,j,k;
	for(k=0;k<n;k++){
		printf("\nIntermidiate matrix A%d: \n",k+1);
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
				printf("%d\t",d[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
int main(){
	int **a,**d,n,i,j;
	printf("Enter no of vertices: ");
	scanf("%d",&n);
	a=(int**)malloc(n*sizeof(int*));
	d=(int**)malloc(n*sizeof(int*));
	for(i=0;i<n;i++){
		a[i]=(int*)malloc(n*sizeof(int));
		d[i]=(int*)malloc(n*sizeof(int));
	}
	printf("Enter the cost matrix: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(i!=j && a[i][j]==0)
			a[i][j]=inf;
			d[i][j]=a[i][j];//initializing distance matrix with cost matrix
		}
	}
	path(d,n);
	printf("Final distance matrix: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d  ",d[i][j]);
			
		}
		printf("\n");
	}
}
