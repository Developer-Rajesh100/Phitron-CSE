# import random
#
# class User:
#     users = []
#     def __init__(self, name, email, address, account_type, current_balance=0):
#         self.name = name
#         self.email = email
#         self.address = address
#         self.account_type = account_type
#         self.current_balance = current_balance
#         self.loan_amount = 0
#         self.account_number = None
#         self.can_take_loan = False
#         self.isBankrupt = False
#
#     def create_account(self):
#         account = CreateAccount(self.name, self.email, self.address, self.account_type)
#         self.users.append(account)
#
#
#     def deposit(self, amount):
#         self.current_balance += amount
#         # return self.current_balance
#
#     def withdraw(self, amount):
#         if self.current_balance >= amount:
#             self.current_balance -= amount
#             # return self.current_balance
#         else:
#             return "Withdrawal amount exceeded"
#
#     def check_balance(self):
#         return self.current_balance
#
#     def transaction_history(self):
#         pass
#
#     def can_take_loan(self):
#         loan_times = 0
#         if loan_times < 3:
#             return True
#         else:
#             return False
#
#     def take_loan(self, amount):
#         if self.can_take_loan():
#             self.current_balance += amount
#             self.loan_amount += amount
#             # return self.current_balance
#         else:
#             return "You are not eligible for loan"
#
#     def transfer(self, amount, transfer_to):
#         paying = self.users
#         flag = False
#         for user in paying:
#             if user.account_number == transfer_to:
#                 self.current_balance -= amount
#                 user.current_balance += amount
#                 flag = True
#         if not flag:
#             return "Account does not exist"
#
# class CreateAccount:
#     def __init__(self, name, email, address, account_type):
#         self.name = name
#         self.email = email
#         self.address = address
#         self.account_type = account_type
#
# class AccountNumber:
#     def __init__(self):
#         self.existing_numbers = set()
#
#     def generateNumber(self):
#         while True:
#             account_number = random.randint(100000, 999999)
#             if account_number not in self.existing_numbers:
#                 self.existing_numbers.add(account_number)
#                 return account_number


import random

class User:
    users = []  # Store all users in this list

    def __init__(self, name, email, address, account_type, current_balance=0):
        self.name = name
        self.email = email
        self.address = address
        self.account_type = account_type
        self.current_balance = current_balance
        self.loan_amount = 0
        self.account_number = None
        self.can_take_loan = True  # Allow loan initially
        self.isBankrupt = False

    def create_account(self):
        account = CreateAccount(self.name, self.email, self.address, self.account_type)
        account_number_generator = AccountNumber()
        self.account_number = account_number_generator.generateNumber()  # Assign unique account number
        User.users.append(self)  # Add the user to the users list
        print(f"Account created successfully. Your account number is {self.account_number}")

    def deposit(self, amount):
        self.current_balance += amount

    def withdraw(self, amount):
        if self.current_balance >= amount:
            self.current_balance -= amount
        else:
            return "Withdrawal amount exceeded"

    def check_balance(self):
        return self.current_balance

    def transaction_history(self):
        pass  # Implement transaction history storage

    def is_eligible_for_loan(self):
        if self.loan_amount == 0 or self.loan_amount < 3 * self.current_balance:
            return True
        else:
            return False

    def take_loan(self, amount):
        if self.is_eligible_for_loan() and self.can_take_loan:
            self.current_balance += amount
            self.loan_amount += amount
            return f"Loan of {amount} granted. Your new balance is {self.current_balance}"
        else:
            return "You are not eligible for a loan"

    def transfer(self, amount, transfer_to):
        flag = False
        for user in User.users:
            if user.account_number == transfer_to:
                if self.current_balance >= amount:
                    self.current_balance -= amount
                    user.current_balance += amount
                    flag = True
                    return f"Transferred {amount} to account {transfer_to}. Your balance is now {self.current_balance}"
                else:
                    return "Insufficient balance"
        if not flag:
            return "Account does not exist"


class CreateAccount:
    def __init__(self, name, email, address, account_type):
        self.name = name
        self.email = email
        self.address = address
        self.account_type = account_type


class AccountNumber:
    def __init__(self):
        self.existing_numbers = set()

    def generateNumber(self):
        while True:
            account_number = random.randint(100000, 999999)
            if account_number not in self.existing_numbers:
                self.existing_numbers.add(account_number)
                return account_number