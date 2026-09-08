class BankAccount:
    def __init__(self):
        self.__bankBalance = 10
        
    def getBalance(self):
        print("balance = ", self.__bankBalance)

b = BankAccount()
# print("var = ", b.__bankBalance)
b.getBalance()