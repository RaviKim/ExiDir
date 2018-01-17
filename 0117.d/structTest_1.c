#include <stdio.h>
#include <string.h>


struct tagAddress{
	char name[30];
	char phone[20];
	char address[100];
}; // 



void main(void){
	struct tagAddress ad;

	strcpy(ad.name, "Ravi");
	strcpy(ad.phone, "010-1234-5678");
	strcpy(ad.address, "Korea, seoul");

	printf("Name : %s\n", ad.name);
	printf("Phone : %s\n", ad.phone);
	printf("Address : %s\n", ad.address);

}
