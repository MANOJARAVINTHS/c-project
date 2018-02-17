
#include<stdio.h>

void display();
void TShirt();
void Shirt();
void Pant();
void Saree();
void Chudidhar();


int main()
{
 int option;
 printf("\n***** Welcome to Textile Purchase *****\n");
 display();
 printf("Please enter any options (1/2/3/4/5) to continue\n");
 scanf("%d",&option);
 if(option == 1)
 {TShirt();}
 if(option == 2)
 {Shirt();}
 if(option == 3)
 {Pant();}
 if(option == 4)
 {Saree();}
 if(option == 5)
 {Chudidhar();}
 printf("Your purchase has been done\n");
 return 0;
}

/*Function to display available dresses in the cart*/

void display()
{
 printf("\n1. TShirt each Rs.100 \n");
 printf("2. Shirt each Rs.250 \n");
 printf("3. Pant each Rs.350 \n");
 printf("4. Saree each Rs.1000 \n");
 printf("5. Chudidhar each Rs.800 \n");
}

/*Function to display TShirts*/
 
void TShirt()
{
  int a;
 printf("Enter the number of Shirts to be purchased:\n");
 scanf("%d",&a);
 printf("Purchased Shirt price is Rs.%d\n",100*a);
}
 
/*Function to display Shirts*/
 
void Shirt()
{
 int b;
 printf("Enter the number of Shirts to be purchased:\n");
 scanf("%d",&b);
 printf("Purchased Shirt price is Rs.%d\n",250*b);
}
 
/*Function to display Pant*/

void Pant()
{
 int c;
 printf("Enter the number of Pants to be purchased:\n");
 scanf("%d",&c);
 printf("Purchased Pant price is Rs.%d\n",350*c);
}

/*Function to display Saree*/

void Saree()
{
 int d;
 printf("Enter the number of Saree to be purchased:\n");
 scanf("%d",&d);
 printf("Purchased Saree price is Rs.%d\n",1000*d);
}

/*Function to display Chudidhar*/

void Chudidhar()
{
 int e;
 printf("Enter the number of Chudidhars to be purchased:\n");
 scanf("%d",&e);
 printf("Purchased Chudidhar price is Rs.%d\n",800*e);
}


