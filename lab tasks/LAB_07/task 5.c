#include <stdio.h>

int main()
{
   int r,c,i,j,k,l,max=0;
   printf("Find Maximum Element Of Matrix!!!\n");
   printf("Enter No of Rows:");
   scanf("%d",&r);
    printf("Enter No of Cols:");
   scanf("%d",&c);
   
   	int arr[r][c];
	for(i =0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
			if(arr[i][j]>max) max = arr[i][j];
		}
	}
	
	printf("\nEntered Matrix\n");
	for(k =0;k<r;k++){
		for(l=0;l<c;l++){
		   printf("%d ",arr[k][l]);
		}
		printf("\n");
	}
	
	printf("\nThe Maximum Element of the given Matrix is %d",max);
	return 0;
}
