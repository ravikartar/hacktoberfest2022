

print("""welcome to this simple calculator""")


class Calculator():
    def __init__(self):
        self.user = None

    def floatcheck(self,entry):
        try:
            float(entry)
            return True
        except:
            return False


    def menu(self):
        print(""" we can only do
        1. Addition
        2. Subtraction
        3. Division
        4. Multiplication
        5. Exit
        """)

        self.user = input("enter the number for your operation: ")
        if self.user.isdigit() is False:
            print("invalid input")
            self.menu()
        elif int(self.user) == 5:
            print("exited")
            exit()
        elif int(self.user) == 1:
            self.addition()
        elif int(self.user) == 2:
            self.subtraction()
        elif int(self.user) == 3:
            self.division()
        elif int(self.user) == 4:
            self.multiplication()
        else:
            print("you have entered an invalid option")
            self.menu()
          

    def addition(self):
        self.num1 = input("enter first number: ")
        if self.floatcheck(self.num1) is False:
            print("invalid input")
            self.addition()
        self.num2 = input("enter second number: ")
        if self.floatcheck(self.num2) is False:
            print("invalid input")
            self.addition()
        else:
            ans = float(self.num1) +  float(self.num2)
            print("answer = ", ans)
            self.menu()
          
    def subtraction(self):
        self.num1 = input("enter first number: ")
        if self.floatcheck(self.num1) is False:
            print("invalid input")
            self.subtraction()
        self.num2 = input("enter second number: ")
        if self.floatcheck(self.num2) is False:
            print("invalid input")
            self.subtraction()
        else:
            ans = float(self.num1) - float(self.num2)
            print("answer = ", ans)
            self.menu()


    def division(self):
        self.num1 = input("enter first number: ")
        if self.floatcheck(self.num1) is False:
            print("invalid input")
            self.division()
        self.num2 = input("enter second number: ")
        if self.floatcheck(self.num2) is False:
            print("invalid input")
            self.division()
        elif float(self.num2) == 0:
            print("undefined")
            self.menu()
        else:
            ans = float(self.num1) / float(self.num2)
            print("answer = ", ans)
            self.menu()


    def multiplication(self):
        self.num1 = input("enter first number: ")
        if self.floatcheck(self.num1) is False:
            print("invalid input")
            self.multiplication()
        self.num2 = input("enter second number: ")
        if self.floatcheck(self.num2) is False:
            print("invalid input")
            self.multiplication()
        else:
            ans = float(self.num1) * float(self.num2)
            print("answer = ", ans)
            self.menu()
        
Calculator().menu()      
        
