#include "QuanLySach.h"

//Khai bao so luong sach trong thu vien
#define MaxSach 1000

//Khoi tao cac mang chua thong tin quan ly sach
char ISBN[MaxSach][50];
char TenSach[MaxSach][50];
char TacGia[MaxSach][50];
char NhaXB[MaxSach][50];
char NamXB[MaxSach][50];
char TheLoai[MaxSach][50];
char GiaSach[MaxSach][50];
int SoLuong[MaxSach];

//Khoi tao bien dem so luong sach trong thu vien
int s = 0;

//Ham nhap thong tin ban dau cua sach:
/*
Chon:
	ISBN[MaxSach][50]; TenSach[MaxSach][50]; TacGia[MaxSach][50]; NhaXB[MaxSach][50]; NamXB[MaxSach][50];
	TheLoai[MaxSach][50]; GiaSach[MaxSach][50];SoLuong[MaxSach];
In: Thong tin ban dau cua sach
*/
void NhapSach()
{
	while (true)
	{
		if (s >= MaxSach)
			printf("So luong sach da vuot qua 10000");
		else
		while (s < MaxSach)
		{

			printf("\n Thong Tin Quyen Sach Thu %d :", s + 1);
			fflush(stdin);//Xoa bo nho dem o truoc

			// Them ISBN cua quyen sach:
			rewind(stdin);
			printf("\n - ISBN quyen sach thu %d: ", s + 1);
			gets_s(ISBN[s]);

			// Them ten sach:
			printf(" - Ten quyen sach thu %d: ", s + 1);
			gets_s(TenSach[s]);

			// Them ten tac gia cua sach:
			printf(" - Ten tac gia cua quyen sach thu %d: ", s + 1);
			gets_s(TacGia[s]);

			// Them nha xuat ban cua sach:
			printf(" - Nha xuat ban cua quyen sach thu %d: ", s + 1);
			gets_s(NhaXB[s]);

			// Them nam xuat ban cua sach:
			printf(" - Nam xuat ban cua quyen sach thu %d: ", s + 1);
			gets_s(NamXB[s]);

			// Them the loai cua sach:
			printf(" - The loai cua quyen sach thu %d: ", s + 1);
			gets_s(TheLoai[s]);

			// Them gia sach cua sach:
			printf(" - Gia sach cua quyen sach thu %d: ", s + 1);
			gets_s(GiaSach[s]);

			// Them so luong cua sach:
			printf(" - So luong cua quyen sach thu %d: ", s + 1);
			scanf_s("%d", &SoLuong[s]);

			s++;
			break;
		}
		if (s >= 3)
			break;
	}
}


//Ham xem thong tin sach:
/*
	Chon:
ISBN[MaxSach][50]; TenSach[MaxSach][50]; TacGia[MaxSach][50]; NhaXB[MaxSach][50]; NamXB[MaxSach][50];
TheLoai[MaxSach][50]; GiaSach[MaxSach][50];SoLuong[MaxSach];
	Xuat:
Thong tin ban dau cua sach
*/
void XemSach()
{
	if (s <= 0)
	{
		printf("Chua cap nhat du lieu!\n");
	}
	else
	{
		int i = 0;
		while (i < s)
		{
			printf("\n Thong Tin Quyen Sach Thu %d \n", i + 1);

			// Xem ISBN cua sach:
			printf("\n - ISBN cua quyen sach thu %d: ", i + 1);
			puts(ISBN[i]);

			// Xem ten cua quyen sach:
			printf(" - Ten cua quyen sach thu %d: ", i + 1);
			puts(TenSach[i]);

			// Xem ten cua tac gia:
			printf(" - Ten tac gia cua quyen sach thu %d: ", i + 1);
			puts(TacGia[i]);

			// Xem nha xuat ban cua quyen sach:
			printf(" - Nha xuat ban cua quyen sach thu %d: ", i + 1);
			puts(NhaXB[i]);

			// Xem nam xuat ban cua quyen sach:
			printf(" - Nam xuat ban cua quyen sach thu %d: ", i + 1);
			puts(NamXB[i]);

			// Xem the loai cua quyen sach:
			printf(" - The loai cua quyen sach thu %d: ", i + 1);
			puts(TheLoai[i]);

			// Xem gia cua quyen sach:
			printf(" - Gia cua quyen sach thu %d: ", i + 1);
			puts(GiaSach[i]);

			// Xem so luong sach:
			printf(" - So luong cua quyen sach thu %d la: %d", i + 1, SoLuong[i]);
			i++;
		}
	}
}

