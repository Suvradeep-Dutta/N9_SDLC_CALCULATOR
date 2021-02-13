#include <stdio.h>
#include <math.h>
int main()
{
    float san1,san2,res,mults,divs,subs,adds,sine,cosi,tani,coseci,seci,coti,arcsini,arccosi,arctani,arccoseci,arcseci,arccoti,angsani,ang;
    int symbols;
printf("For Addition press-1\nFor Substraction press-2\nFor Multiplication press-3\nFor Divison press-4\nTo Find Sin press-5\n");    
    printf("Enter Symbol(1,2,3,4,5,6,7,8,9,10,11,12)\n");
    scanf("%d",&symbols);
   switch(symbols)
    {
        case 1:
        printf("Enter Two Number For Addition\n"); 
        scanf("%f",&san1);
         scanf("%f",&san2);
                adds=san1+san2;
                printf("addition=%f\n",adds);
                break;
        case 2:
        printf("Enter Two Number For Substraction\n");
        scanf("%f",&san1);
         scanf("%f",&san2);
        subs=san1-san2;
        printf("substraction=%f\n",subs);
        break;
        case 3:
        printf("Enter Two Number For Multiplication\n");
        scanf("%f",&san1);
         scanf("%f",&san2);
         mults=san1*san2;
         printf("multiplication=%f\n",mults);
         break;
       case 4:
       printf("Enter Two Numbers For Division\n");
       scanf("%f",&san1);
         scanf("%f",&san2);
         divs=san1/san2;
         if (san2==0)
         {
             printf("Calculator Cannot Print This Value");
         }
         else
         {
         printf("division=%f\n",divs);
         }
         break;
         case 5:
          printf("Enter The Value Of Angle\n");
          scanf("%f",&ang);
          sine=sin(ang);
          printf("sin=%f",sine);
        break;
         case 6:
printf("Enter The Value Of angle\n");
scanf("%f",&ang);
cosi=cos(ang);
printf("cos=%f",cosi);
          break;
               case 7:
          printf("Enter The Value Of Angle\n");
          scanf("%f",&ang);
          tani=tan(ang);
          printf("tan=%f",tani);
          break;

    }
 return 0;
}
///commented for test