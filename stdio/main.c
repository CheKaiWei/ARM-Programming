
#include "stdio.h"
#include "serial.h"


int main(void)
{
	int i = 0;
	
	char str[100];
		
	init_uart( );	//������57600��8N1(8������λ����У��λ��1��ֹͣλ)

	printf("\n\rStart : \n\r");
	
	while(1)
	{
		printf("Enter a value : \n\r");
		scanf("%s", str);
		sscanf(str,"%d", &i);
		printf("print interger : %d, 0x%x\n\r", i, i);
	}

	return 0;
}
