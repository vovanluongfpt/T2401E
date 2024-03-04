#include <stdio.h>
int main(){
	int n;
	printf("nhap so luong so nguyen :");
	scanf("%d",&n);
	int mang[n];
	for(int i=0;i<n;i++){
	printf("nhap so nguyen thu %d :",i+1);
	scanf("%d",&mang[i]);
	}
	int sdnhonhat=mang[0];
	for(int i=0;i<n;i++){
		if(mang[i]>0&&sdnhonhat>mang[i]){
			sdnhonhat=mang[i];
		}
	}
	printf("so duong nho nhat la :%d",sdnhonhat);
}
