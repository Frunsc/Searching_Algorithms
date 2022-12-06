#include <stdio.h>


int binarysearch(int array[],int num,int h,int l, int m)
{
    while (l < h)
    {

        m = (l + h-1)/ 2;

        if (num == array[m])       return m;

        else if (array[m] < num)      l = m +1;

        else h = m;
    }
return -1;
}



int main()
{
    int l = 0;   
    int m =0;
    int array[] = {1,3,7,9,11,12,15,30,36,38,41,45,49,57,68};
    int num;
    printf("{1,3,7,9,11,12,15,30,36,38,41,45,49,57,68} dizisinden sirasini ogrenmek istediginiz sayiyi seciniz.\n");
    scanf("%d",&num);
    int h = sizeof(array)/ sizeof(array[0]);
    int result = binarysearch(array,num,h,l,m) + 1;

    if (result == 0) printf("sayi dizide degil");
    else printf("%d. sirada",result);

    return 0;
}
