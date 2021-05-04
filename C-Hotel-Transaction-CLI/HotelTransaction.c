//--------------------------------------------------------
//Author : Jadhusan
//Poject Descriptions : Console Application For A Hotel Transaction
//Date : July ‎12, ‎2019
//--------------------------------------------------------

#include <stdio.h>
#include <conio.h>
#include<windows.h>

//user defined function declaration
void GenerateBill(char choice);
void Selection(int option);
void ViewRoomAllocation(char type);
void Restaurant(char fare);
void Details(char bill);
void Billing(char pack);
void Options(int opt);
void CalculateStay(char bill ,char cust_name[], char natonality[] , int exit_date,int expense);
float CalculateBill(int meal[],int beverage[],int appetizer[], int m_quantity[],int b_quantity[],int a_quantity[]);
char yesNo();

char decision;

//MAIN MENU
void main()
{
     int option=0;

    MessageBox(0,"LETS CONTINUE WITH OK","HEY IM YOUR FRIEND GOTA SOFTWARE",1);
    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");
    printf("|||||||||||||||||||||||||||                               |||||||||||||||||||||||||||\n");
    printf("||||||||||||||||||||||||||| WELCOME TO FOUR SEASON RESORT |||||||||||||||||||||||||||\n");
    printf("|||||||||||||||||||||||||||                               |||||||||||||||||||||||||||\n");
    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n ");
    printf("\n");
    printf("----------------------------THANK YOU FOR CHOOSING US---------------------------------\n");
    printf("\n");
    printf("FUNCTION ARE AVAILABLE BELOW");
    printf("\n");
    printf("1> ROOM ALLOCATION\n");
    printf("2> RESTAURANTS\n");
    printf("3> BILLING\n");
    printf("4> EXIT\n");
    scanf("%d",&option);
    getchar();   //used to restrict the scanf() statement from reading buffer values from predecessor
    Selection(option);
}

//DEFAULT OPTIONS MENU
void Options( int opt)
{
    char res='\0';
    printf("SELECT OPTION : \n");
    printf("'/' = Go back\n");
    printf("'Q/q' = Exit\n");
    scanf("%c",&res);
    getchar();
    system("cls");

    if ((res=='Q') || (res=='q'))
     {
            system("exit");
     }
    else if (res=='/')
     {
            Selection(opt);
     }
     else
     {
         printf("INVALID OPTION , TRY ENTERING  AGAIN (Y/N) \n");
         scanf("%c", &decision);
         getchar();
         if ((res=='y') || (res=='Y'))
            {
                Options(opt);
            }
        else if ((res=='N') || (res=='n'))
            {
                     system("exit");
            }
     }
}

// SELECTION CLASS
void Selection(int option)
{
    char type;
    char pack;
    char fare;

    switch(option)
    {
        case 1:
            printf("AVAILABLE RESOURCES\n");
            printf("CHOOSE YOUR PACK\n");
            printf("PACK:S       PACK:F        PACK:D \n");
            printf("SELECT WHAT YOU DESERVE :\n");
            scanf("%c",&type);
            getchar();
            system("cls");
            ViewRoomAllocation(type);
        break;

        case 2:
            printf("WELCOME TO WINNER WINNER CHICKEN DINNER\n");
            printf("YOU HAVE SELECTED RESTAURANT\n");
            printf("FARE:MAIN COURSE       FARE:BEVERAGE        FARE:APPETIZER \n");
            printf("FARE:M                 FARE:B               FARE:A \n");
            printf("SELECT YOUR FARE :");
            scanf("%c",&fare);
            getchar();
            system("cls");
            Restaurant(fare);
        break;

        case 3:
            printf("YOU HAVE SELECTED BILLING\n");
            printf("PACK:S       PACK:F        PACK:D \n");
            printf("SELECT YOUR PACK :");
            scanf("%c",&pack);
            getchar();
            system("cls");
            Billing(pack);
        break;

        case 4:
            printf("THANK YOU FOR BEING A PART OF 4SEASON RESORT\n");
            printf("HOPE YOU HAD A GREAT TIME SPEND\n");
            printf("WE WOULD LOVE TO HAVE YOURLL BACK HERE\n");
            printf("HAVE A NICE DAY|||| 4SEASON RESORT WILL MISS YOU!!!\n");
            system("pause");
        break;

        default:
            printf("*****UNIDENTIFIED NUMBER*****");
            system("cls");
            main();
        break;
    }

}

