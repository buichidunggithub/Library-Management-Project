#include "QuanLyDocGia.h"

// Khai bao so luong doc gia lon nhat
#define MaxDG 300

// Khoi tao cac mang chua thong tin quan ly doc gia
char MaDG[MaxDG][30], Ten[MaxDG][30], CMND[MaxDG][15], NTNSinh[MaxDG][15], GioiTinh[MaxDG][10], Email[MaxDG][30], DiaChi[MaxDG][30];

int ngay[MaxDG];
int thang[MaxDG];
int nam[MaxDG];
int ngayhet[MaxDG];
int thanghet[MaxDG];
int namhet[MaxDG];

int m = 0;
//Khoi tao bien dem doc gia


//Day la ham nhap thong tin ban dau cho doc gia
/*
	Nhan vao:
MaDG[MaxDG][15]; Ten[MaxDG][30]; CMND[MaxDG][15]; NTNSinh[MaxDG][15];
GioiTinh[MaxDG][10]; Email[MaxDG][30]; DiaChi[MaxDG][30]
	Tra ve:
Thong tin ban dau cua doc gia
*/

void NhapDG()
{
	while (true)
	{
		if (m >= MaxDG)
			printf("Khong du bo nho!");
		else
		while (m < MaxDG)
		{

			printf("\n					 Thong Tin Doc Gia Thu %d					", m + 1);
			rewind(stdin);
			// Nhap Ma so doc gia:
			printf("\n + Ma so doc gia thu %d: ", m + 1);
			gets_s(MaDG[m]);
			
			
			// Nhap Ten doc gia:
			printf(" + Ten doc gia thu %d: ", m + 1);
			gets_s(Ten[m]);

			// Nhap CMND doc gia:
			printf(" + So CMND doc gia thu %d: ", m + 1);
			gets_s(CMND[m]);

			// Nhap ngay, thang, nam sinh cua doc gia:
			printf(" + Ngay,thang,nam sinh cua doc gia thu %d: ", m + 1);
			gets_s(NTNSinh[m]);

			// Nhap gioi tinh cua doc gia:
			printf(" + Gioi tinh doc gia thu %d: ", m + 1);
			gets_s(GioiTinh[m]);

			// Nhap dia chi email doc gia:
			printf(" + Dia chi email cua doc gia thu %d: ", m + 1);
			gets_s(Email[m]);

			// Nhap Dia Chi cua doc gia:
			printf(" + Dia chi cua doc gia thu %d (chi nhap ten tinh thanh): ", m + 1);
			gets_s(DiaChi[m]);

			// Nhap ngay lap the cua doc gia:
			printf(" + Nhap thoi gian lap the: ");
			NgayLap();

			// Tu dong nhap ngay het han the cua doc gia: 7 ngay ke tu ngay muon
			NgayHet();

			m++;
			break;
		}
		if (m >= 3)
			break;
	}
}
//Ham nhap thoi gian lam the
// Nhan vao: Khong nhan tham so dau vao
// Tra ve: Ngay,thang,nam lap the muon sach

void NgayLap()
{
	printf("\n");

	printf("\t+ Nhap ngay lap the: ");
	scanf_s("%d", &ngay[m]);

	printf("\t+ Nhap thang lap the: ");
	scanf_s("%d", &thang[m]);

	printf("\t+ Nhap nam lap the: ");
	scanf_s("%d", &nam[m]);
}

//Ham xac dinh thoi gian het han cua the
/* Nhan vao: ngay[MaxDG]; thang[MaxDG]; nam[MaxDG];
 Tra ve: ngayhet[MaxDG]; thanghet[MaxDG]; namhet[MaxDG];
*/

void NgayHet()
{
	ngayhet[m] = ngay[m];
	thanghet[m] = thang[m];
	namhet[m] = nam[m] + 4;
}



