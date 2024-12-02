#include<stdio.h>
int main(){
int arr[4]={4,5,2,8};
for(int i =0;i<4;i++){
	for(int j=0;j<3-i;j++){
		
		if(arr[j]>arr[j+1]){
			int temp=arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
		}
	}
}
for(int i=0;i<4;i++){
	printf("%d \t",arr[i]);
}



return 0;

}

