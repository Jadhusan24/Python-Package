#!/usr/bin/python
#Travel Program using Python

rates = {
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
def generatebill(pnumber):
    global rates
    min_, over, wait = rates[pnumber].items()
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
    


def package(package):
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
        generatebill(package)
    else:
        print("Exiting")
        return

def selection(option):
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
        package(pack)
    else:
        print("The PACKAGE you selected does not exist . Please try again\n")


def main():
    print("****|||||||||      HELLO! WELCOME USER    |||||||||****\n")
    print("\n")
    print("---> TO VIEW THE PACKAGES ENTER P/p\n")
    print("---> TO START BILLING ENTER B/b\n")
    opt = input("SELECT YOUR OPTION: ")
    selection(opt)

main()