// ************* RESTAURANT *************
void Restaurant(char fare)
{
    if ((fare=='M') || (fare=='m'))
    {
        printf("________YOU HAVE CHOOSEN MAINCOURSE_________\n");
        printf("||||||||||||||                                       ||||||||||||||||||||||||\n");
        printf("------------------------>WELCOME TO TINGO REFRESHMENT<------------------------\n");
        printf("||||||||||||||                                       |||||||||||||||||||||||||\n");
        printf("------------------------>AVAILABLE NOURISHMENTS<------------------------\n");
        printf(" 1 .MEGA TOWER BURIYANI                             ||LKR 250.00\n");
        printf(" 2 .BEEF ENCHILIDAS                                ||LKR 200.00\n");
        printf(" 3 .CHICKEN ROYALTY                               ||LKR 400.00\n");
        printf("\n");
        printf("NOTE-->> FOOD CANT BE REFUND!\n");
    }
    else if ((fare=='B') || (fare=='b'))
    {
       printf("________YOU HAVE CHOOSEN BEVERAGE_________\n");
        printf("||||||||||||||                                       ||||||||||||||||||||||||\n");
        printf("------------------------>WELCOME TO TINGO REFRESHMENT<------------------------\n");
        printf("||||||||||||||                                       |||||||||||||||||||||||||\n");
        printf("------------------------>AVAILABLE NOURISHMENTS<------------------------\n");
        printf(" a.COFFEE-WITH FREE REFILLS                             ||LKR 250.00\n");
        printf(" b.KIDS DRINK-WITH FREE REFILLS                        ||LKR 200.00\n");
        printf(" c.FOUNTAIN DRINKS                                    ||LKR 400.00\n");
        printf("\n");
        printf("NOTE-->> FOOD CANT BE REFUND!\n");
    }
    else if ((fare=='A') || (fare=='a'))
    {
        printf("________YOU HAVE CHOOSEN APPETIZER_________\n");
        printf("||||||||||||||                                       ||||||||||||||||||||||||\n");
        printf("------------------------>WELCOME TO TINGO REFRESHMENT<------------------------\n");
        printf("||||||||||||||                                       |||||||||||||||||||||||||\n");
        printf("------------------------>AVAILABLE NOURISHMENTS<------------------------\n");
        printf(" a.ONION RINGS                             ||LKR 250.00\n");
        printf(" b.FRIES                                  ||LKR 200.00\n");
        printf(" c.CHICKEN NUGGETS                       ||LKR 400.00\n");
        printf("\n");
        printf("NOTE-->> FOOD CANT BE REFUND!\n");
    }
    else
    {
        printf("*****UNFORTUNATLY IT HAS BEEN REMOVED,DUE TO MAINTAINCE*****\n");
        printf("*****WE WILL BE COME BACK SOON WITH NEW ITEMS*****\n");
    }

    printf("DO YOU ORDER? (Y/N)\n");
    scanf("%c",&decision);
        getchar();
        system("cls");
     if ((decision=='Y') || (decision=='y'))
     {
        GenerateBill(fare);
     }
     else if ((decision=='n') || (decision=='N'))
     {
            Options(2);
     }
     else
     {
         printf("ERROR,TRY ENTERING (Y/N) AGAIN \n");
     }

}

//simple yes or no function used to reduce the repition of code
char yesNo()
{

        printf("DO YOU GENERATE BILL? (Y/N)\n");
        scanf("%c",&decision);
        getchar();

    if ((decision=='Y') || (decision=='y'))
     {

     }
    else if ((decision=='n') || (decision=='N'))
     {

     }
    else
     {
         printf("ERROR,TRY ENTERING (Y/N) AGAIN \n");
     }
        return decision;
}

