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
    FILE *fp1,*fp2;
    fp1=fopen("//Users//a20161104596//Desktop//gps.//GPS170510.log","r+");
    fp2=fopen("//Users//a20161104596//Desktop//gps.//gps.xls","w");
    char str1[70];
    char str2[70];
    char lat[88];
    char time[88];
    char lon[88];
    char v[88];
    char head[88];
    char date[88];
    char number[88];
    char state[88]; //GPS状态， 0初始化， 1单点定位， 2码差分， 3无效PPS， 4固定解， 5浮点解， 6正在估算 7，人工输入固定值， 8模拟模式， 9WAAS差分
    char height[88];
    int i;
    while(fscanf(fp1,"%s%s",str1,str2)!=EOF)
    {
        printf("结果：%s\n%s\n",str1,str2);
        fprintf(fp2,"结果：%s\n%s\n",str1,str2);
        for(i=0;i<8;i++)
            lat[i]=str1[i+16];
        lat[8]='\0';
        printf("纬度：%s\n",lat);
        fprintf(fp2,"纬度：%s\n",lat);
        for(i=0;i<6;i++)
            time[i]=str1[i+7];
        time[6]='\0';
        printf("时间：%s\n",time);
        fprintf(fp2,"时间：%s\n",time);
            for(i=0;i<9;i++)
            lon[i]=str1[i+27];
        lon[9]='\0';
        printf("经度：%s\n",lon);
        fprintf(fp2,"经度：%s\n",lon);
        for(i=0;i<5;i++)
            v[i]=str1[i+39];
        v[5]='\0';
        printf("地面速率：%s\n",v);
        fprintf(fp2,"地面速率：%s\n",v);
        for(i=0;i<5;i++)
            head[i]=str1[i+45];
        head[5]='\0';
        printf("地面航向：%s\n",head);
        fprintf(fp2,"地面航向：%s\n",head);
        for(i=0;i<6;i++)
            date[i]=str1[i+51];
        date[6]='\0';
        printf("日期：%s\n",date);
        fprintf(fp2,"日期：%s\n",date);
        for(i=0;i<8;i++)
            lat[i]=str2[i+14];
        lat[8]='\0';
        printf("纬度：%s\n",lat);
        fprintf(fp2,"纬度：%s\n",lat);
        for(i=0;i<6;i++)
            time[i]=str2[i+7];
        time[6]='\0';
        printf("时间：%s\n",time);
        fprintf(fp2,"时间：%s\n",time);
        for(i=0;i<9;i++)
            lon[i]=str2[i+25];
        lon[9]='\0';
        printf("经度：%s\n",lon);
        fprintf(fp2,"经度：%s\n",lon);
        for(i=0;i<1;i++)
            state[i]=str2[i+37];
        state[9]='\0';
        printf("状态：%s\n",state);
        fprintf(fp2,"状态：%s\n",state);
        for(i=0;i<2;i++)
            number[i]=str2[i+39];
        number[2]='\0';
        printf("卫星数量：%s\n",number);
        fprintf(fp2,"卫星数量：%s\n",number);
        for(i=0;i<5;i++)
            height[i]=str2[i+43];
        height[4]='\0';
        printf("海拔高度：%s\n",height);
        fprintf(fp2,"海拔高度：%s\n",height);
    }
    fclose(fp1);
    return 0;
}
