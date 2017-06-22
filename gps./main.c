//
//  main.c
//  gps.
//
//  Created by 20161104596 on 17/6/16.
//  Copyright © 2017年 20161104596. All rights reserved.
//

#include <stdio.h>

int main()
{
    FILE *fp1;
    fp1=fopen("//Users//a20161104596//Desktop//gps.//GPS170510.log","r+");
    char str1[70];
    char str2[70];
    char lat[9];
    char time[6];
    int i;
    fscanf(fp1,"%s%s",str1,str2);
    printf("结果：%s\n%s\n",str1,str2);
    for(i=0;i<8;i++)
        lat[i]=str1[i+16];
    lat[8]='\0';
    printf("纬度：%s\n",lat);
    for(i=0;i<6;i++)
        lat[i]=str1[i+7];
    lat[6]='\0';
    printf("时间：%s\n",lat);
    for(i=0;i<9;i++)
        lat[i]=str1[i+27];
    lat[9]='\0';
    printf("经度：%s\n",lat);
    for(i=0;i<5;i++)
        lat[i]=str1[i+39];
    lat[5]='\0';
    printf("地面速率：%s\n",lat);
    for(i=0;i<5;i++)
        lat[i]=str1[i+45];
    lat[5]='\0';
    printf("地面航向：%s\n",lat);
    for(i=0;i<6;i++)
        lat[i]=str1[i+51];
    lat[6]='\0';
    printf("日期：%s\n",lat);
    fclose(fp1);
    return 0;
}
