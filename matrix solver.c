#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("How many veriable does the matrix have?");
	scanf("%d",&a);
	
	
	float x[a][a+1];
	float atama[a+1];
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<a+1;j++){
			printf("[%d][%d]:",i,j);
			scanf("%f",&x[i][j]);
		}
	}
	int k;
	int z;
	float m;
	float c;
	for(i=0;i<a;i++){
		if(x[i][0]==0){
			for(k=i+1;k<a;k++){
			
			if(x[k][0]!=0){
				for(j=0;j<a+1;j++){
					atama[j]=x[i][j];
					x[i][j]=x[k][j];
					x[k][j]=atama[j];
				}
				break;
			}
			else
			continue;
		}
		}
	}
	printf("\nOriginal matrix:\n");
	for(i=0;i<a;i++){
		for(j=0;j<a+1;j++){
			printf(" %.3f  ",x[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	
	printf("Gauss-Jordan elimination:\n");
	for(z=0;z<a;z++){
		m=x[z][z];                                            
		
			for(i=z;i<z+1;i++){
		for(j=0;j<a+1;j++){
			x[i][j]=x[i][j]/m;
		}
	}
	
	
	for(k=0;k<a;k++){
		
		if(k!=z){
		c=x[k][z];
		
		for(i=k;i<k+1;i++){
		for(j=0;j<a+1;j++){
			x[i][j]=x[i][j]-c*x[z][j];
		}
	}
}
		
	}
}





for(i=0;i<a;i++){
		for(j=0;j<a+1;j++){
			printf(" %.3f  ",x[i][j]);
			
		}
		printf("\n");
	}
	
	/*
	for(i=0;i<a;i++){
		for(j=a;j<a+1;j++){
			printf(" %.2f\n",x[i][j]);
		}
	}
*/
	
	
	
	
	
	
	

	return 0;
}
