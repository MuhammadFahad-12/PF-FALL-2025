#include <stdio.h>

int main()
{
int r,c;
   printf("Enter No of Rows:");
   scanf("%d",&r);
    printf("Enter No of Cols:");
   scanf("%d",&c);
   	int arr[r][c];
   	int transpose[c][r];
   	int i,j;
	for(i =0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	int k,l;
	for(k =0;k<c;k++){
		for(l=0;l<r;l++){
		  transpose[k][l] = arr[l][k];
		}
	}
	int m,n;
	for(m =0;m<c;m++){
		for(n=0;n<r;n++){
		  printf("%d ",transpose[m][n]);
		}
		printf("\n");
	}
	return 0;
}
