#include <stdio.h>
 
int main() {
 

int N,ANO,MES,DIA;

scanf("%d",&N);

ANO=(N/365);

MES=(N%365)/30;

DIA=(N%365)%30;

printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ANO,MES,DIA);
 
 
 
 
 
    return 0;
}