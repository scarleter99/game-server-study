#include <iostream>

using namespace std;

void assn1(unsigned char c)
{
	printf("%d의 바이너리: ", c);

	unsigned char temp = 1 << 7;
	for(int i = 0; i < 8; ++i)
	{
		if (c & temp)
			printf("1");
		else
			printf("0");

		temp >>= 1;
	}
}

void assn2() 
{
	int bitIdx;
	int on;
	unsigned short data = 0;

	while (1) {
		printf("비트위치(1~16): ");
		scanf_s("%d", &bitIdx);

		printf("OFF/ON [0,1] :");
		scanf_s("%d", &on);

		if (on) {
			data |= 1 << (bitIdx - 1);
		}
		else {
			data &= ~(1 << (bitIdx - 1));
		}

		for (int i = 15; i >= 0; --i) {
			const char* c = (data & (1 << i)) ? "ON" : "OFF";
			printf("%d번 Bit: %s\n", i + 1, c);
		}
	}
}

void assn3()
{
	int byteIdx;
	int tempByte;
	unsigned int data = 0;

	while (1) {
		printf("바이트위치 (1~4): ");
		scanf_s("%d", &byteIdx);

		printf("값 [0~255] :");
		scanf_s("%d", &tempByte);

		data &= ~(0xFF << ((byteIdx - 1) * 8));
		data |= tempByte << (byteIdx - 1) * 8;

		for (int i = 0; i < 4; ++i) {
			unsigned char c = (data >> (8 * i)) & 0xFF;
			printf("%d번째 Byte: %d\n", i + 1, c);
		}

		printf("전체 4바이트 값: 0x%08x\n", data);
	}
}

int main()
{
	//assn1(40);
	//assn2();
	assn3();
}
