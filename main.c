#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int pilihan, derajat_polinom, i, j;

    printf("1. Penambahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Penurunan polinimial\n");
    printf("Pilih operasi (1, 2, 3, etc.):");

    scanf("%d", &pilihan);

    if (pilihan==1) {
    // penambahan
    }
    
    if (pilihan==2) {
    // pengurangan  
    }
    
    if (pilihan==3) {
            int i,j,dpol1,dpol2;
            printf("derajat polinom 1\n");
            scanf("%d",&dpol1);
            printf("derajat polinom 2\n");
            scanf("%d",&dpol2);
            int a[dpol1],b[dpol2],kali[dpol1+dpol2];
            printf("koef pd polinom 1\n");
            for(i=0;i<dpol1;i++)
            {
                printf("koef polinom 1 pada x^%d \n",i);
                scanf("%d",&a[i]);
            }
            printf("koef pada polinom 2\n");
            for(i=0;i<dpol2;i++)
            {
                printf("koef polinom 2 pada x^%d\n",i);
                scanf("%d",&b[i]);
            }
            for(i=0;i<dpol1+dpol2;i++)
            {
                kali[i]=0;
            }
            for(i=0;i<dpol1;i++)
            {
                for(j=0;j<dpol2;j++)
                {
                    if(a[i]!=0 && b[j]!=0)
                        kali[i+j]+=a[i]*b[j];
                }
            }
            for(i=dpol1+dpol2-1;i>=0;i--)
            {
                if(kali[i]!=0){
                    if(i!=0) 
                    {
                        printf("%d x^%d + ",kali[i],i);
                    }
                    else
                    {
                        printf("%d x^%d\n",kali[i],i);
                    }
                }
            }
        }
    
    if (pilihan==4) {
        printf("Masukkan derajat polinomial: ");
        scanf("%d", &derajat_polinom);
        double koeff_init[derajat_polinom+1];
        double koeff_turunan[derajat_polinom];
//        int derajat_turunan[derajat_polinom]
        for( i = 0; i <= derajat_polinom; i++) {
            printf("Koeffisien derajat ke %d: ", i);
            scanf("%lf", &koeff_init[i]);
            if (i>0) {
                koeff_turunan[i-1] = i*koeff_init[i];
            }
        }
        printf("Turunan = %.2lf ", koeff_turunan[0]);
        for( j = 1; j < derajat_polinom; j++) {
            if (koeff_turunan[j] >= 0) {
                printf("+ %.2lf x^%d ", koeff_turunan[j], j);
            } else {
                printf("- %.2lf x^%d ", koeff_turunan[j]*-1, j);
            }
        }

    //  penurunan polinomial
    }
    
    return 0;
}
