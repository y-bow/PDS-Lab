class BankAccount:
    count = 0

    count += 1
    def __init__(self, name, total):
        self.__name = name
        self.__total = total
        
    def total_accounts(self):
        print(f"Total Accounts : {self.__count}")
        
    def deposit(self, deposit_amount):
        self.__deposit = deposit_amount
        self.__balance = self.__total + self.__deposit
        self.__total = self.__balance
        print(f"Deposited : {self.__deposit}, New Balance : {self.__balance}")
        
    def withdraw(self, withdraw_amount):
        self.__withdraw = withdraw_amount
        if withdraw_amount > self.__total:
            print(f"Insufficient funds. Withdrawal failed.")
        else:
            self.__balance = self.__total - self.__withdraw
            print(f"Withdrawed : {self.__withdraw}, New Balance : {self.__balance}")
        
    def display_balance(self):
        print(f"Current Balance : {self.__balance}")
        
acc1 = BankAccount("John Doe", 1000)
acc1 = BankAccount("Anbuchelvan", 1000)
acc1.deposit(500)
acc1.withdraw(200)
acc1.withdraw(2000)
acc1.display_balance()
acc1.total_accounts()