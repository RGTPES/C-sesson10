#include<stdio.h>
int main(){
int arr[4]={9,2,3,6};
for(int i =0;i<4;i++){
	int min=i;
	for(int j =i+1;j<4;j++){
		if(arr[j]<arr[min]){
			min=j;
		}
	}if(min!=i){
			int temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		
		}
	
	}
for(int i =0;i<4;i++){
		printf("%d \t",arr[i]);}



return 0;

}