//get the users required food
void GenerateBill(char choice)
{

    int inp=0;
    int qty=0;
    int meal[20];
    int m_quantity[20];
    int beverage[20];
    int b_quantity[20];
    int appetizer[20];
    int a_quantity[20];
    int counter=0;

    // float total=0;
    char dec;
     printf("\n");
      printf("\n");
      printf("--------------ENTER details below----------------------\n");

    printf("Do you want to add meal(s)? (y/n)");
    scanf("%c", &dec);
    getchar();

    //meals
    if ((dec=='y') || (dec=='Y'))
    {
        printf("\n");
        printf("\n");
        printf("--------------ENTER details below----------------------\n");
           do
                {
                    inp=0;

                        printf("          --> ENTER MEAL (ex: 1) : ");
                        scanf("%d",&inp);
                        meal[counter] = inp;
                        getchar();
                        printf("          --> ENTER QUANTITY : ");
                        scanf("%d",&qty);
                        m_quantity[counter] = qty;
                        getchar();
                        counter++;
                    decision ==  yesNo();
                } while ((decision=='N') || (decision=='n'));


        //beverages
        counter=0;
        printf("Do you want to add BEVERAGE(s)? (y/n)");
        scanf("%c", &dec);
        getchar();
        if ((dec=='y') || (dec=='Y'))
        {
            printf("\n");
            printf("\n");
            printf("--------------ENTER details below----------------------\n");
                do
                    {
                        inp=0;

                            printf("          --> ENTER BEVERAGE (ex: 1) : ");
                            scanf("%d",&inp);
                            beverage[counter] = inp;
                            getchar();
                            printf("          --> ENTER QUANTITY : ");
                            scanf("%d",&qty);
                            b_quantity[counter] = qty;
                            getchar();
                            counter++;
                        decision ==  yesNo();
                    }while ((decision=='N') || (decision=='n'));

                    //appetzser
                   counter=0;
            printf("Do you want to add appetiser(s)? (y/n)");
            scanf("%c", &dec);
            getchar();
            if ((dec=='y') || (dec=='Y'))
            {
                printf("\n");
                printf("\n");
                printf("--------------ENTER details below----------------------\n");
                do
                    {
                        inp=0;

                            printf("          --> ENTER appetiser (ex: 1) : ");
                            scanf("%d",&inp);
                            appetizer[counter] = inp;
                            getchar();
                            printf("          --> ENTER QUANTITY : ");
                            scanf("%d",&qty);
                            a_quantity[counter] = qty;
                            getchar();
                            counter++;
                        decision ==  yesNo();
                    }while ((decision=='N') || (decision=='n'));

                    char res = yesNo();
                    if (res=='Y' || res=='y'){
                        float total_bill=    CalculateBill( meal, beverage, appetizer,  m_quantity, b_quantity, a_quantity);
                        printf("the total %f",total_bill) ;

                    }
                       else if (res=='N' || res=='n')
                    {
                        Options(2);
                    }

            }
            else if ((dec=='n') || (dec=='N'))
            {

                    char res=yesNo();
                    if (res=='Y' || res=='y'){
                        float total_bill=    CalculateBill( meal, beverage, appetizer,  m_quantity, b_quantity, a_quantity);
                        printf("the total %f",total_bill) ;
                        printf("\n");
                        Options(2);

                    }
                    else if (res=='N' || res=='n')
                    {
                        Options(2);
                    }
                }
        }


        else if ((dec=='n') || (dec=='N'))
        {
                    counter=0;
            printf("Do you want to add appetiser(s)? (y/n)");
            scanf("%c", &dec);
            getchar();
            if ((dec=='y') || (dec=='Y'))
            {
                printf("\n");
                printf("\n");
                printf("--------------ENTER details below----------------------\n");
                do
                    {
                        inp=0;

                            printf("          --> ENTER appetiser (ex: 1) : ");
                            scanf("%d",&inp);
                            appetizer[counter] = inp;
                            getchar();
                            printf("          --> ENTER QUANTITY : ");
                            scanf("%d",&qty);
                            a_quantity[counter] = qty;
                            getchar();
                            counter++;
                        decision ==  yesNo();
                    }while ((decision=='N') || (decision=='n'));
                    char res=yesNo();
                   if (res=='Y' || res=='y'){
                        float total_bill=    CalculateBill( meal, beverage, appetizer,  m_quantity, b_quantity, a_quantity);
                        printf("the total %f",total_bill) ;
                         printf("\n");
                        Options(2);
                    }

                    else if (res=='N' || res=='n')
                    {
                        Options(2);
                    }

            }
            else if ((dec=='n') || (dec=='N'))
                {
                    char res=yesNo();
                    if (res=='Y' || res=='y'){
                        float total_bill=    CalculateBill( meal, beverage, appetizer,  m_quantity, b_quantity, a_quantity);
                        printf("the total %f",total_bill) ;
                         printf("\n");
                        Options(2);

                    }
                    else if (res=='N' || res=='n')
                    {
                        Options(2);
                    }
                }
        }


    }

    else if ((dec=='n') || (dec=='N'))
    {
        counter=0;
        printf("Do you want to add BEVERAGE(s)? (y/n)");
        scanf("%c", &dec);
        getchar();
        // beverages
        if ((dec=='y') || (dec=='Y'))
        {
            printf("\n");
            printf("\n");
            printf("--------------ENTER details below----------------------\n");
                do
                    {
                        inp=0;

                            printf("          --> ENTER BEVERAGE (ex: 1) : ");
                            scanf("%d",&inp);
                            beverage[counter] = inp;
                            getchar();
                            printf("          --> ENTER QUANTITY : ");
                            scanf("%d",&qty);
                            b_quantity[counter] = qty;
                            getchar();
                            counter++;
                        decision ==  yesNo();
                    }while ((decision=='N') || (decision=='n'));
                   counter=0;
            printf("Do you want to add appetiser(s)? (y/n)");
            scanf("%c", &dec);
            getchar();

            //appertisers
            if ((dec=='y') || (dec=='Y'))
            {
                printf("\n");
                printf("\n");
                printf("--------------ENTER details below----------------------\n");
                do
                    {
                        inp=0;

                            printf("          --> ENTER appetiser (ex: 1) : ");
                            scanf("%d",&inp);
                            appetizer[counter] = inp;
                            getchar();
                            printf("          --> ENTER QUANTITY : ");
                            scanf("%d",&qty);
                            a_quantity[counter] = qty;
                            getchar();
                            counter++;
                        decision ==  yesNo();
                    }while ((decision=='N') || (decision=='n'));

                               char res=yesNo();
                   if (res=='Y' || res=='y'){
                        float total_bill=    CalculateBill( meal, beverage, appetizer,  m_quantity, b_quantity, a_quantity);
                        printf("the total %f",total_bill) ;
 printf("\n");
                        Options(2);
                    }
                       else if (res=='N' || res=='n')
                    {
                        Options(2);
                    }
            }
            else if ((dec=='n') || (dec=='N'))
            {
                                   char res=yesNo();
                   if (res=='Y' || res=='y'){
                        float total_bill=    CalculateBill( meal, beverage, appetizer,  m_quantity, b_quantity, a_quantity);
                        printf("the total %f",total_bill) ;
 printf("\n");
                        Options(2);
                    }
                       else if (res=='N' || res=='n')
                    {
                        Options(2);
                    }
            }

        }

        else if ((dec=='n') || (dec=='N'))
        {
             //appertisers
               counter=0;
            printf("Do you want to add appetiser(s)? (y/n)");
            scanf("%c", &dec);
            getchar();


            if ((dec=='y') || (dec=='Y'))
            {
                printf("\n");
                printf("\n");
                printf("--------------ENTER details below----------------------\n");
                do
                    {
                        inp=0;

                            printf("          --> ENTER appetiser (ex: 1) : ");
                            scanf("%d",&inp);
                            appetizer[counter] = inp;
                            getchar();
                            printf("          --> ENTER QUANTITY : ");
                            scanf("%d",&qty);
                            a_quantity[counter] = qty;
                            getchar();
                            counter++;
                        decision ==  yesNo();
                    }while ((decision=='N') || (decision=='n'));

                                  char res=yesNo();
                   if (res=='Y' || res=='y'){
                        float total_bill=    CalculateBill( meal, beverage, appetizer,  m_quantity, b_quantity, a_quantity);
                        printf("the total %f",total_bill) ;
 printf("\n");
                        Options(2);
                    }
                       else if (res=='N' || res=='n')
                    {
                        Options(2);
                    }
            }
            else if ((dec=='n') || (dec=='N'))
            {
                                char res=yesNo();
                   if (res=='Y' || res=='y'){
                        float total_bill=    CalculateBill( meal, beverage, appetizer,  m_quantity, b_quantity, a_quantity);
                        printf("the total %f",total_bill) ;
                        printf("\n");
                        Options(2);

                    }
                       else if (res=='N' || res=='n')
                    {
                        Options(2);
                    }
            }

        }
    }

}