//Ham xem thong tin doc gia
/*
	Nhan vao:
MaDG[MaxDG][25]; Ten[MaxDG][25]; CMND[MaxDG][25]; NTNSinh[MaxDG][25];
GioiTinh[MaxDG][25]; Email[MaxDG][25]; DiaChi[MaxDG][25];
	Tra ve:
Thong tin cua cac doc gia
*/
void XemDG()
{
	if (m <= 0)
	{
		printf("Chua co thong tin doc gia.\n");
	}
	else
	{
		for (int i = 0; i < m; i++)
		{
			printf("\n					 Thong Tin Doc Gia Thu %d					\n", i + 1);

			// Xem ma so cua doc gia:
			printf("\n + Ma so doc gia thu %d: ", i + 1);
			puts(MaDG[i]);

			// Xem ten cua doc gia:
			printf(" + Ten doc gia thu %d: ", i + 1);
			puts(Ten[i]);

			// Xem so CMND cua doc gia:
			printf(" + So CMND doc gia thu %d: ", i + 1);
			puts(CMND[i]);

			// Xem ngay, thang, nam sinh cua doc gia:
			printf(" + Ngay thang nam sinh cua doc gia thu %d: ", i + 1);
			puts(NTNSinh[i]);

			// Xem gioi tinh cua doc gia:
			printf(" + Gioi tinh doc gia thu %d: ", i + 1);
			puts(GioiTinh[i]);

			// Xem Dia chi email cua doc gia:
			printf(" + Dia chi email cua doc gia thu %d: ", i + 1);
			puts(Email[i]);

			// Xem Dia Chi cua doc gia:
			printf(" + Dia chi cua doc gia thu %d: ", i + 1);
			puts(DiaChi[i]);

			// Xem ngay lap the cua doc gia:
			printf(" + Thoi gian lap the cua doc gia thu %d la: %d-%d-%d", i + 1, ngay[i], thang[i], nam[i]);

			// Xem ngay het han the cua doc gia:
			printf("\n + Thoi gian het han the cua doc gia thu %d la: %d-%d-%d\n", i + 1, ngayhet[i], thanghet[i], namhet[i]);

		}
	}
}

//Ham them doc gia
/*
	Nhan vao:
MaDG[MaxDG][25]; Ten[MaxDG][25]; CMND[MaxDG][25]; NTNSinh[MaxDG][25];
GioiTinh[MaxDG][25]; Email[MaxDG][25]; DiaChi[MaxDG][25];
	Tra ve:
Thong tin ban dau cua doc gia
*/
void ThemDG()
{
	while (true)
	{
		printf("\n					LENH CAP NHAT THEM DOC GIA					\n");
		printf("\t[20]:Thoat cap nhat.\n");
		printf("\t[21]:Cap nhat thong tin doc gia.\n");
		printf("\n	\n");

		int sochon;
		printf("\nChon chuc nang so: ");
		scanf_s("%d", &sochon);
		if (sochon != 20 && sochon != 21)
			printf("Chuc nang khong ton tai.Vui long chon chuc nang khac!!");

		if (sochon == 20)			//Thoat khoi viec cap nhat
			break;
		if (sochon == 21)			//Tiep tuc cap nhat thong tin doc gia
		{
			if (m >= MaxDG)
				printf("Khong du bo nho de cap nhat doc gia");
			else
			while (m < MaxDG)
			{
				printf("\n Thong Tin Doc Gia Thu %d ", m + 1);
				fflush(stdin);//xoa bo nho dem truoc do

				// Them Ma so doc gia:
				rewind(stdin);
				printf("\n + Ma so doc gia thu %d: ", m + 1);
				fflush(stdin);
				gets_s(MaDG[m]);

				// Them Ten doc gia:
				printf(" + Ten doc gia thu %d: ", m + 1);
				gets_s(Ten[m]);

				// Them CMND doc gia:
				printf(" + So CMND doc gia thu %d: ", m + 1);
				gets_s(CMND[m]);

				// Them ngay, thang, nam sinh cua doc gia:
				printf(" + Ngay thang nam sinh cua doc gia thu %d: ", m + 1);
				gets_s(NTNSinh[m]);

				// Them gioi tinh cua doc gia:
				printf(" + Gioi tinh doc gia thu %d: ", m + 1);
				gets_s(GioiTinh[m]);

				// Them dia chi email doc gia:
				printf(" + Dia chi email cua doc gia thu %d: ", m + 1);
				gets_s(Email[m]);

				// Them Dia Chi cua doc gia:
				printf(" + Dia chi cua doc gia thu %d: ", m + 1);
				gets_s(DiaChi[m]);

				// Them ngay lap the cua doc gia:
				printf(" + Nhap thoi gian lap the cua doc gia thu %d: ", m + 1);
				NgayLap();

				// Tu dong them ngay het han the cua doc gia:
				NgayHet();

				m++;
				break;
			}
		}
	}
}



