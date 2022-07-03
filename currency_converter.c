#include <stdio.h>

int main()
{
    float amount;
    float rupee, dollar, euro, pound, yen;
    int choice;

    printf("Following are the Choices:\n");
    printf("Enter 1: Ruppes\n");
    printf("Enter 2: Dollar\n");
    printf("Enter 3: Euro\n");
    printf("Enter 4: Pound\n");
    printf("Enter 5: Yen\n");

    printf("Enter your Choice:");
    scanf("%d",&choice);

    printf("Enter the Amount you want to convert:");
    scanf("%f",&amount);
    
    printf("\n\nAll rates are as of 3 July 2022\n\n");
    
    switch (choice)
    {
        case 1: // Ruppes Conversion
        
        dollar = amount / 78.95; 
        printf("%.2f Ruppes = %.4f Dollars\n",amount, dollar);

        euro = amount / 82.34; 
        printf("%.2f Ruppes = %.4f Euros\n",amount, euro);

        pound = amount / 95.57; 
        printf("%.2f Ruppes = %.4f Pounds\n",amount, pound);

        yen = amount / 0.58; 
        printf("%.2f Ruppes = %.4f Yens\n",amount, yen);
 
        break;

    /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////
        
        case 2: // Dollar Conversion
        
        rupee = amount * 78.95; 
        printf("%.2f Dollars = %.4f Rupees\n",amount, rupee);

        euro = amount * 0.96 ; 
        printf("%.2f Dollars = %.4f Euros\n",amount, euro);

        pound = amount * 0.83; 
        printf("%.2f Dollars = %.4f Pounds\n",amount, pound);

        yen = amount * 135.22; 
        printf("%.2f Dollars = %.4f Yens\n",amount, yen);

        break;

    /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////
        
        case 3: // Euro Conversion
        
        rupee = amount * 82.34; 
        printf("%.2f Euros = %.4f Rupees\n",amount, rupee);

        dollar = amount * 1.04 ; 
        printf("%.2f Euros = %.4f Euros\n",amount, dollar);

        pound = amount * 0.86; 
        printf("%.2f Euros = %.4f Pounds\n",amount, pound);

        yen = amount * 141.01; 
        printf("%.2f Euros = %.4f Yens\n",amount, yen);

        break;
    /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////
        
        case 4: // Pound Conversion
        
        rupee = amount * 95.57; 
        printf("%.2f Pounds = %.4f Rupees\n",amount, rupee);

        dollar = amount * 1.21 ; 
        printf("%.2f Pounds = %.4f Dollars\n",amount, dollar);

        euro = amount * 1.16; 
        printf("%.2f Pounds = %.4f Euros\n",amount, euro);

        yen = amount * 163.69; 
        printf("%.2f Pounds = %.4f Yens\n",amount, yen);

        break;
    /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////
        
        case 5: // Yen Conversion
        
        rupee = amount * 0.583975; 
        printf("%.2f Yens = %.4f Rupees\n",amount, rupee);

        dollar = amount * 0.0074; 
        printf("%.2f Yens = %.4f Dollars\n",amount, dollar);

        euro = amount * 0.0071 ; 
        printf("%.2f Yens = %.4f Euros\n",amount, euro);

        pound = amount * 0.0061; 
        printf("%.2f Yens = %.4f Yens\n",amount, pound);

        break;

        default:    //Default case
        printf("\nInvalid Input");
        printf("\nPlease select an option from 1-5");
  }
 
  return 0;
}