#include<stdio.h>
#include<string.h>
typedef struct hocsinh
{
    char hoTen[100];
    char soThich[100];
   	char khuvuc;
    float diemTrungBinh;
};
void NhapThongTin(hocsinh &s);
void XuatThongTin(hocsinh s);
void NhapMangHocSinh(hocsinh a[], int &n);
void XuatMangHocSinh(hocsinh a[], int n);
float tinhTrungBinh(hocsinh a[],int n);
int main()
{
    hocsinh A[100];
	int N;
	float tb;
	hocsinh s;
	NhapMangHocSinh(A,N);
	XuatMangHocSinh(A,N);
	tb=tinhTrungBinh(A,N);
	printf("\n tong diem trung binh cua lop la:.1f",tb);
//    NhapThongTin(s);
//    XuatThongTin(s);
    return 0;
}
void NhapThongTin(hocsinh &s)
{
	printf("Nhap ho ten hoc sinh: ");
    fflush(stdin);
	gets(s.hoTen);
    printf("Nhap so thich hoc sinh: ");
    fflush(stdin);
	gets(s.soThich);
    printf("Nhap khu vuc hoc sinh(1-thanh pho, 2-tinh): ");
    fflush(stdin);
	scanf("%d", &s.khuvuc);
    printf("Nhap diem trung binh hoc sinh: ");
    fflush(stdin);
	scanf("%f", &s.diemTrungBinh);
}
void XuatThongTin(hocsinh s)
{
	printf("%-10s|%-15s|",s.hoTen,s.soThich);
	if(s.khuvuc==1)
		printf("Thanh Pho |");
	else
		printf("Tinh |");
	printf("%5.1f\n",s.diemTrungBinh);
}
////////////////////////////////////////////////