//calculate the bill for the users selected food
float CalculateBill(int meal[],int beverage[],int appetizer[], int m_quantity[],int b_quantity[],int a_quantity[])
{

        int total=0;
        int price=0;
        float meal_bill=0;
        float beverage_bill=0;
        float appetiser_bill=0;
        float total_bill=0;


        // meal loop
        for(int i = 0; i< sizeof(m_quantity)/sizeof(int) ; i++){

            total=  meal[i];

            if (total==1)
            {
            price = 250;
            }
            else if (total==2)
            {
            price = 200;
            }
            else if (total==3)
            {
            price = 400;
            }else
            {
                price=0;
            }
            meal_bill= meal_bill + (price * m_quantity[i]);
            price = 0;
            total=0;

        }

           // appetiser loop
        for(int i = 0; i< sizeof(a_quantity)/sizeof(int) ; i++){

            total=  appetizer[i];

            if (total==1)
            {
            price = 250;
            }
            else if (total==2)
            {
            price = 200;
            }
            else if (total==3)
            {
            price = 400;
            }else
            {
                price=0;
            }
            appetiser_bill= appetiser_bill + (price * a_quantity[i]);
            price = 0;
            total=0;

        }

           // beverage loop
        for(int i = 0; i< sizeof(b_quantity)/sizeof(int) ; i++){

            total=  beverage[i];

            if (total==1)
            {
            price = 250;
            }
            else if (total==2)
            {
            price = 200;
            }
            else if (total==3)
            {
            price = 400;
            }else
            {
                price=0;
            }
            beverage_bill= beverage_bill + (price * b_quantity[i]);
            price = 0;
            total=0;

        }
        total_bill =  (meal_bill + beverage_bill + appetiser_bill);

        return total_bill;
}


