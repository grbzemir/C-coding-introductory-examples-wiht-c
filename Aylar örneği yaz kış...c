#include<stdio.h>
#include<stdlib.h>

int main () {

    int yaz;
    int kis;
    int  ilkbahar;
    int  sonbahar;
    int toplam;

    kis=320;

    ilkbahar=kis/4;

    yaz=ilkbahar*8;

    sonbahar=yaz/10;

    toplam=kis+ilkbahar+yaz+sonbahar;

    printf("toplam:%d",toplam);

    
    return 0;
    
}