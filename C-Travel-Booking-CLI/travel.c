//Travel Program using C

#include<stdio.h>

//User defined function declaration
void GenerateBill(int package);
float CalculateBill(int distance_travelled ,int waiting_time, int pack);
void ViewPackage(int package);

char decision; // global variable declaration
char true_='y';
void main()
{
    char option='\0';


    printf("****|||||||||      HELLO! WELCOME USER    |||||||||****\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("---> TO VIEW THE PACKAGES ENTER P/p\n");
    printf("---> TO START BILLING ENTER B/b\n");
    scanf("%c",&option);

    Selection(option);

}

void Selection(int option)
{
    int package=0;
     if((option=='B') || (option=='b'))
        {
         printf("You have selected to billing\n");
    printf("Package 1 : GOLD          Package 2 : STANDARD\n");
    printf("Select package :");
    scanf("%d",&package);

     //method two using If()
    if ((package==1) || (package==2))
        {
    GenerateBill(package);
        }
    else{
        printf("The package you selected does not exist . Please try again\n");
        }

        }
  else if ((option=='P') || (option=='p'))
    {
    printf("You have selected to to view Packages\n");
    printf("Package 1 : GOLD        Package 2 :STANDARD \n");
    printf("Select package :");
    scanf("%d",&package);

    ViewPackages(package);

    }
}


void ViewPackages(int package)
{
    if (package==1)
        {

      printf("----------------------------------GOLD package------------------------------\n");
      printf("                      |-------------------------------------------|\n");
      printf("                      | Charge per KM  |  Waiting charge per hour | \n");
      printf("                      |-------------------------------------------|\n");
      printf("                      | Rs.50          |  Rs.100                  | \n");
      printf("                      |-------------------------------------------|\n");
      printf("                      | Note : After the first 50kms the charge per KM is Rs55 | \n");

        }
    else if(package==2)
        {
      printf("----------------------------------STANDARD package------------------------------\n");
      printf("                      |-------------------------------------------|\n");
      printf("                      | Charge per KM  |  Waiting charge per hour | \n");
      printf("                      |-------------------------------------------|\n");
      printf("                      | Rs.45          |  Rs.200                  | \n");
      printf("                      |-------------------------------------------|\n");
      printf("                      | Note : After the first 40kms the charge per KM is Rs50 | \n");
      printf("\n");
        }
    else{
        printf("The package you selected does not exist . Please try again\n");
        }

          printf("Do you want to Generate Bill?(y/n)");
            while(true_=='y')
        {
          scanf("%c",&decision);
    if(decision=='y')
            {
            GenerateBill(package);
            }
    else if(decision=='n')
            {
            main();
            }

        }
}



  void GenerateBill(int selec_package)
  {
    int distance_travelled=0;
    int waiting_time=0;
    float total=0;
     printf("\n");
      printf("\n");
      printf("--------------Enter details below----------------------\n");
      printf("          --> Enter distance traveled: ");
      scanf("%d",&distance_travelled);

      printf("          --> Enter waiting hours:");
      scanf("%d",&waiting_time);

      total = CalculateBill(distance_travelled,waiting_time, selec_package);
      printf("Customer Total : Rs.%f",total);
       printf("\n");
        printf("\n");
          printf("Do you want to Generate Bill?(y/n)");
        while(true_=='y')
        {
          scanf("%c",&decision);
            if(decision=='y')
                    {
                    Selection('B');
                    }
            else if(decision=='n')
                    {
                    main();
                    }
        }


  }


  float CalculateBill(int distance_travelled ,int waiting_time, int pack)
  {
    int km_charge=0;
    int waiting_charge=0;
    float total_=0;
    if(distance_travelled<=0)
    {
        printf("Distance traveled cannot be less than or 0\n");
        printf("Do you want to re-try Billing?(y/n)");
        while(true_=='y')
        {
          scanf("%c",&decision);
            if(decision=='y')
                    {
                    GenerateBill(pack);
                    }
            else if(decision=='n')
                    {
                    main();
                    }
        }
    }
    else
        {
          if (pack ==1)
    {
        waiting_charge=100;
        if (distance_travelled>50)
        {
        km_charge=55;

        }
       else if(distance_travelled<50)
       {
        km_charge=50;

       }

int km_charge=0;
    int waiting_charge=0;
    float total_=0;
    }

     else if (pack ==2)
    {
        waiting_charge=200;
        if (distance_travelled>40)
        {
        km_charge=50;

        }
       else if(distance_travelled<40)
       {
        km_charge=45;

       }
        total_ =  (distance_travelled * km_charge) + (waiting_time * waiting_charge);
    }
        }



return total_;
  }
