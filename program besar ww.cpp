#include<stdio.h>
#include<windows.h>
#include<string.h>
int  main(){
	
	char nama[100];
	int layanan,harga,jumlah,total=0;
	int maksimal=3;
	int a;//batasan jumlah layanan yang dapat dipilih
	printf("selamat datang di car wash KM61!\n");
	printf("nama pelanggan:");
	scanf("%s"  ,&nama);
	printf("hallo,%s!\n" ,nama);
	
	printf("Daftar layanan            \n");
	printf("1. mobil sedan    :\tRp45.000\n");
	printf("2. mobil pick up  :\tRp40.000\n");
	printf("3. mobil strada   :\tRp60.000\n");
	printf("4. mini bus       :\tRp100.000\n");
	printf("5. truk           :\tRp120.000\n");
	printf("6. tronton        :\tRp150.000\n");
	printf("7. mobil tangki   :\tRp150.000\n");
	
	printf("0.selesai\n");
	for(a=0;a<maksimal;a++){
		printf("\n=================================================\n");
		printf("pilih layanan(1/2/3/4/5/6/7/0 untuk selesai:)");
		scanf("%d"  ,&layanan);
		if(layanan==0){
			break;
			
		}
		else if(layanan==1){
			harga=45000;
			printf("mobil sedan:");
			scanf("%d"  ,&jumlah);
	    }
	    else if(layanan==2){
			harga=40000;
			printf("mobil pick up:");
			scanf("%d"  ,&jumlah);
	    }
	    else if(layanan==3){
			harga=60000;
			printf("mobil strada:");
			scanf("%d"  ,&jumlah);
	    }
	    else if(layanan==4){
			harga=100000;
			printf("mini bus:");
			scanf("%d"  ,&jumlah);
	    }
	    else if(layanan==5){
			harga=120000;
			printf("truk:");
			scanf("%d"  ,&jumlah);
		}
	    else if(layanan==6){
			harga=150000;
			printf("tronton:");
			scanf("%d"  ,&jumlah);
		}
		else if(layanan==7){
			harga=150000;
			printf("mobil tangki");
			scanf("%d"  ,&jumlah);
	    }
	    total=harga*jumlah;
	    printf("layanan yang anda pilih\n");
	    printf("layanan:%d\n" ,layanan);
	    printf("harga per layanan:%d\n" ,harga);
	    printf("jumlah layanan:%d\n" ,jumlah);
	    printf("total biaya:%d\n" ,total);
	}
	printf("terima kasih telah berkunjung ke car wash mobil bersih\n" ,nama);
	return 0;
}