// ********** ROOM ALLOCAITON *******

//display the selected room
void ViewRoomAllocation(char type)
{

    if ((type=='S') || (type=='s'))
    {
        printf("________THANK YOU FOR SELECTING STARBUCK_________\n");
        printf("||||||||||||||                                       ||||||||||||||||||||||||\n");
        printf("------------------------>WELCOME TO TWINING PACK<------------------------\n");
        printf("||||||||||||||                                     |||||||||||||||||||||||||\n");
        printf("------------------------>FACILTIES<------------------------\n");
        printf(" I.BED                             ||1\n");
        printf(" II.CAPACITY                       ||2People\n");
        printf(" III.CONDITIONS                    ||COMFORTABLE||AC||ENTERTAIMENT\n");
        printf("\n");
        printf("NOTE-->> WE OFFER ADDITIONAL FACILITY TOO!\n");
    }
    else if ((type=='F') || (type=='f'))
    {
        printf("________THANK YOU FOR SELECTING FAMBAM_________\n");
        printf("||||||||||||||                                       ||||||||||||||||||||||||\n");
        printf("------------------------>WELCOME TO FAMILY PACK<------------------------\n");
        printf("||||||||||||||                                       |||||||||||||||||||||||||\n");
        printf("------------------------>FACILTIES<------------------------\n");
        printf(" I.BED                             ||2\n");
        printf(" II.CAPACITY                       ||5People\n");
        printf(" III.CONDITIONS                    ||COMFORTABLE||AC||ENTERTAIMENT\n");
        printf("\n");
        printf("NOTE-->> WE OFFER ADDITIONAL FACILITY TOO!\n");
    }
    else if ((type=='D') || (type=='d'))
    {
        printf("________THANK YOU FOR SELECTING STUDIO_________\n");
        printf("||||||||||||||                                       ||||||||||||||||||||||||\n");
        printf("------------------------>WELCOME TO DINOSAURS PACK<------------------------\n");
        printf("||||||||||||||                                       |||||||||||||||||||||||||\n");
        printf("------------------------>FACILTIES<------------------------\n");
        printf(" I.BED                             ||4\n");
        printf(" II.CAPACITY                       ||10People\n");
        printf(" III.CONDITIONS                    ||COMFORTABLE||AC||ENTERTAIMENT\n");
        printf("\n");
        printf("NOTE-->> WE OFFER ADDITIONAL FACILITY TOO!\n");
    }
    else
    {
        printf("*****INVALID ALLOCATION, PLEASE CHECK AGAIN OR ASK HELP FROM OUR STAFFS*****\n");
        Options(1);

    }

        printf("Do you want to select this package? (Y/N)");
        scanf("%c",&decision);
        getchar();
        system("cls");
            if ((decision=='y') || (decision=='Y'))
            {
                Details(type);
            }
            else if ((decision=='n') || (decision=='N'))
            {
                Options(1);
            }





}

