/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: silag
 *
 * Created on October 19, 2024, 9:24 PM
 */

#include <stdio.h>
int main()
{
    int sayı1,sayı2,sayı3,kucuksayi;
    printf("1. sayı giriniz:");
    scanf("%d",&sayı1);
    printf("2. sayı giriniz:");
    scanf("%d",&sayı2);
    printf("3. sayı giriniz:");
    scanf("%d",&sayı3);
   
    kucuksayi=sayı1;
    
    if(sayı2<kucuksayi){
        kucuksayi=sayı2;
      }
    if(sayı3<kucuksayi){
        kucuksayi=sayı3;
     }
    printf("Girilen sayıların en küçüğü:%d",kucuksayi);
          
         
         
         
         
         
}