//Ham them thong tin 1 quyen sach
/*
	Nhan vao:
ISBN[MaxSach][50]; TenSach[MaxSach][50]; TacGia[MaxSach][50]; NhaXB[MaxSach][50]; NamXB[MaxSach][50];
TheLoai[MaxSach][50]; GiaSach[MaxSach][50];SoLuong[MaxSach];
	Ket qua:
Thong tin cua sach
*/
void ThemSach()
{
	while (true)
	{
		printf("\n						 CAP NHAT THEM SACH						\n");
		printf("\t[33]:Thoat cap nhat.\n");
		printf("\t[34]:Cap nhat thong tin sach.\n");
		printf("\n	\n");

		int sochon;
		printf("\nChon chuc nang so: ");
		scanf_s("%d", &sochon);
		if (sochon != 33 && sochon != 34)
			printf("Chuc nang khong ton tai. Vui long chon chuc nang khac");

		if (sochon == 33)
			break;

		if (sochon == 34)
		{
			if (s >= MaxSach)
				printf("Khong du bo nho de cap nhat thong tin sach!");
			while (s < MaxSach)
			{

				printf("\n					 Thong Tin Quyen Sach Thu %d					", s + 1);
				fflush(stdin);			//xoa bo nho dem truoc do

				// Them ISBN cua quyen sach:
				rewind(stdin);
				printf("\n +ISBN quyen sach thu %d: ", s + 1);
				gets_s(ISBN[s]);

				// Them ten quyen sach:
				printf(" +Ten quyen sach thu %d: ", s + 1);
				gets_s(TenSach[s]);

				// Them ten tac gia cua quyen sach:
				printf(" +Ten tac gia cua quyen sach thu %d: ", s + 1);
				gets_s(TacGia[s]);

				// Them nha xuat ban cua quyen sach:
				printf(" +Nha xuat ban cua quyen sach thu %d: ", s + 1);
				gets_s(NhaXB[s]);

				// Them nam xuat ban cua quyen sach:
				printf(" +Nam xuat ban cua quyen sach thu %d: ", s + 1);
				gets_s(NamXB[s]);

				// Them the loai cua quyen sach:
				printf(" +The loai cua quyen sach thu %d: ", s + 1);
				gets_s(TheLoai[s]);

				// Them gia sach cua quyen sach:
				printf(" +Gia sach cua quyen sach thu %d: ", s + 1);
				gets_s(GiaSach[s]);

				// Them so luong cua quyen sach:
				printf(" +So luong cua quyen sach thu %d: ", s + 1);
				scanf_s("%d", &SoLuong[s]);
				s++;
				break;
			}
		}
	}
}