//Ham sua thong tin doc gia
/*
	Nhan vao: So thu tu doc gia can chinh sua (k)
	Tra ve: Thong tin doc gia sau khi chinh sua
*/
void SuaDG(int k)
{

	if (k >= 0 && k <= m)
	{
		printf("\n					LENH SUA THONG TIN DOC GIA					\n");
		printf("\t[22]:Chinh sua ma so doc gia.\n");
		printf("\t[23]:Chinh sua ten doc gia.\n");
		printf("\t[24]:Chinh sua CMND cua doc gia.\n");
		printf("\t[25]:Chinh sua ngay, thang, nam sinh cua doc gia.\n");
		printf("\t[26]:Chinh sua gioi tinh cua doc gia.\n");
		printf("\t[27]:Chinh sua email cua doc gia.\n");
		printf("\t[28]:Chinh sua dia chi doc gia.\n");
		printf("\t[29]:Chinh sua thoi gian lap the cua doc gia.\n");
		printf("	\n");

		int sochon;
		printf("\nChon chuc nang so: ");
		scanf_s("%d", &sochon);

		if (sochon == 29)
		{
			int suangay, suathang, suanam;

			printf("\n					 Noi Dung Can Chinh Sua						\n");
			printf("Ngay lap the: ");
			scanf_s("%d", &suangay);
			printf("Thang lap the: ");
			scanf_s("%d", &suathang);
			printf("Nam lap the: ");
			scanf_s("%d", &suanam);

			ngay[k] = suangay;			//ngay lap the cua doc gia thu k se cap nhat = suangay
			thang[k] = suathang;		//thang lap the cua doc gia thu k se cap nhat = suathang
			nam[k] = suanam;			//nam lap the cua doc gia thu k se cap nhat = suanam

			ngayhet[k] = suangay;		//ngay het han = ngay lap the
			thanghet[k] = suathang;		//thang het han = thang lap the
			namhet[k] = suanam + 4;		//nam het han = nam lap the + 4(48thang)

		}
		else
		{
			fflush(stdin);
			char sua[25];
			rewind(stdin);
			printf("Nhap noi dung chinh sua: ");
			gets_s(sua);

			switch (sochon)//Dung ham strcpy de chep noi dung chuoi SUA chong len cac noi dung cua thong tin doc gia
			{
			case 22:
				strcpy_s(MaDG[k - 1], sua);
				break;
			case 23:
				strcpy_s(Ten[k - 1], sua);
				break;
			case 24:
				strcpy_s(CMND[k - 1], sua);
				break;
			case 25:
				strcpy_s(NTNSinh[k - 1], sua);
				break;
			case 26:
				strcpy_s(GioiTinh[k - 1], sua);
				break;
			case 27:
				strcpy_s(Email[k - 1], sua);
				break;
			case 28:
				strcpy_s(DiaChi[k - 1], sua);
				break;
			default:
				printf("Noi dung chinh sua khong ton tai.Vui long chon chuc nang khac!!");
				break;
			}
		}

	}
	else
		printf("Khong co du lieu. Vui long thoat va chon lai!!");
}

//Ham xem thong tin doc gia sau khi sua

/*
	Nhan vao: So thu tu doc gia can xem sau khi sua (k)
	Tra ve: Thong tin doc gia sau khi chinh sua xong
*/
void XemThongTinDGDaSua(int k)
{
	printf("\n					 Thong Tin Doc Gia Thu %d Sau Khi Chinh Sua						\n", k);

	// Xem ma so cua doc gia:
	printf("\n + Ma so doc gia thu %d: ", k);
	puts(MaDG[k - 1]);

	// Xem ten cua doc gia:
	printf(" + Ten doc gia thu %d: ", k);
	puts(Ten[k - 1]);

	// Xem so CMND cua doc gia:
	printf(" + So CMND doc gia thu %d: ", k);
	puts(CMND[k - 1]);

	// Xem ngay, thang, nam sinh cua doc gia:
	printf(" + Ngay thang nam sinh cua doc gia thu %d: ", k);
	puts(NTNSinh[k - 1]);

	// Xem gioi tinh cua doc gia:
	printf(" + Gioi tinh doc gia thu %d: ", k);
	puts(GioiTinh[k - 1]);

	// Xem Dia chi email cua doc gia:
	printf(" + Dia chi email cua doc gia thu %d: ", k);
	puts(Email[k - 1]);

	// Xem Dia Chi cua doc gia:
	printf(" + Dia chi cua doc gia thu %d: ", k);
	puts(DiaChi[k - 1]);

	// Xem ngay lap the cua doc gia:
	printf(" + Thoi gian lap the cua doc gia thu %d la: %d-%d-%d", k, ngay[k], thang[k], nam[k]);

	// Xem ngay het han the cua doc gia:
	printf("\n + Thoi gian het han the cua doc gia thu %d la: %d-%d-%d", k, ngayhet[k], thanghet[k], namhet[k]);

}


