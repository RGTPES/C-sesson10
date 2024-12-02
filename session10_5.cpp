#include<stdio.h>
int main(){
	int check,flag=-1;
int arr[]={7,4,5,3,2,1,6};
int start =0;
int end =sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<end;i++){
	for(int j=0;j<end-1-i;j++){
		if(arr[j]>arr[j+1]){
			int temp=arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
		}
	}
}

printf("nhap vao so de kiem tra : ");
scanf("%d",&check);
while(start<=end){
	int mid=(start + end)/2;
	if(arr[mid] == check){
		printf("so can tim nam ow vi tri %d",mid);
		break;
	}else if(arr[mid] > check){
	end = mid-1;
}else  {

	start= mid+ 1;

}
	
printf("ko tim thay phan tu trong mang");

return 0;

}
}

