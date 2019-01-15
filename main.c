#include <stdio.h>

int main()
{
    char arr[1024];
    int index = 0;
    printf("jinruminganzifuguanlixitong:\n");
    while (1)
    {
        printf("1---tijiayigemingan:\n");
        printf("2---shanchuzuihouyigeminganzifuminganzifu:\n");
        printf("3---xianshiyitianjiademinganzifu:\n");
        printf("4---tihuanminganzifu:\n");
        printf("5---tuichu:\n");
        printf("qingshuruxiangdegongnengbianhao:\n");
        int a;
        scanf("%d", &a);

        if (a == 1)
        {
            char m;
            char x;
            printf("qingshuruyaochucundeminganzifu:\n");
            scanf("%c", &m);
            scanf("%c", &m);
            arr[index] = m;
            index = index + 1;
            printf("tianjiachengogong,dianjihuichejixu:\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 2)
        {
            char x;
            printf("shanchuzuihouyigeminganzifu:\n");
            index = index - 1;
            printf("shanchuchenggong,dianjihuichejixu:\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 3)
        {
            printf("xianshisuoyoudeminganzifu:\n");
            for (int i = 0; i < index; i++)
            {
                printf("%c\n",arr[i]);
            }
                printf("dianjihuichejixu:\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            
        }
        if (a == 4)
        {
        }
        if (a == 5)
        {
        }
    }

    return 0;
}