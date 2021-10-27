#include <stdio.h>
#include <string.h>

char function_choice();
void add_product();
void update_product();
void delete_product();
struct Product;
void hienThiDSSP(struct Product*, int);
void hienThiTenCot();



struct Product {
	char ID_product;
	char Name_product;
	float Price_product;
	int sale;
};

void add_product(struct Product* SP) {
	printf("ID: ");
	scanf("%c", &SP->ID_product);
	printf("Name: ");
	scanf("%c", &SP->Name_product);
	printf("Price: ");
	scanf("%f", &SP->Price_product);
	printf("sale: ");
	scanf("%d",&SP->Price_product);
		getchar();
	

}

void hienThiTTSP(struct Product sp) {
	printf("%-10c %-10c %-20f %-10d\n", sp.ID_product , sp.Name_product , sp.Price_product , sp.sale  );
}

//void sapXepTheoTen(struct SinhVien* ds, int slsv) {
//	int i, j;
//	for(i = 0; i < slsv - 1; i++) {
//		for(j = slsv - 1; j > i; j --) {
//			if(strcmp(ds[j].hoVaTen.ten, ds[j-1].hoVaTen.ten) < 0) {
//				struct SinhVien sv = ds[j];
//				ds[j] = ds[j - 1];
//				ds[j - 1] = sv;
//			}
//		}
//	}
//}

//void sapXepTheoDiem(struct SinhVien* ds, int slsv) {
//	int i, j;
//	for(i = 0; i < slsv - 1; i++) {
//		for(j = slsv - 1; j > i; j --) {
//			if(ds[j].diem.tbc > ds[j - 1].diem.tbc) {
//				struct SinhVien sv = ds[j];
//				ds[j] = ds[j - 1];
//				ds[j - 1] = sv;
//			}
//		}
//	}
//}

//void timTheoTen(struct SinhVien* ds, int slsv) {
//	char ten[20];
//	printf("Nhap ten: ");
//	scanf("%s", ten);
//	hienThiTenCot();
//	int i, timSV = 0;
//	for(i = 0; i < slsv; i++) {
//		if(strcmp(ten, ds[i].hoVaTen.ten) == 0) {
//			hienThiTTSV(ds[i]);
//			timSV = 1;
//		}
//	}
//	if(timSV == 0) {
//		printf("Khong co sinh vien %s trong danh sach!\n", ten);
//	}
//}

void ghiFile(struct Product int slsp) {


	getchar();
	
	FILE* fOut = fopen("product.txt","a");
	int i;
	for(i = 0; i <  100; i++) {
		struct Productint sp= ds[i];
		fprintf(fOut,"%-10c %-10c %-20f %-10d\n", sp.ID_product.SP, sp.Name_product.SP, sp.Price_product.SP, sp.sale.SPc);
	}
	fclose(fOut);
}

void docFile(struct Product* ds, int* slsp) {
	FILE* fOut = fopen("product.tx", "r");
	int i = 0;
	if(fOut) {
		for(;;) {
			struct SinhVien sp;
			fscanf("%-10c %-10c %-20f %-10d\n", sp.ID_product.SP, sp.Name_product.SP, sp.Price_product.SP, sp.sale.SPc);
			
			ds[i++] = sv;
			if(feof(fOut)) { // thoat chuong trinh
				break;
			}
		}
	}
	
	fclose(fOut);
	*slsp = i;
}

char function_choice()
{	
	char choice;
	system("cls");
//	printf("Order Management System\n");
//	printf("=======================\n");	

	printf("\na) Add new product");
	printf("\nb) Update a product");		
	printf("\nc) Delete a product");
	printf("\nq) Quit\n");

//	printf("\n---\n");
//	printf("Enter a letter (a, b, ..) to select the corresponding function: ");

	fflush(stdin);
	choice = getchar();
	system("cls");

	return choice;
}

//void hienThiTenCot() {
//	printf("-----------------------------------------------------"
//	"----------------------------------------------------------------\n");
//	printf("%-10s %-10s %-20s %-10s %-10s %-10s %-10s %-10s %-10s %-10s\n", 
//		"Ma SV", "Ho", "Dem", "Ten", "Tuoi", "Gioi Tinh", 
//		"Diem Toan", "Diem Van", "Diem Anh", "Diem TBC");
//}

//void hienThiDSSV(struct SinhVien* ds, int slsv) {
//	hienThiTenCot();
//	int i;
//	for(i = 0; i < slsv; i++) {
//		hienThiTTSV(ds[i]);
//	}
//	printf("-----------------------------------------------------"
//	"----------------------------------------------------------------\n");
//}

int main() {
	struct Product dssp[100];
	int slsp = 0;
	int luaChon;
	char choice;
	docFile(dssp, &slsp);

	hienThiDSSP(dssp, slsp);
	int i;
				
	do {
	;
		
		choice = function_choice();
		struct Product sp;
		
		switch(choice) {
			
			case 'a':
				add_product();
				break;
			case 'b':
				update_product();	
				break;
			case 'c':
				delete_product();						
		}

		if (choice != 'q')
		{			
			printf("\n\n---\n");
			printf("Press any key to back to main menu.");
//			getch();
		}		
	} while (choice != 'q');   	 


	return 0;
}


