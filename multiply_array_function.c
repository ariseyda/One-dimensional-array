#include<stdio.h>

//Fonksiyonlara parametre olarak tek boyutlu array gönderme.
//Send a one-dimensional array as a parameter to the function.


int multiply(int array2[],int size);
//You don't have to write all the functions at the top of the main. Just specify it at the top.

int main(){
	
	int array1[5];
	int i;
	
	for(i=0;i<5;i++){
		scanf("%d",&array1[i]);
	}
	
	printf("Result:%d",multiply(array1,5));
	

	
	return 0;
}

int multiply(int array2[],int size){
	
	int mltply=1;
	int i;
	
	for(i=0;i<size;i++){
		
		mltply*=array2[i];
	}
	
	return(mltply);
	
}
