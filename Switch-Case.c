//Inplementing Switch-Case

#include<stdio.h>
void main()
{
int a;
hello:
printf("1.Burger, Rs129\n2.Pasta, Rs179\n3.French Fries, Rs99\n4.Sandwich, Rs149\n5.Pizza, Rs239\nEnter your choice: ");
scanf("%d",&a);
//Switch-case implementation
switch(a)
{
case 1:
printf("Food Item- Burger\nPrice- Rs129");
break;
case 2:
printf("Food Item- Pasta\nPrice- Rs179");
break;
case 3:
printf("Food Item- French Fries\nPrice- Rs99");
break;
case 4:
printf("Food Item- Sandwich\nPrice- Rs149");
break;
case 5:
printf("Food Item- Pizza\nPrice- Rs239");
break;
}
}
