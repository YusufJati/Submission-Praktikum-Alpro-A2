/* Nama File    : DNAKambingDinamis.c */
/* Deskripsi    : Menghitung banyaknya kambing bersaudara tanpa array dinamis */
/* Pembuat      : <24060121140143-Sana Saffanah> */
/* Tgl Pembuatan: Rabu, 30 Maret 2022 - 20.48 */


#include<stdio.h>
#include<stdlib.h>

int main(void){
/* Kamus */
    int N;
    int i;
    int j;
    int k;
    int BS; // bukan saudara
    int S; // saudara
    int *DNA;

/*Algoritma*/
 printf("Masukkan nilai n: ");
    scanf("%d",&N);
    DNA=(int *)malloc(N*sizeof(int));
    S = 0;
    BS = 0;
    if(N>0){
        for(i=1;i<=N;i++){
            printf("Masukan DNA ke-%d : ",i+1);
            scanf("%d",DNA+i);
        }
        for(j=N;j>1;j--){
            for(k=1;k<j;k++){
               if(abs(*(DNA+j)-(*(DNA+k)))<3){
                    S++;
                } else {
                    BS++;
                }
            }
        }
        printf("Jumlah kambing yang bersaudara : %d \n", S);
        printf("Jumlah kambing yang tidak bersaudara : %d \n", BS);
    } else {
        printf("Masukkan harus lebih dari 0");
    }
    return 0;
}
