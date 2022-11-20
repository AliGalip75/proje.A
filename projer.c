#include <stdio.h>
int main(){
    int i,ab,cde,a,b,c,d,e,kontrol=0,secim;
    /*ab=46 cde=325*/
    printf("\n\n");
    printf("******sayi tahmin oyunu******\n\n");
    printf("1.zorluk seviyesi iki basamakli\n\n");
    printf("2.zorluk seviyesi uc basamakli\n\n");
    printf("5 tahmin hakkiniz vardir\n\n");
    printf("1-sayinin dogru oldugunu belirtir\n");
    printf("0-sayinin yanlis oldugunu belirtir\n\n");
    printf("zorluk seviyesini sec: ");
    scanf("%d",&secim);
    switch(secim){
        case 1:
        for(i=1;i<=5;i++){
        printf("tahminini gir:");
        scanf("%d",&ab);
        a=ab/10;
        b=ab%10;
        if(a==4 && b==6){
            printf("1/1\n");
            kontrol=2;
            break;
        }
        else if(a!=4 && b==6){
            printf("0/1\n");
            kontrol=1;
        }
        else if(a==4 && b!=6){
            printf("1/0\n");
            kontrol=1;
        }
        else {
            printf("0/0\n");
            kontrol=1;
        }
 }
        if(kontrol==1){
            printf("bilemediniz");
        }
        if(kontrol==2){
            printf("tebrikler");
        }
        break;
        case 2:
        for(i=1;i<=5;i++){
        printf("tahminini gir:");
        scanf("%d",&cde);
        e=cde%10;
        c=cde/100;
        d=(cde%100)/10;
        if(c==3 && d==2 && e==5){
            printf("1/1/1\n");
            kontrol=2;
            break;    
        }
        else if(c!=3 && d!=2 && e!=5){
            printf("0/0/0\n");
            kontrol=1;
        }
        else if(c!=3 && d==2 && e==5){
            printf("0/1/1\n");
            kontrol=1;
        }
        else if(c==3 && d!=2 && e==5){
            printf("1/0/1\n");
            kontrol=1;
        }
        else if(c==3 && d==2 && e!=5){
            printf("1/1/0\n");
            kontrol=1;
        }
        else if(c!=3 && d==2 && e!=5){
            printf("0/1/0\n");
            kontrol=1;
        }
        else if(c!=3 && d!=2 && e==5){
            printf("0/0/1\n");
            kontrol=1;
        }
        else if(c==3 && d!=2 && e!=5){
            printf("1/0/0\n");
            kontrol=1;
        }

        }
        if(kontrol==1){
            printf("bilemediniz!");
        }
        if(kontrol==2){
            printf("tebrikler!"); 
            
        }

}
}