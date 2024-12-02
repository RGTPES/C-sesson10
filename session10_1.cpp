#include<stdio.h>
int main(){
	int ans;
int arr[4]={3,2,5,7};
printf("nhap so can kiem tra\n");

scanf("%d",&ans);


for(int i=0;i<4;i++){
	if(ans==arr[i]){
		printf("o vi tri thu %d",i+1);
		break;	
	}else if(i ==3){
		printf("ko co trong mang");
	}
}



return 0;

}

