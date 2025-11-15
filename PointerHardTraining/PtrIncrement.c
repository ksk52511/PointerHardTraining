//
//  PtrIncrement.c
//  PointerHardTraining
//
//  Created by a on 11/16/25.
//

#include "PtrIncrement.h"

int main(void)
{
    int i = 0, aryLength;
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
    int point[] = {95, 88, 76, 54, 85, 33, 65, 78, 99, 82};
    int *iPtr = point;
    aryLength = sizeof(point) / sizeof(int);
    
    printf("배열 point[i]를 이용하여 원소 값을 출력\n");
    for (i = 0; i < aryLength; i++) {
        printf("%d%s", point[i], i == aryLength-1 ? "\n\n" : ", ");
        sum1 += point[i];
        sum2 += *(point + i);
        sum3 += iPtr[i];
        sum4 += *(iPtr + i);
    }
    printf("여러 방법으로 구한 합은 각각 %d, %d, %d, %d, ", sum1, sum2, sum3, sum4);
    for (i = 0; i < aryLength; i++) {
        sum5 += *iPtr++;
    }
    printf("%d\n", sum5);
}
