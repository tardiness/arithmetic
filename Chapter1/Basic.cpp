//
// Created by Administrator on 2019/1/4.
//

#include "Basic.h"
#include <stdio.h>
#include <math.h>

int Basic::rabbit() {
    int a,b,n,m;
    scanf("%d%d",&n,&m);
    a = (4*n - m) / 2;
    b = n - a;
    if (m%2 == 1 || a  < 0 || b < 0) {
        printf("no answer");
    } else {
        printf("%d %d",a,b);
    }
    return 0;
}

int Basic::test() {
    int a = 12121212121121212;
    printf("%d",a);
    return 0;
}
