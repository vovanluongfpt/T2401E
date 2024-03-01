////B1. Viet chuong trinh cho phep nguoi dung dua ra su lua chon giai phuong trinh bac 1 hoac bac 2. Voi dau vao nhap tu ban phím In ra nghiem tuong ung.
//
//B2. Viet chuong trinh cho phep nhap vao mang 1 chieu so nguyen n phan tu
//
//Sap xep mang da nhap theo chieu giam dan
//In ra tong cac so le trong mang
//In ra tong cac so chan trong mang
//In ra tong cac so nguyen to trong mang
//Nhap vao so m bat ky, tim so lan xuat hien cua m trong mang
//Tinh tong cac phan tu trong mang
#include <stdio.h>
#include <math.h> 
int main(){
int a;
int b;
int n;
int c; 
printf("Lua chon pt : \n");
printf("1 . PT bac nhat \n") ;
printf("2. PT bac hai \n ") ;
printf("Nhap lua chon :") ;
scanf("%d",&n); 
if(n==1){
	printf("giai pt bac nhat : ax+b = 0 \n");
	printf("Nhap so a :") ;
scanf("%d",&a); 
printf("Nhap so b :") ;
scanf("%d",&b); 
	 if(a==0&&b==0){
	 	printf("PT vo so nghiem") ;
	 } 
	 if (a==0&&b!=0){
	 	printf("PT vo nghiem ") ;
	 } 
	 if(a!=0&&b!=0) {
	 	 float d = -b/a;
		 printf("pt co nghiem la : x = %f" ,d) ;
	 }
} 
if(n==2){
	printf("giai pt bac hai : ax2+bx+c= 0 \n");
	printf("nhap so a :") ;
scanf("%d",&a); 
printf("nhap so b :") ;
scanf("%d",&b); 
printf("nhap so c :") ;
scanf("%d",&c); 
int denta=b*b-4*a*c; 
if(denta<0){
	printf("PT vo so nghiem "); 
} 
if(denta==0){
	float d=-b/2*a;
	printf("PT co nghiem  kep la : %f",d) ;
} 
if(denta>0){
	float e1= (-b + sqrt(denta))/2*a;
	float e2= (-b - sqrt(denta))/2*a;
	printf("Pt co nghiem x1 = %f",e1) ;
	printf("Pt co nghiem x2 = %f",e2) ;
} 
if(a+b+c==0) {
	float e3=-c/a ;
	printf("PT co nghiem la x1 = -1 , x2 = %f",e3) ;
}
if(a+b+c==0) {
	float e4=c/a ;
	printf("PT co nghiem la x1 = 1 , x2 = %f",e4) ;
} 
} 
}
