#include<stdio.h>
int main(){
int arr[4]={4,6,2,8};
for(int i =1;i<4;i++){
	int key =arr[i];
	int j =i-1;
       	while(j>=0 && arr[j]>key){
		arr[j+1]=arr[j];
		j--;
		printf("%d",j);


	}arr[j+1]=key;
}
for(int i =0;i<4;i++){
	printf("%d \t",arr[i]);
}


return 0;

}

