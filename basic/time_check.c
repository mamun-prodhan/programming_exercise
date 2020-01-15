#include<stdio.h>

void check_time(int a);

int main()
{
    int sec = 26665;
    int min,hour;


    hour = sec/3600;
    sec = sec%3600;

    min = sec / 60;
    sec = sec % 60;

    check_time(hour);
    printf(":");
    check_time(min);
    printf(":");
    check_time(sec);


    return 0;
}

void check_time(int a)
{
    if(a<10){
        printf("0%d",a);
    }
    else{
        printf("%d",a);
    }
}
