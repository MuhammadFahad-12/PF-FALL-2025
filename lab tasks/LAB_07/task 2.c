#include<stdio.h>
int main()
{
	
	 int r1,c1,r2,c2;
 printf("Enter Rows of Matrix 1:");
 scanf("%d",&r1);
 printf("Enter Columns of Matrix 1:");
 scanf("%d",&c1);
  printf("Enter Rows of Matrix 2:");
 scanf("%d",&r2);
 printf("Enter Columns of Matrix 2:");
 scanf("%d",&c2);
 if(c1 == r2){
 	 int arr1[r1][c1];
     int arr2[r2][c2];
     int result[r1][c2];
     printf("Enter the Elements of Matrix 1:\n");
     for(int i=0;i<r1;i++){
     	for(int j=0;j<c1;j++){
     		scanf("%d",&arr1[i][j]);
		 }
	 }
	printf("Enter the Elements of Matrix 2:\n");
     for(int i=0;i<r2;i++){
     	for(int j=0;j<c2;j++){
     		scanf("%d",&arr2[i][j]);
		 }
	 }
	 
	 for(int i=0;i<r1;i++){
	 	for(int j=0;j<c2;j++){
	 		result[i][j] = 0;
	 		for(int k=0;k<c1;k++){
	 			result[i][j] += arr1[i][k] * arr2[k][j];
			 }
		 }
	 }
	 
	 	printf("Resultant Matrix:\n");
     for(int i=0;i<r1;i++){
     	for(int j=0;j<c2;j++){
     		printf("%d ",result[i][j]);
		 }
		 printf("\n");
	 }
	 
 }else{
 	printf("Invalid Matrices!!!");
 }
 
	
	return 0;
	
}
