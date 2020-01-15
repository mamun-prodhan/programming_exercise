#include<stdio.h>
int main()
{
    char
        username[50],
        password[50],
        full_name[50],
        phone[15];
    float cgpa;
    int age,i=0;

    scanf("%s",&username);
    printf("%s\n",username);

    scanf("%d");//clearing input buffer

    gets(full_name);
    puts(full_name);

    scanf("%d",&age);
    printf("%d\n",age);

    scanf("%f",&cgpa);
    printf("%.2f\n",cgpa);

    scanf("%s",&phone);
    printf("%s",phone);


    return 0;
}