//Ham sua thong tin sach
/*
	Nhan vao:
So thu tu quyen sach can sua(h)
	Tra ve:
Thong tin cua sach sau khi sua
*/
void SuaSach(int h)
{

	if (h >= 0 && h <= s)
	{
		printf("\n					MENU LENH SUA THONG TIN SACH					\n");
		printf("\t[35]:Chinh sua ISBN cua quyen sach.\n");
		printf("\t[36]:Chinh sua ten sach.\n");
		printf("\t[37]:Chinh sua tac gia cua quyen sach.\n");
		printf("\t[38]:Chinh sua nha xuat ban cua quyen sach.\n");
		printf("\t[39]:Chinh sua nam xuat ban cua quyen sach.\n");
		printf("\t[40]:Chinh sua the loai cua quyen sach.\n");
		printf("\t[41]:Chinh sua gia ban cua quyen sach.\n");
		printf("\t[42]:Chinh sua so luong cua moi quyen sach.\n");
		printf("	\n");

		int sochon;
		printf("\nChon chuc nang so: ");
		scanf_s("%d", &sochon);

		if (sochon == 42)
		{
			int suaSL;
			printf("\n					 Noi dung can chinh sua						\n");
			scanf_s("%d", &suaSL);
			SoLuong[h - 1] = suaSL;//Cap nhat lai so luong quyen sach thu h
		}
		else
		{
			char sua[30];
			printf("Nhap noi dung chinh sua: ");
			fflush(stdin);
			gets_s(sua);

			switch (sochon)//Dung ham strcpy de chep noi dung chuoi SUA chong len cac noi dung cua thong tin sach
			{
			case 35:
				strcpy_s(ISBN[h - 1], sua);
				break;
			case 36:
				strcpy_s(TenSach[h - 1], sua);
				break;
			case 37:
				strcpy_s(TacGia[h - 1], sua);
				break;
			case 38:
				strcpy_s(NhaXB[h - 1], sua);
				break;
			case 39:
				strcpy_s(NamXB[h - 1], sua);
				break;
			case 40:
				strcpy_s(TheLoai[h - 1], sua);
				break;
			case 41:
				strcpy_s(GiaSach[h - 1], sua);
				break;
			default:
				printf("Noi dung chinh sua khong ton tai, xin chon lai");
				break;
			}
		}
	}
	else
		printf("Du lieu khong trung khop, xin chon lai");
}
//Ham xem thong tin sach sau khi sua
/*
	Nhan vao: So thu tu quyen sach can xem sau khi sua (h)
	Tra ve: Thong tin quyen sach sau khi chinh sua xong
*/
void XemThongTinSachDaSua(int h)
{
	printf("\n Thong tin quyen sach thu %d sau khi sua la: \n", h);

	// Xem ISBN cua sach:
	printf("\n +ISBN cua quyen sach thu %d: ", h);
	puts(ISBN[h - 1]);

	// Xem ten cua quyen sach:
	printf(" +Ten cua quyen sach thu %d: ", h);
	puts(TenSach[h - 1]);

	// Xem ten cua tac gia:
	printf(" +Ten tac gia cua quyen sach thu %d: ", h);
	puts(TacGia[h - 1]);

	// Xem nha xuat ban cua quyen sach:
	printf(" +Nha xuat ban cua quyen sach thu %d: ", h);
	puts(NhaXB[h - 1]);

	// Xem nam xuat ban cua quyen sach:
	printf(" + xuat ban cua quyen sach thu %d: ", h);
	puts(NamXB[h - 1]);

	// Xem the loai cua quyen sach:
	printf(" +The loai cua quyen sach thu %d: ", h);
	puts(TheLoai[h - 1]);

	// Xem gia cua quyen sach:
	printf(" +Gia ban cua quyen sach thu %d: ", h);
	puts(GiaSach[h - 1]);

	// Xem so luong cua quyen sach:
	printf(" +So luong cua quyen sach thu %d la: %d ", h, SoLuong[h - 1]);
}
//Ham chinh sua sach
/*
	Nhan vao: So thu tu quyen sach can chinh sua(h)
	Tra ve: Tuy chon quan ly qua trinh chinh sua
*/
void MenuTuyChonChinhSuaSach(int h)
{
	while (true)
	{
		printf("\n TUY CHON CHINH SUA THONG TIN SACH \n");
		printf("\t[43]:Thoat chinh sua .\n");
		printf("\t[44]:Tiep tuc chinh sua thong tin quyen sach thu %d.\n", h);
		printf("\t[45]Xem thong tin quyen sach sau khi chinh sua.\n");
		printf("	\n");

		int sochon;
		printf("\nChon chuc nang so: ");
		scanf_s("%d", &sochon);

		if (sochon == 43)
			break;

		switch (sochon)
		{
		case 44:
			SuaSach(h);
			break;
		case 45:
			XemThongTinSachDaSua(h);
			break;
		default:
			printf("Chuc nang khong ton tai, xin chon lai");
			break;
		}
	}
}

//Ham xoa thong tin sach
/*
	Nhan vao:
ISBN[MaxSach][30]; TenSach[MaxSach][30]; TacGia[MaxSach][30]; NhaXB[MaxSach][30]; NamXB[MaxSach][30];
TheLoai[MaxSach][30]; GiaSach[MaxSach][30];SoLuong[MaxSach];
	Tra ve: Xoa thong tin mot quyen sach trong thu vien
*/
void XoaSach(int d)
{
	int flag = 0;
	if (d >= 0 && d < s)		//Trong phan NhapSach sau khi s++ len 3 thi gap cau lenh if va break ra khoai vong lap.Luc nay s = 3
	{
		for (int i = d - 1; i < s - 1; i++)
		{
			//Dung ham strcpy de chep noi dung cac chuoi ISBN,TenSach,TacGia,NhaXB,NamXB,TheLoai,GiaSach,SoLuong chong len cac chuoi nay o vi tri truoc do
			strcpy_s(ISBN[i], ISBN[i + 1]);
			strcpy_s(TenSach[i], TenSach[i + 1]);
			strcpy_s(TacGia[i], TacGia[i + 1]);
			strcpy_s(NhaXB[i], NhaXB[i + 1]);
			strcpy_s(NamXB[i], NamXB[i + 1]);
			strcpy_s(TheLoai[i], TheLoai[i + 1]);
			strcpy_s(GiaSach[i], GiaSach[i + 1]);

			SoLuong[i] = SoLuong[i + 1];
		}
		s--;
		flag = 1;
	}
	if (flag == 1)
	{
		printf("\n Danh sach cac quyen sach sau khi xoa: \n");
		XemSach();
	}
	else
		printf("Loi!, xin chon lai");
}

