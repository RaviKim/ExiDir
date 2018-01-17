/* 최초의 함수 형태는 struct tagAddress print(struct tagAddress *pad) 가 아닌, void print(struct tagAddress *pad) 의 형태였음. 하지만 type에러가 우분투에서 발생하여 이를 수정함. 이와 관련하여 다른 운영체제에서 컴파일을 하였을때 동일하게 진행이 되어지는지에 대한 확인이 필요함.
 *
 *
 * */
#include <stdio.h>
#include <string.h>



struct tagAddress print(struct tagAddress *pad);

struct tagAddress{
	char name[30];
	char phone[20];
	char address[100];
};


void main(void){
	struct tagAddress ad;

	strcpy(ad.name, "Hing-Guo");
	strcpy(ad.phone, "010-1234-5678");
	strcpy(ad.address, "Korea, Seoul");

	print(&ad);
}

struct tagAddress print(struct tagAddress *pad){
	printf("Name : %s\n", pad->name);
	printf("Phone : %s\n", pad -> phone);
	printf("Address : %s\n", pad -> address);
}
