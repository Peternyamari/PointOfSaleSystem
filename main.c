#include <stdio.h>
#include <stdlib.h>

int main()
{
    char item1,item2;
    double item1_price,item2_price,item1_quantity,item2_quantity,calculated_total,cash_paid;
    printf("=======================\n");
    printf("POINT OF SALE SYSTEM\n");
    printf("=======================\n");
    printf("LIST OF ITEMS AVAILABLE:\n");
    printf("-----------------------\n");
    printf("1.Sugar ksh 170 per kg.\n");
    printf("2.Milk ksh 100 per litre.\n");
    printf("-----------------------\n");
    printf("CUSTOMER SHOPPING:\n");
    printf("_______________________\n");
    printf("ENTER ITEM 1:");
    scanf("%s" ,&item1);
    printf("QUANTITY(KGS):");
    scanf("%lf",&item1_quantity);
    printf("PRICE PER KG:");
    scanf("%lf",&item1_price);
    printf("COST FOR ITEM 1 = %.2f\n",item1_quantity*item1_price);
    printf("ENTER ITEM 2:");
    scanf("%s",&item2);
    printf("QUANTITY(LITRES):");
    scanf("%lf",&item2_quantity);
    printf("PRICE PER LITRE:");
    scanf("%lf",&item2_price);
    printf("COST FOR ITEM 2 = %.2lf\n",item2_quantity*item2_price);
    printf("COST FOR ALL ITEMS: %.2f\n",item1_quantity*item1_price+item2_quantity*item2_price);
    printf("CALCULATED TOTAL TO PAY(-16 PERCENT VAT): %.2lf\n",item1_quantity*item1_price+item2_quantity*item2_price-0.16);
    printf("ENTER CASH PAID:");
    scanf("%lf",&cash_paid);
    printf("RE-ENTER CASH TO PAY:");
    scanf("%lf",&calculated_total);
    printf("CHANGE IS: %.2lf\n",cash_paid-calculated_total);
    printf("THANKS FOR SHOPPING FROM US WELCOME AGAIN");




    return 0;
}
