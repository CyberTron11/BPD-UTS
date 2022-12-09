#include<stdio.h>
#include<cstdlib>

int main(){
	float nilai;
	char grade, coba_lagi;
	char nama[50], NIM[15],jurusan[20];

	
	system("cls");
	
	printf("--------UTS Bahasa Pemrograman Dasar--------\n\n");
	printf("Nama : ");
	gets(nama);
	printf("NIM : ");
	gets(NIM);
	printf("Jurusan : ");
	gets(jurusan);
	
	printf("Input Nilai : ");
	scanf("%f", &nilai);
	if(nilai >= 76 && nilai <= 100){
		printf("Grade Anda: A");
	}else if(nilai >= 66 && nilai <= 75){
		printf("Grade Anda: B");
	}else if(nilai >= 51 && nilai <= 65){
		printf("Grade Anda : C");
	}else if(nilai >= 0 && nilai <= 50){
		printf("Grade Anda : D");
	}else {
		printf("Anda Tidak Memiliki Grade");
	}
}

