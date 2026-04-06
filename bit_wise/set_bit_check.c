#include <stdio.h>

int main(void)
{


    unsigned int ui_Num = 0;
    unsigned int pos = 0;

    printf("Enter Number and postion:-");
    scanf("%d%d",&ui_Num, &pos);
    if(ui_Num >> pos & 1)
        puts("Set");
    else
        puts("unset");


      ui_Num = ui_Num | 1 << pos -1;

    for(int i = 31; i >=0 ; i--)
    {
        printf("%d", (ui_Num >> i & 1));
    }

      ui_Num = ui_Num & ~(1 << pos - 1);

    for(int i = 31; i >=0 ; i--)
    {
        printf("%d", (ui_Num >> i & 1));
    }



    return 0;
}