// GET THE CUSTOMER DETAILS
void Details(char bill)
{

    int expense=0;
    char cust_name[50];
    char natonality[50];
    int exit_date=0;
    char dec='\0';



     if ((bill=='S') || (bill=='s'))
    {
      printf("The selected package : STARBUCK\n");
      expense = 2000;
    }
    else if ((bill=='F') || (bill=='f'))
    {
      printf("The selected package : FAMBAM\n");
      expense = 4000;
    }
    else if ((bill=='D') || (bill=='d'))
    {
       printf("The selected package : STUDIO\n");
       expense = 6000;
    }

    printf("ENTER THE NAME OF CUST: ");
    scanf("%s",&cust_name);
    getchar();
    printf("ENTER THE NATIONALITY: ");
    scanf("%s",&natonality);
    getchar();
    printf("Enter Number of days stayed: ");
    scanf("%d",&exit_date);
    getchar();



    printf("\nPlease check if the details are entered correctly and proceed (Y/N)");
    scanf("%c", &dec);
    getchar();

    if ((dec=='Y') || (dec=='y'))
    {

        CalculateStay(bill ,cust_name,  natonality,  exit_date, expense);
    }
    else if ((dec=='N') || (dec=='n')){
        system("cls");
        Details(bill);
    }
}

//calculate and print bill for *****room*****
void CalculateStay(char bill ,char cust_name[], char natonality[] , int exit_date,int expense)
{
     float total=0;
    float discount =0;
    float net_total = 0;


    char dec='\0';

    net_total = (exit_date * expense);
     discount = net_total *0.1;
     total = net_total - discount;

     system("cls");
        printf("____________________________________________________________________\n");
        //printf("%c",bill);
        printf("|                                                                   |\n");
        printf("| Number of days stayed :%d",exit_date);
        printf(" | Expense :Rs.%d", expense );
        printf("                       |\n");
        printf("| Net total :Rs.%f",net_total);
        printf(" -  Discount :Rs.%f", discount);
        printf("              |\n");
        printf("| Total : Rs.%f",total);
        printf("                                            |\n");
        printf("|                                     Thank you for choosing us %s",cust_name);


        printf("   |\n|___________________________________________________________________|\n\n");

        printf("Do you want proceed or cancel ? (P/C)");
        scanf("%c", &dec);
        getchar();

        if ((dec == 'P') || (dec == 'p'))
        {
            printf("Thank you! Hope to see you soon!");

            main();

        }
        else if ((dec == 'C') || (dec == 'c'))
        {
            printf("Cancelled");
            Options(1);
        }
        else
        {
            printf("Err");
             CalculateStay(bill ,cust_name,  natonality,  exit_date,expense);
        }

}

//i dk why this is here
void Billing(char pack)
{
    char confirm = '\0';
        if ((pack=='S') || (pack=='s'))
        {
            printf("**>>YOU HAVE SELECTED STARBUCK<<**\n");
            printf("TWINING PACK\n");
            printf(" I. 1^BED------------------>>>>>LKR 2,000|| Per Day\n");
            printf(" I.SERVICE CHARGE------------------>>>>>10% of the total|| Per Day\n");
            printf(" III.NOTE-->>RESTAURANT FEES CHARGE APART FROM THIS\n");
            printf("PRESS C FOR CONFIRMATION");

        }
    else if ((pack=='F') || (pack=='f'))
        {
            printf("**>>YOU HAVE SELECTED FAMBAM<<**\n");
            printf("FAMILY PACK\n");
            printf(" I. 2^BED------------------>>>>>LKR 5,000|| Per Day\n");
            printf(" I.SERVICE CHARGE------------------>>>>>10% of the total|| Per Day\n");
            printf(" III.NOTE-->>RESTAURANT FEES CHARGE APART FROM THIS\n");
            printf("PRESS C FOR CONFIRMATION");

        }
    else if ((pack=='D') || (pack=='d'))
        {
            printf("**>>YOU HAVE SELECTED STUDIO<<**\n");
            printf("DINOSAURS PACK\n");
            printf(" I. 4^BED------------------>>>>>LKR 10,000|| Per Day\n");
            printf(" II.SERVICE CHARGE------------------>>>>>10% of the total|| Per Day\n");
            printf(" III.NOTE-->>RESTAURANT FEES CHARGE APART FROM THIS\n");
            printf("PRESS C FOR CONFIRMATION");

        }

        else
        {
            printf("*****The package you selected does not exist . Please try again*****\n");
        }

         scanf("%c",&confirm);
            getchar();
         if ((confirm == 'C') || (confirm == 'c'))
         {
             Details(pack);
         }


}
