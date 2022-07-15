/* 12prg06.c:  geri donus degeri gosterici olan fonksiyon */

#include <stdio.h>

double* maxAdr(double a[], int boyut){
  double  ebd =  a[0];
  double *eba = &a[0];
  int i;
  for(i=1; i<boyut; i++){
    if(a[i]>ebd){
      ebd =  a[i]; // en büyük deger
      eba = &a[i]; // en büyük adres
    }
  }
  return eba;
}


int main()
{
  double x[6] = {1.1, 3.3, 7.1, 5.4, 0.2, -1.5};
  double *p;
  int k;
  // indis, dizi ve adresini ekrana bas
  for(k=0; k<6; k++){
    printf("%d %lf %p\n", k, x[k], &x[k]);
  }

  p = maxAdr(x,6);

  printf("En büyük deger: %lf\n", *p);
  printf("En büyük adres: %p \n",  p);
  printf("En büyük konum: %d \n", (p-&x[0]));

  return 0;
}