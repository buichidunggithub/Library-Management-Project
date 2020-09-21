#include "QuanLyDocGia.h"
#include "QuanLySach.h"
#include "PhieuMuonTraSach.h"

#define MaxDG 300		//Khai bao so luong doc gia toi da

#define MaxSach 1000	//Khai bao so luong sach toi da

int main()
{
	printf("\nXin nhap thong tin hay yeu cau \n");

	//Nhap thong tin cua 3 doc gia dau tien
	
	printf("\n				NHAP THONG TIN CUA BA DOC GIA DAU TIEN				\n");
	NhapDG();

	//Nhap thong tin cua 3 quyen sach dau tien
	
	printf("\n				NHAP THONG TIN CUA BA QUYEN SACH DAU TIEN				\n");
	NhapSach();

	printf("\Hay nhap cac ky tu so o dau moi dong yeu cau trong cac menu lenh de thuc hien chuc nang");
	printf("\n");

	while (true)
	{
		printf("\n	\n");
		printf("					CAC LENH QUAN LY THU VIEN					\n");
		printf("	");
		printf("\n");
		printf("\t+ [0]:Thoat chuong trinh.\n");


		//Quan Ly Doc Gia
		
		printf("\t[1]:Xem thong tin doc gia.\n");
		printf("\t[2]:Them thong tin mot doc gia.\n");
		printf("\t[3]:Chinh sua thong tin mot doc gia.\n");
		printf("\t[4]:Xoa thong tin mot doc gia.\n");
		printf("\t[5]:Tim doc gia theo CMND.\n");
		printf("\t[6]:Tim doc gia theo Ho va Ten.\n");
		printf("\t[7]:Thong ke so luong doc gia trong thu vien.\n");
		printf("\t[8]:Thong ke so luong doc gia theo gioi tinh trong thu vien.\n");
		printf("\t[9]:Thong ke so luong doc gia tre han.\n");
		printf("\n");


		//Quan Ly Sach Thu Vien
		
		printf("\t[11]:Xem thong tin sach.\n");
		printf("\t[12]:Cap nhat thong tin sach.\n");
		printf("\t[13]:Chinh sua thong tin sach.\n");
		printf("\t[14]:Xoa thong tin mot quyen sach.\n");
		printf("\t[15]:Tim sach theo ISBN.\n");
		printf("\t[16]:Tim sach theo ten sach.\n");
		printf("\t[17]:Thong ke so luong sach trong thu vien.\n");
		printf("\t[18]:Thong ke so luong sach theo the loai trong thu vien.\n");
		printf("\t[19]:Thong ke so luong sach duoc muon trong thu vien.\n");
		printf("\n");

		//Quan Ly The Muon Tra Sach
		
		printf("\t[10]:Lap phieu muon tra sach.\n");
		printf("\n--------------------------------------------------------------------------\n");

		int sochon;
		printf("Chon chuc nang so: ");
		scanf_s("%d", &sochon);

		if (sochon == 0)
			break;
		switch (sochon)
		{
		case 1:
			XemDG();
			printf("\n------------------------------------------------------------------------------\n");
			break;
		case 2:
			ThemDG();
			printf("\n-------------------------------------------------------------------------------\n");
			break;
		case 3:
			int k;
			printf("Nhap so thu tu cua doc gia can chinh sua: ");
			scanf_s("%d", &k);
			MenuTuyChonChinhSuaDG(k);
			printf("\n--------------------------------------------------------------------------\n");
			break;
		case 4:
			int j;
			printf("Nhap so thu tu cua doc gia can xoa: ");
			scanf_s("%d", &j);
			XoaDG(j);
			printf("\n--------------------------------------------------------------------------\n");
			break;
		case 5:
			char cmnd[25];
			rewind(stdin);
			printf("Nhap so CMND cua doc gia can tim: ");
			fflush(stdin);
			gets_s(cmnd);
			TimCMND(cmnd);
			printf("\n--------------------------------------------------------------------------\n");
			break;
		case 6:
			rewind(stdin);
			char hoten[25];
			printf("Nhap Ho va Ten cua doc gia can tim: ");
			fflush(stdin);
			gets_s(hoten);
			TimTen(hoten);
			printf("\n--------------------------------------------------------------------------\n");
			break;
		case 7:
			printf("So luong doc gia trong thu vien la: %d", TKDGTV());
			printf("\n--------------------------------------------------------------------------\n");
			break;
		case 8:
			TKDGGT();
			printf("\n--------------------------------------------------------------------------\n");
			break;
		case 9:
			printf("So luong doc gia tra sach tre han la: %d", TKDGTreHan());
			printf("\n--------------------------------------------------------------------------\n");
			break;

		case 11:
			XemSach();
			printf("\n---------------------------------------------------------------------------\n");
			break;
		case 12:
			ThemSach();
			printf("\n--------------------------------------------------------------------------\n");
			break;
		case 13:
			int h;
			printf("Nhap so thu tu cua quyen sach can chinh sua: ");
			scanf_s("%d", &h);
			MenuTuyChonChinhSuaSach(h);
			printf("\n--------------------------------------------------------------------------\n");
			break;
		case 14:
			int d;
			printf("Nhap so thu tu cua quyen sach can xoa: ");
			scanf_s("%d", &d);
			XoaSach(d);
			printf("\n--------------------------------------------------------------------------\n");
			break;
		case 15:
			char isbn[25];
			rewind(stdin);
			printf("Nhap ISBN cua quyen sach can tim: ");
			fflush(stdin);
			gets_s(isbn);
			TimISBN(isbn);
			printf("\n--------------------------------------------------------------------------\n");
			break;
		case 16:
			char sach[25];
			rewind(stdin);
			printf("Nhap Ten cua quyen sach can tim: ");
			fflush(stdin);
			gets_s(sach);
			TimTheoTenSach(sach);
			printf("\n--------------------------------------------------------------------------\n");
			break;
		case 17:
			printf("So luong sach trong thu vien la: %d", TKSachTV());
			printf("\n--------------------------------------------------------------------------\n");
			break;
		case 18:
			TKSachTL();
			printf("\n--------------------------------------------------------------------------\n");
			break;
		case 19:
			printf("So luong sach duoc muon la: %d", TKSachMuon());
			printf("\n--------------------------------------------------------------------------\n");
			break;

		case 10:
			LapPhieuMuonTra();
			printf("\n--------------------------------------------------------------------------\n");
			break;

		default:
			printf("Chuc nang khong ton tai. Vui long chon lai");
			break;
		}
	}

	return 0;
}  