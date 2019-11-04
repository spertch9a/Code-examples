//Autor : FORTAS OUSSAMA ILYES
#include<stdio.h>
#include<math.h>
int main(){
//partie de declarations
float delta,a,b,c,x1,x2;


//partie du scan
printf("donner la valeur de a: ");   scanf("%f",&a);
printf("donner la valeur de b: ");   scanf("%f",&b);
printf("donner la valeur de c: ");   scanf("%f",&c);

//calcule de delta
delta=(b*b)-(4*a*c);

if (delta==0){x1=-b/2*a;
printf("la solution est x1 %.2f",x1);}

else if (delta>0) {
x1=((-b)+sqrt(delta))/(2*a);
x2=((-b)-sqrt(delta))/(2*a);
printf("la solution est X1 =  %.2f et X2 = %.2f",x1,x2);}
else if(delta<0)
{printf("L'equation n'admet pas de solution");
}
return(0);
}
