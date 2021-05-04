#Travel Program using Python using oop

import os
import time
import json

class Travel:
    def __init__(self):
        self.rates = {
        1:{
            "min":50,
            "over":55,
            "wait": 100
        },
        2:{
            "min":60,
            "over":55,
            "wait":200
        }
        }
        

    def selection(self,option):
        pack = 0
        if option == "B" or option == "b":
            print("Do Your Billings HERE\n")
            print("Billings 1 : GOLD          Billings 2 : STANDARD\n")
        elif option == "P" or option == "p":
            print("You have selected to to view Packages\n")
            print("Package 1 : GOLD        Package 2 :STANDARD \n")
        else:
            print("The BILLING  TPYE you selected does not exist . Please try again\n")
        pack = int(input("Select package: "))
        if pack in (1,2):
            self.package(pack)
        else:
            print("The PACKAGE you selected does not exist . Please try again\n")
        

    def package(self, package):
        if package == 1:
            print("----------------------------------GOLD package------------------------------\n")
            print("                      |-------------------------------------------|\n")
            print("                      | Charge per KM  |  Waiting charge per hour | \n")
            print("                      |-------------------------------------------|\n")
            print("                      | Rs.50          |  Rs.100                  | \n")
            print("                      |-------------------------------------------|\n")
            print("                      | Note : After the first 50kms the charge per KM is Rs55 | \n")
        elif package==2:
            print("----------------------------------STANDARD package------------------------------\n")
            print("                      |-------------------------------------------|\n")
            print("                      | Charge per KM  |  Waiting charge per hour | \n")
            print("                      |-------------------------------------------|\n")
            print("                      | Rs.60          |  Rs.200                  | \n")
            print("                      |-------------------------------------------|\n")
            print("                      | Note : After the first 40kms the charge per KM is Rs50 | \n")
            print("\n")
        else:
            print("The package you selected does not exist . Please try again\n")
        
        bill = input("DO YOU WANT TO BILL: ")
        if bill in ["yes", "Y", "y"]:
            self.generatebill(package)
        else:
            print("Exiting")
            return

    def generatebill(self, pnumber):

        min_, over, wait = self.rates[pnumber].items()
        #print(min_,over,wait)
        dist_trav = 0
        wait_time = 0
        charge_per = 0

        print("\n")
        print("\n")
        print("--------------Enter details below----------------------\n")
        dist_trav = int(input("          --> Enter distance traveled: "))
        wait_time = int(input("          --> Enter waiting hours:"))
        #per km 50 + waiting charge

        if dist_trav < 50:
            charge_per = min_[1] * dist_trav
        elif dist_trav > 50:
            charge_per = over[1] * dist_trav
        if wait_time:
            wait_time *= wait[1]

        total = charge_per + wait_time
        print(f"customer total {total}")
        time.sleep(5)
        os.system('cls')


def main():
    print("****|||||||||      HELLO! WELCOME USER    |||||||||****\n")
    print("\n")
    print("---> TO VIEW THE PACKAGES ENTER P/p\n")
    print("---> TO START BILLING ENTER B/b\n")

    obj = Travel()
    run = True
    print (json.dumps(obj.rates,indent=2))
    while run:
        opt = input("Enter an option> ")
        if opt == 0:
            run = False
        obj.selection(opt)
main()