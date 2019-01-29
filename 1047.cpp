//
//  1047.cpp
//  dimigo_2nd_assignment
//
//  Created by 엄서훈 on 2019. 1. 14..
//  Copyright © 2019년 uhmseohun. All rights reserved.
//

#include <stdio.h>

int main() {
    int h, w, o;
    scanf("%d %d", &h, &w);
    o = w+100-h;
    printf("비만수치는 %d입니다.\n", o);
    if(o>0) {
        puts("당신은 비만이군요.");
    }
    return 0;
}
