//
//  Address1.c
//  PointerHardTraining
//
//  Created by a on 11/16/25.
//

#include "Address1.h"

//void main(void)
//{
//    char c = 'a';
//    int i = 100;
//    double phi = 3.14;
//    
//    printf("char(%d bytes) : 변수 c의 값은 %c(%d), 주소는 %p\n", sizeof(c), c, c, &c);
//    printf("int(%d bytes) : 변수 i의 값은 0x%04X, 주소는 %p\n", sizeof(i), i, &i);
//    printf("double(%d bytes) : 변수 phi의 값은 %lf, 주소는 %p\n", sizeof(phi), phi, &phi);
//}

/**
 포인터 변수의 크기는 운영체제가 몇 비트를 사용하느냐에 결정됨
 16 Bit Dos System: 2Bytes
 32 Bit Windows System: 4Bytes
 64 Bit Windows System: 8Bytes
 
 가리키는 대상의 크기가 1바이트지만 포인터 변수는 4Bytes를 차지함
 69 - 0012FF7D
 10 - 0012FF7C ~ 0012FF79(4bytes)
 0012FF7D(*pc) - 0012FF78~0012FF75
 0012FF79(*pi) - 0012FF74~0012FF71
 
 Endian(엔디안)
 컴퓨터의 메모리에 연속된 대상을 배열하는 방법
 Ex) 12 -> 2진수 1100
 - Big-Endian : 1100
 - Little_Endian : 0011
 Little-Endian은 일반적인 방식에서 거꾸로 값을 해석한다
 */

//int main(void)
//{
//    char c = 69;
//    int i = 10;
//
//    char *pc = &c;
//    int *pi = &i;
//}