//Ham chinh sua doc gia
/*
	Nhan vao: So thu tu doc gia can chinh sua(k)
	Tra ve: Tuy chon quan ly qua trinh chinh sua
*/
void MenuTuyChonChinhSuaDG(int k)
{
	while (true)
	{
		printf("\n							 TUY CHON CHINH SUA THONG TIN DOC GIA					\n");
		printf("\t+ [30]:Thoat chinh sua.\n");
		printf("\t+ [31]:Tiep tuc chinh sua thong tin doc gia thu %d.\n", k);
		printf("\t+ [32]:Xem thong tin doc gia sau khi chinh sua.\n");
		printf("	\n");

		int sochon;
		printf("\nChon chuc nang so: ");
		scanf_s("%d", &sochon);

		if (sochon == 30)
			break;
		switch (sochon)
		{
		case 31:
			SuaDG(k);
			break;
		case 32:
			XemThongTinDGDaSua(k);
			break;
		default:
			printf("Chuc nang khong ton tai.Vui long chon lai");
			break;
		}
	}
}


//Ham xoa thong tin doc gia
/*
	Nhan vao: MaDG[MaxDG][25]; Ten[MaxDG][25]; CMND[MaxDG][25]; NTNSinh[MaxDG][25];
GioiTinh[MaxDG][25]; Email[MaxDG][25]; DiaChi[MaxDG][25]; ngay[]; thang[]; nam[]; ngayhet[]; thanghet[]; namhet[].
	Ket qua: Xoa mot doc gia trong thu vien
*/
void XoaDG(int j)
{
	int flag = 0;
	if (j > 0 && j <= m)	//Trong NhapDG sau khi m++=3 thi gap cau lenh if va break ra khoai vong lap
	{
		for (int i = j - 1; i < m - 1; i++)
		{
			//Ham strcpy de copy noi dung cac chuoi MaDG,Ten,CMND,NTNSinh,GioiTinh,Email,DiaChi chong len cac chuoi nay o vi tri truoc do
			strcpy_s(MaDG[i], MaDG[i + 1]);
			strcpy_s(Ten[i], Ten[i + 1]);
			strcpy_s(CMND[i], CMND[i + 1]);
			strcpy_s(NTNSinh[i], NTNSinh[i + 1]);
			strcpy_s(GioiTinh[i], GioiTinh[i + 1]);
			strcpy_s(Email[i], Email[i + 1]);
			strcpy_s(DiaChi[i], DiaChi[i + 1]);

			ngay[i] = ngay[i + 1];
			thang[i] = thang[i + 1];
			nam[i] = nam[i + 1];

			ngayhet[i] = ngayhet[i + 1];
			thanghet[i] = thanghet[i + 1];
			namhet[i] = namhet[i + 1];
		}
		m--;
		flag = 1;
	}
	if (flag == 1)
	{
		printf("\n					 Danh Sach Doc Gia Sau Khi Xoa						\n");
		XemDG();
	}
	else
		printf("Khong xoa duoc, vui long chon lai!");
}

