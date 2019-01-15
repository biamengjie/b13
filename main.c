#include <stdio.h>
char arr[1024];
int index =0;
int isMingan(char x)
{
    int count = 0;
    for (int i = 0; i < index; i++)
    {
        if (x == arr[i])
        {
            count++;
        }
    }
    if (count == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{

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
                printf("%c\n", arr[i]);
            }
            printf("dianjihuichejixu:\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 4)
        {

            char neirong[1024];
            scanf("%s", neirong);
            for (int i = 0;1;i++)
            {
                if (neirong[i] == '\0')
                {
                    break;
                }
                if (isMingan(arr[i]) == 1)
                {
                    neirong[i]='*';
                    }
                    printf("%c",neirong[i]);

                }
                printf("\n");
                printf("tihuanwancheng,dijihuichejixu:\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            if (a == 5)
            {
                printf("chengxujieshu:\n");
            }
        }

        return 0;
    }