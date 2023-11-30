//
//  main.c
//  DERS 1
//
//  Created by Mete Turan on 30.11.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int uzunlukBoy;

    
    printf("Boy Uzunluğu Giriniz: ");
    scanf("%d",& uzunlukBoy);
    
    for(int i = 1; i<= uzunlukBoy; i++)
    {
        for(int j = 1 ; j<= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
