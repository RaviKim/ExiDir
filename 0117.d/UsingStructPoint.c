#include <stdio.h>
#include <string.h>

struct tagAddress{
	char name [30];
	char phone[20];
	char address[100];
};

void main(void){
	struct tagAddress ad;
	struct tagAddress *pad;

	pad = &ad;

	strcpy((*pad).name, "Hong-Gil-Dong");
	strcpy((*pad).phone, "010-1234-5679");
	strcpy((*pad).address, "Seoul, London");

	printf("Name : %s\n", pad->name);
	printf("Phone : %s\n", pad->phone);
	printf("Address : %s\n",pad->address);
}