//Ham tim doc gia theo cmnd
/*
	Nhan vao: So CMND cua doc gia can tim: cmnd[25]
	Tra ve: Thong tin cua doc gia can tim.
*/
void TimCMND(char cmnd[25])
{
	int flag = 0;
	for (int i = 0; i < m; i++)
	{
		rewind(stdin);
		if (strcmp(CMND[i], cmnd) == 0)	 //Ham srtcmp de so sanh 2 chuoi.Neu khop thi tra ve 0
		{
			printf("\n					 Thong Tin Doc Gia Can Tim					\n");
			// Xem ma so cua doc gia:
			printf("\n + Ma so doc gia thu %d: ", i + 1);
			puts(MaDG[i]);

			// Xem ten cua doc gia:
			printf(" + Ten doc gia thu %d: ", i + 1);
			puts(Ten[i]);

			// Xem so CMND cua doc gia:
			printf(" + So CMND doc gia thu %d: ", i + 1);
			puts(CMND[i]);

			// Xem ngay, thang, nam sinh cua doc gia:
			printf(" + Ngay thang nam sinh cua doc gia thu %d: ", i + 1);
			puts(NTNSinh[i]);

			// Xem gioi tinh cua doc gia:
			printf(" + Gioi tinh doc gia thu %d: ", i + 1);
			puts(GioiTinh[i]);

			// Xem Dia chi email cua doc gia:
			printf(" + Dia chi email cua doc gia thu %d: ", i + 1);
			puts(Email[i]);

			// Xem Dia Chi cua doc gia:
			printf(" + Dia chi cua doc gia thu %d: ", i + 1);
			puts(DiaChi[i]);

			// Xem ngay lap the cua doc gia:
			printf(" + Thoi gian lap the cua doc gia thu %d la: %d-%d-%d", i + 1, ngay[i], thang[i], nam[i]);

			// Xem ngay het han the cua doc gia:
			printf("\n + Thoi gian het han the cua doc gia thu %d la: %d-%d-%d", i + 1, ngayhet[i], thanghet[i], namhet[i]);

			flag = 1;
		}
	}
	if (flag != 1)
		printf("\nKhong tim thay!");
}

//Ham tim doc gia theo ho va ten
/*
	Nhan vao: Ho va ten doc gia can tim
	Ket qua: Thong tin cua doc gia can tim.
*/
void TimTen(char hoten[25])
{
	int flag = 0;
	for (int i = 0; i < m; i++)
	{
		if (strcmp(Ten[i], hoten) == 0)	//Dung ham srtcmp de so sanh 2 chuoi.Neu khop thi tra ve 0
		{

			printf("\n						 Thong Tin Doc Gia Can Tim						\n");
			// Xem ma so cua doc gia:
			printf("\n + Ma so doc gia thu %d: ", i + 1);
			puts(MaDG[i]);

			// Xem ten cua doc gia:
			printf(" + Ten doc gia thu %d: ", i + 1);
			puts(Ten[i]);

			// Xem so CMND cua doc gia:
			printf(" + So CMND doc gia thu %d: ", i + 1);
			puts(CMND[i]);

			// Xem ngay, thang, nam sinh cua doc gia:
			printf(" + Ngay thang nam sinh cua doc gia thu %d: ", i + 1);
			puts(NTNSinh[i]);

			// Xem gioi tinh cua doc gia:
			printf(" + Gioi tinh doc gia thu %d: ", i + 1);
			puts(GioiTinh[i]);

			// Xem Dia chi email cua doc gia:
			printf(" + Dia chi email cua doc gia thu %d: ", i + 1);
			puts(Email[i]);

			// Xem Dia Chi cua doc gia:
			printf(" + Dia chi cua doc gia thu %d: ", i + 1);
			puts(DiaChi[i]);

			// Xem ngay lap the cua doc gia:
			printf(" + Thoi gian lap the cua doc gia thu %d la: %d-%d-%d", i + 1, ngay[i], thang[i], nam[i]);

			// Xem ngay het han the cua doc gia:
			printf("\n + Thoi gian het han the cua doc gia thu %d la: %d-%d-%d", i + 1, ngayhet[i], thanghet[i], namhet[i]);

			flag = 1;
		}
	}
	if (flag != 1) printf("\nKhong tim thay");
}
//Ham dem so luong doc gia trong thu vien
/*
	Nhan vao: tham so m
	Tra ve: So luong doc gia trong thu vien
*/
int TKDGTV()
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		dem++;
	}
	return dem;
}

//Ham thong ke so luong doc gia theo gioi tinh
/*
	Nhan vao: tham so m
	Tra ve: So luong doc gia trong thu vien theo gioi tinh
*/
void TKDGGT()
{
	int dem;
	for (int i = 0; i < m; i++)	
	{
		dem = 0;
		for (int j = 0; j < m; j++)	
		{
			if (strcmp(GioiTinh[i], GioiTinh[j]) == 0)	 //Dung ham srtcmp de so sanh 2 chuoi.Neu khop thi tra ve 0
			{
				if (i <= j)	//Dieu kien de chay bien dem
					dem++;
				else
					break;
			}
		}
		if (dem != 0)
			printf("Gioi tinh %s co so luong doc gia la: %d\n", GioiTinh[i], dem);
	}

}