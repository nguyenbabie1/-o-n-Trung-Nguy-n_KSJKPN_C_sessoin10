#include <stdio.h>

int main(){
	int arr[100];
	int check,gioihan,vitri,i;
	
	printf("Ban muon nhap vao mang bao nhieu ki tu : ");
	scanf("%d",&gioihan);
	for(int i=0;i<gioihan;i++){
		printf("Moi ban nhap gia tri : ");
		scanf("%d",&arr[i]);
	}
	printf("\nMang sau khi hoan thanh : ");
	for(int i=0;i<gioihan;i++){
		printf("%3d",arr[i]);
	}
	
	printf("\nBan muon tim gia tri nao trong mang : ");
	scanf("%d",&check);
	for( i=0;i<gioihan;i++){
		if(check==arr[i]){
			break;
		}
		vitri++;
	}
	if(check==arr[i]){
		printf("\nVi tri cua gia tri ban dang tim la : %d",vitri+1);
	}else{
		printf("Gia tri khong ton tai trong mang!!!");
	}
	return 0;
}
