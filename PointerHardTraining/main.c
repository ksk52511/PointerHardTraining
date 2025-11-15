////
////  main.c
////  PointerHardTraining
////
////  Created by a on 11/16/25.
////
//
//#include <stdlib.h>
//#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//    // 메모리의 저장장소 위치를 나타내는 주소값
//    // 주소값이 바이트단위로 1씩 증가하도록 연속 적인 번호로 구성
//    
//    // 변수의 주소 값을 알아내려면 &(ampersand) 사용
//    int age;
//    scanf("%d", &age);
//    // 변수의 주소값 출력 16진수 출력시 %p 10진수 출력시 %u
//    printf("%p, %u", &age, &age); // 0x16fdfee4c, 1876946508
//    
//    /**
//     변수 유형에 따라서 차지하는 메모리 공간이 다름
//     char: 1byte
//     int: 4byte
//     float: 4byte
//     double: 8byte
//     */
//    
//    char c = 69;
//    int i = 10;
//    float f = 12.3f;
//    
//    printf("c의 주소: %u\n", &c);
//    printf("i의 주소: %p\n", &i);
//    printf("f의 주소: %p\n", &f);
//    return EXIT_SUCCESS;
//}
