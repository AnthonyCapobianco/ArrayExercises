# include <stdio.h>
int main()
{
    int temperature[10]
        ,i;

    for(i=0;i<10;i++){
        printf("temperature[%d]=",i+1);
        scanf("%d",&temperature[i]);
    }
    for (i=0; i<10; i++) {
        printf("temperature[%d]= %d \n",i+1, temperature[i]);
    }

    return 0;
}