//Ham tim sach theo ISBN
/*
	Nhan vao:
ISBN cua quyen sach can tim
	Tra ve:
Thong tin cua quyen sach can tim.
*/
void TimISBN(char isbn[25])
{
	int flag = 0;
	for (int i = 0; i < s; i++)
	{
		if (strcmp(ISBN[i], isbn) == 0)//Dung ham srtcmp de so sanh 2 chuoi.Neu khop thi tra ve 0
		{
			printf("\n Thong tin sach can tim \n");
			// Xem ISBN cua sach:
			printf("\n + ISBN cua quyen sach thu %d: ", i + 1);
			puts(ISBN[i]);

			// Xem ten cua quyen sach:
			printf(" + Ten cua quyen sach thu %d: ", i + 1);
			puts(TenSach[i]);

			// Xem ten cua tac gia:
			printf(" + Ten tac gia cua quyen sach thu %d: ", i + 1);
			puts(TacGia[i]);

			// Xem nha xuat ban cua quyen sach:
			printf(" + Nha xuat ban cua quyen sach thu %d: ", i + 1);
			puts(NhaXB[i]);

			// Xem nam xuat ban cua quyen sach:
			printf(" + Nam xuat ban cua quyen sach thu %d: ", i + 1);
			puts(NamXB[i]);

			// Xem the loai cua quyen sach:
			printf(" + The loai cua quyen sach thu %d: ", i + 1);
			puts(TheLoai[i]);

			// Xem gia cua quyen sach:
			printf(" + Gia cua quyen sach thu %d: ", i + 1);
			puts(GiaSach[i]);

			// Xem so luong cua quyen sach:
			printf(" + So luong cua quyen sach thu %d la: %d", i + 1, SoLuong[i]);

			flag = 1;
		}
	}
	if (flag != 1)
		printf("\nKhong tim thay!");
}
//Ham tim sach theo ten
/*
	Nhan vao:
Ten sach
	Tra ve:
Thong tin cua quyen sach can tim.
*/
void TimTheoTenSach(char tensach[25])
{
	int flag = 0;
	for (int i = 0; i < s; i++)
	{
		if (strcmp(TenSach[i], tensach) == 0)//Dung ham srtcmp de so sanh 2 chuoi.Neu khop thi tra ve 0
		{
			printf("\n Thong Tin Quyen Sach Can Tim \n");
			// Xem ISBN cua sach:
			printf("\n + ISBN cua quyen sach thu %d: ", i + 1);
			puts(ISBN[i]);

			// Xem ten cua quyen sach:
			printf(" + Ten cua quyen sach thu %d: ", i + 1);
			puts(TenSach[i]);

			// Xem ten cua tac gia:
			printf(" + Ten tac gia cua quyen sach thu %d: ", i + 1);
			puts(TacGia[i]);

			// Xem nha xuat ban cua quyen sach:
			printf(" + Nha xuat ban cua quyen sach thu %d: ", i + 1);
			puts(NhaXB[i]);

			// Xem nam xuat ban cua quyen sach:
			printf(" + Nam xuat ban cua quyen sach thu %d: ", i + 1);
			puts(NamXB[i]);

			// Xem the loai cua quyen sach:
			printf(" + The loai cua quyen sach thu %d: ", i + 1);
			puts(TheLoai[i]);

			// Xem gia cua quyen sach:
			printf(" + Gia cua quyen sach thu %d: ", i + 1);
			puts(GiaSach[i]);

			// Xem so luong cua quyen sach:
			printf(" + So luong cua quyen sach thu %d la: %d", i + 1, SoLuong[i]);


			flag = 1;
		}
	}
	if (flag != 1)
		printf("\nKhong tim thay!");
}

//Ham thong ke so luong sach trong thu vien
/*
	Nhan vao:
tham so s
	Tra ve:
So luong sach trong thu vien
*/
int TKSachTV()
{
	int dem = 0;
	for (int i = 0; i < s; i++)
	{
		dem = dem + SoLuong[i];
	}
	return dem;
}

//Ham thong ke so luong sach theo the loai
/*
	Nhan vao: tham so s
	Tra ve: So luong sach theo tung the loai
*/
void TKSachTL()
{
	int dem = 0;
	for (int i = 0; i < s; i++)
	{
		dem = 0;
		for (int j = 0; j < s; j++)
		{
			if (strcmp(TheLoai[i], TheLoai[j]) == 0)// Dung ham srtcmp de so sanh 2 chuoi.Neu khop thi tra ve 0
			{
				if (i <= j)	//Dieu kien de chay bien dem
					dem = dem + SoLuong[j];
				else
					break;
			}
		}
		if (dem != 0)
			printf("The loai %s co so luong sach la: %d\n", TheLoai[i], dem);
	}
}
