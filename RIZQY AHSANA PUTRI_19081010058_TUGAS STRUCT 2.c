//DISUSUN OLEH RIZQY AHSANA PUTRI 19081010058

#include <stdio.h>
#include <string.h>


struct mahasiswa
{
	char nama[150];
	char fak[150];
	char jur[150];
	char npm[150];
	int sem;
	int sks;
	float ipk;
};

typedef struct mahasiswa mahasiswa;

void main ()
{
	int a,b,c,z,y;
	mahasiswa mhs;
	
	printf("\t\t\t-----PROGRAM DATA MAHASISWA-----\n\n");
	printf("___________________________________________________________________\n");

	printf("\nMENAMBAH DATA BARU\n\n");
	printf("Nama : ");
	gets(mhs.nama);
	printf("\n");
	
	printf("Fakultas : ");
	gets(mhs.fak);
	printf("\n");
	
	printf("Jurusan : ");
	gets(mhs.jur);
	printf("\n");
	
	printf("NPM : ");
	gets(mhs.npm);
	printf("\n");
	
	printf("Semester : ");
	scanf("%d",&mhs.sem);
	printf("\n");
	
	printf("Jumlah SKS yang telah ditempuh : ");
	scanf("%d",&mhs.sks);
	printf("\n");
	
	printf("IPK : ");
	scanf("%f",&mhs.ipk);
	printf("\n");
	printf("___________________________________________________________________\n");
	
	
	printf("\nMELIHAT DATA YANG SUDAH ADA\n\n");
	
	printf(" Nama\t\t\t\t:%s\n Fakultas\t\t\t:%s\n Jurusan\t\t\t:%s\n NPM\t\t\t\t:%s\n Semester\t\t\t:%d\n SKS yang telah ditempuh\t:%d\n IPK\t\t\t\t:%.2f\n\n\n",mhs.nama, mhs.fak, mhs.jur, mhs.npm,mhs.sem,mhs.sks,mhs.ipk);
	
	printf("--Mengupdate dan Mendelete data yang sudah ada--\n\n");
	printf("Apakah Anda ingin men-delete/meng-update data-data diatas?\n\n");
	printf("Ketik '0' jika tidak ada yang perlu di delete maupun diganti\n");
	printf("Ketik '1' jika Anda ingin men-delete salah satu data diatas\n");
	printf("Ketik '2' jika Anda ingin meng-update salah satu data diatas\n\n");
	printf("Ketikkan pilihan Anda (0/1/2) : ");
	
	scanf("%d",&a);
	
	printf("\n");
	
	switch (a)
	{
		case 0:
			printf("Anda memilih untuk tidak men-delete ataupun mengupdate data-data diatas");
			break;
		case 1:
			{
				printf("Anda memilih untuk men-delete salah satu data diatas\n\n");
				printf("Data nomor berapa yang ingin anda hapus?\n");
				printf("1. Nama\n2. Fakultas\n3. Jurusan\n4. NPM\n5. Semester\n6. Jumlah SKS yang sudah ditempuh\n7.IPN\n\n");
				printf("Ketikkan pilihan Anda (1/2/3/4/5/6/7) : ");
				scanf("%d",&b);
				printf("\n\n");
				
				switch (b)
				{
					case 1:
						printf("Anda memilih untuk men-delete data nama\n\n");
						printf("--Menampilkan Data Baru--\n\n");
						printf(" Fakultas\t\t\t:%s\n Jurusan\t\t\t:%s\n NPM\t\t\t\t:%s\n Semester\t\t\t:%d\n SKS yang telah ditempuh\t:%d\n IPK\t\t\t\t:%.2f\n\n\n",mhs.fak, mhs.jur, mhs.npm,mhs.sem,mhs.sks,mhs.ipk);
						break;
					case 2:
						printf("Anda memilih untuk men-delete data fakultas\n\n");
						printf("--Menampilkan Data Baru--\n\n");
						printf(" Nama\t\t\t\t:%s\n Jurusan\t\t\t:%s\n NPM\t\t\t\t:%s\n Semester\t\t\t:%d\n SKS yang telah ditempuh\t:%d\n IPK\t\t\t\t:%.2f\n\n\n",mhs.nama, mhs.jur, mhs.npm,mhs.sem,mhs.sks,mhs.ipk);
						break;
					case 3:
						printf("Anda memilih untuk men-delete data jurusan\n\n");
						printf("--Menampilkan Data Baru--\n\n");
						printf(" Nama\t\t\t\t:%s\n Fakultas\t\t\t:%s\n NPM\t\t\t\t:%s\n Semester\t\t\t:%d\n SKS yang telah ditempuh\t:%d\n IPK\t\t\t\t:%.2f\n\n\n",mhs.nama, mhs.fak, mhs.npm,mhs.sem,mhs.sks,mhs.ipk);
						break;
					case 4:
						printf("Anda memilih untuk men-delete data NPM\n\n");
						printf("--Menampilkan Data Baru--\n\n");
						printf(" Nama\t\t\t\t:%s\n Fakultas\t\t\t:%s\n Jurusan\t\t\t:%s\n Semester\t\t\t:%d\n SKS yang telah ditempuh\t:%d\n IPK\t\t\t\t:%.2f\n\n\n",mhs.nama, mhs.fak, mhs.jur, mhs.sem,mhs.sks,mhs.ipk);
						break;
					case 5:
						printf("Anda memilih untuk men-delete data semester\n\n");
						printf("--Menampilkan Data Baru--\n\n");
						printf(" Nama\t\t\t\t:%s\n Fakultas\t\t\t:%s\n Jurusan\t\t\t:%s\n NPM\t\t\t\t:%s\n SKS yang telah ditempuh\t:%d\n IPK\t\t\t\t:%.2f\n\n\n",mhs.nama, mhs.fak, mhs.jur, mhs.npm, mhs.sks,mhs.ipk);
						break;
					case 6:
						printf("Anda memilih untuk men-delete data Jumlah SKS yang telah ditempuh\n\n");
						printf("--Menampilkan Data Baru--\n\n");
						printf(" Nama\t\t\t\t:%s\n Fakultas\t\t\t:%s\n Jurusan\t\t\t:%s\n NPM\t\t\t\t:%s\n Semester\t\t\t:%d\n IPK\t\t\t\t:%.2f\n\n\n",mhs.nama, mhs.fak, mhs.jur, mhs.npm,mhs.sem, mhs.ipk);
						break;
					case 7:
						printf("Anda memilih untuk men-delete data IPK\n\n");
						printf("--Menampilkan Data Baru--\n\n");
						printf(" Nama\t\t\t\t:%s\n Fakultas\t\t\t:%s\n Jurusan\t\t\t:%s\n NPM\t\t\t\t:%s\n Semester\t\t\t:%d\n SKS yang telah ditempuh\t:%d\n\n\n",mhs.nama, mhs.fak, mhs.jur, mhs.npm,mhs.sem,mhs.sks);
						break;
					default:
						printf("tidak valid");
						
				}
			}
			
			break;
		case 2:
			{
				printf("Anda memilih untuk meng-update data-data diatas\n");
				printf("Data nomor berapa yang ingin anda edit?\n");
				printf("1. Nama\n2. Fakultas\n3. Jurusan\n4. NPM\n5. Semester\n6. Jumlah SKS yang sudah ditempuh\n7.IPK\n\n");
				printf("Ketikkan pilihan Anda (1/2/3/4/5/6/7) : ");
				scanf("%d",&c);
				printf("\n\n");
				
				switch (c)
				{
					case 1:
						printf("Anda memilih untuk meng-edit data nama\n\n");
						printf("Masukkan nama yang baru : ");
						fflush(stdin);
						gets(mhs.nama);
						printf("\n\n--Menampilkan Data Baru Setelah di Update--\n\n");
						printf(" Nama\t\t\t\t:%2s\n Fakultas\t\t\t:%s\n Jurusan\t\t\t:%s\n NPM\t\t\t\t:%s\n Semester\t\t\t:%d\n SKS yang telah ditempuh\t:%d\n IPK\t\t\t\t:%.2f\n\n\n",mhs.nama, mhs.fak, mhs.jur, mhs.npm,mhs.sem,mhs.sks,mhs.ipk);
						break;
					case 2:
						printf("Anda memilih untuk meng-edit data fakultas\n\n");
						printf("Masukkan fakultas yang baru = ");
						fflush(stdin);
						gets(mhs.fak);
						printf("\n\n--Menampilkan Data Baru Setelah di Update--\n\n");
						printf(" Nama\t\t\t\t:%2s\n Fakultas\t\t\t:%s\n Jurusan\t\t\t:%s\n NPM\t\t\t\t:%s\n Semester\t\t\t:%d\n SKS yang telah ditempuh\t:%d\n IPK\t\t\t\t:%.2f\n\n\n",mhs.nama, mhs.fak, mhs.jur, mhs.npm,mhs.sem,mhs.sks,mhs.ipk);
						break;
					case 3:
						printf("Anda memilih untuk meng-edit data jurusan\n\n");
						printf("Masukkan jurusan yang baru = ");
						fflush(stdin);
						gets(mhs.jur);
						printf("\n\n--Menampilkan Data Baru Setelah di Update--\n\n");
						printf(" Nama\t\t\t\t:%2s\n Fakultas\t\t\t:%s\n Jurusan\t\t\t:%s\n NPM\t\t\t\t:%s\n Semester\t\t\t:%d\n SKS yang telah ditempuh\t:%d\n IPK\t\t\t\t:%.2f\n\n\n",mhs.nama, mhs.fak, mhs.jur, mhs.npm,mhs.sem,mhs.sks,mhs.ipk);
						break;
					case 4:
						printf("Anda memilih untuk meng-edit data NPM\n\n");
						printf("Masukkan NPM yang baru = ");
						fflush(stdin);
						gets(mhs.npm);
						printf("\n\n--Menampilkan Data Baru Setelah di Update--\n\n");
						printf(" Nama\t\t\t\t:%2s\n Fakultas\t\t\t:%s\n Jurusan\t\t\t:%s\n NPM\t\t\t\t:%s\n Semester\t\t\t:%d\n SKS yang telah ditempuh\t:%d\n IPK\t\t\t\t:%.2f\n\n\n",mhs.nama, mhs.fak, mhs.jur, mhs.npm,mhs.sem,mhs.sks,mhs.ipk);
						break;
					case 5:
						printf("Anda memilih untuk meng-edit data semester\n\n");
						printf("Masukkan semester yang baru = ");
						fflush(stdin);
						scanf("%d",&mhs.sem);
						printf("\n\n--Menampilkan Data Baru Setelah di Update--\n\n");
						printf(" Nama\t\t\t\t:%2s\n Fakultas\t\t\t:%s\n Jurusan\t\t\t:%s\n NPM\t\t\t\t:%s\n Semester\t\t\t:%d\n SKS yang telah ditempuh\t:%d\n IPK\t\t\t\t:%.2f\n\n\n",mhs.nama, mhs.fak, mhs.jur, mhs.npm,mhs.sem,mhs.sks,mhs.ipk);
						break;
					case 6:
					printf("Anda memilih untuk meng-edit data SKS\n\n");
						printf("Masukkan SKS yang baru = ");
						fflush(stdin);
						scanf("%d",&mhs.sks);
						printf("\n\n--Menampilkan Data Baru Setelah di Update--\n\n");
						printf(" Nama\t\t\t\t:%2s\n Fakultas\t\t\t:%s\n Jurusan\t\t\t:%s\n NPM\t\t\t\t:%s\n Semester\t\t\t:%d\n SKS yang telah ditempuh\t:%d\n IPK\t\t\t\t:%.2f\n\n\n",mhs.nama, mhs.fak, mhs.jur, mhs.npm,mhs.sem,mhs.sks,mhs.ipk);
						break;
					case 7:
						printf("Anda memilih untuk meng-edit data IPK\n\n");
						printf("Masukkan IPK yang baru = ");
						fflush(stdin);
						scanf("%.2f",&mhs.ipk);
						printf("\n\n--Menampilkan Data Baru Setelah di Update--\n\n");
						printf(" Nama\t\t\t\t:%2s\n Fakultas\t\t\t:%s\n Jurusan\t\t\t:%s\n NPM\t\t\t\t:%s\n Semester\t\t\t:%d\n SKS yang telah ditempuh\t:%d\n IPK\t\t\t\t:%.2f\n\n\n",mhs.nama, mhs.fak, mhs.jur, mhs.npm,mhs.sem,mhs.sks, mhs.ipk);
						break;
					default:
						printf("tidak valid");
						
				}
			}
			
			
			break;
		default:
			printf("tidak valid");
			
	}
	
	
	
	
}
