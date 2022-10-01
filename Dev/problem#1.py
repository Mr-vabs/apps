# Create a class programmer for storing information of few programmers working on Microsoft
class programmer:
    company = "Microsoft"

    def __init__(self, name, product):
        self.name = name
        self.product = product

    def printInfo(self):
        print(
            f"The name of the programmer is {self.name} and working on product {self.product}")


Laraib = programmer("Laraib", "WINDOWS 10")
Vaibhav = programmer("Vaibhav Kasaudhan", "android 11")
Vaibhav.printInfo()
Laraib.printInfo()
