#include<stdio.h>
int main(){
	int array[]={31,0,7,0,0,0,2,6,9,3},arrayCount[10];
	int n=sizeof(array)/sizeof(array[0]);
	int count=0,a,check=1;
	printf("moi ban so de tiem: ");
	scanf("%d",&a);
	for(int i=0;i<n;i++){
		if(a==array[i]){
		arrayCount[count]=i;
		count++;
		check=0;
	}
	}
	if(check){
		printf("trong mang khong co gia tri %d",a);
	}else{
		printf("cac vi tri la: ");
	for(int j=0;j<count;j++){
		printf("%d ",arrayCount[j]);
	}
}
return 0;
}
