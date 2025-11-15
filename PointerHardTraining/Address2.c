//
//  Address2.c
//  PointerHardTraining
//
//  Created by a on 11/16/25.
//

#include "Address2.h"

//int main(void)
//{
//    char c = 'a';
//    int i = 0x12345678;
//    double phi = 3.14;
//    
//    char *p_c = &c;
//    int *p_i = &i;
//    double *p_phi = &phi;
//    
//    char *p_c2 = &i;
//    
//    printf("===============================================\n");
//    printf("자료형 char(%d bytes)  :  변수 c의 값은 %c(%d),    주소는 %p\n", sizeof(c), c, c, &c);
//    printf("자료형 int(%d bytes)   :  변수 i의 값은 0x%04x, 주소는 %p\n", sizeof(i), i, &i);
//    printf("자로형 double(%d bytes) : 변수 phi의 값은 %lf, 주소는 %p\n", sizeof(phi), phi, &phi);
//    printf("===============================================\n");
//    printf("자료형 char(%d bytes) 포인터 변수 p_c의 주소는 %p\n", sizeof(p_c), &p_c);
//    printf("자료형 int(%d bytes) 포인터 변수 p_i의 주소는 %p\n", sizeof(p_i), &p_i);
//    printf("자료형 double(%d bytes) 포인터 변수 p_phi의 주소는 %p\n", sizeof(p_phi), &p_phi);
//    printf("자료형 char(%d bytes) 포인터 변수 p_c2의 주소는 %p\n", sizeof(p_c2), &p_c2);
//    printf("===============================================\n");
//    printf("포인터 변수 p_c의 값은 %p, p_i의 값은 %p\n", p_c, p_i);
//    printf("포인터 변수 p_phi의 값은 %p, p_c2의 값은 %p\n", p_phi, p_c2);
//    printf("===============================================\n");
//    // (p_i-2) p_i의 8byte만큼 뒤쪽주소를 가리킴 *(p_i-2) 주소의 실제 값을 가리키고 만약 값이 존재하지 않는다면 쓰레기값이 들어있다
//    printf("포인터 변수 p_i-2 주소는 %p 값은 0x%04X\n", (p_i-2), *(p_i-2));
//    printf("포인터 변수 p_i-1 주소는 %p 값은 0x%04X\n", (p_i-1), *(p_i-1));
//    printf("포인터 변수 p_i 주소는 %p 값은 0x%04X\n", p_i, *p_i);
//    printf("포인터 변수 p_i+1 주소는 %p 값은 0x%04X\n", (p_i+1), *(p_i+1));
//    printf("포인터 변수 p_i+2 주소는 %p 값은 0x%04X\n", (p_i+2), *(p_i+2));
//    printf("===============================================\n");
//    printf("포인터 변수 p_c2-2 주소는 %p, 값은 0x%X\n", (p_c2-2), *(p_c2-2));
//    printf("포인터 변수 p_c2-1 주소는 %p, 값은 0x%X\n", (p_c2-1), *(p_c2-1));
//    printf("포인터 변수 p_c2 주소는 %p 값은 0x%X\n", p_c2, *p_c2);
//    printf("포인터 변수 p_c2+1 주소는 %p, 값은 0x%X\n", (p_c2+1), *(p_c2+1));
//    printf("포인터 변수 p_c2+2 주소는 %p, 값은 0x%X\n", (p_c2+2), *(p_c2+2));
//    printf("포인터 변수 p_c2+3 주소는 %p, 값은 0x%X\n", (p_c2+3), *(p_c2+3));
//    printf("포인터 변수 p_c2+4 주소는 %p, 값은 0x%X\n", (p_c2+4), *(p_c2+4));
//    
//    return 0;
//}
