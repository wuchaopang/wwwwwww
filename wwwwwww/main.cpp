//
//  main.cpp
//  wwu
//
//  Created by 20141105049 on 15/11/11.
//  Copyright © 2015年 20141105049. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a[4];
    int *p;
    a[0]=10;
    a[1]=20;
    a[2]=30;
    a[3]=50;
    p=a;
    printf("&a[0]=%x,&a[1]=%x,&a[2]=%x,&[3]=%x,a=%x,*p=%x\n",a[0],a[1],a[2],a[3],a,p);
    printf("&a[0]=%d,&a[1]=%d,&a[2]=%d,&a[3]=%d,a=%d,*p=%d\n",a[0],a[1],a[2],a[3],a,p);

    
    return 0;
}
