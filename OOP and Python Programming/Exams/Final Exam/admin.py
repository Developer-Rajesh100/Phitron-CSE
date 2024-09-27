# from .user import CreateAccount, users
#
# class Admin:
#     def __init__(self):
#         pass
#
#     def create_account(self, name, email, address, account_type):
#         account = CreateAccount(name, email, address, account_type)
#         # return account
#
#     def delete_account(self, account_number):
#         for user in users:
#             if user.account_number == account_number:
#                 users.remove(user)
#                 # return "Account deleted"
#         return "Account not found"
#
#     def view_all_accounts(self):
#         for user in users:
#             print(f"Name: {user.name}, Email: {user.email}")
#
#     def total_balance(self):
#         total = 0
#         for user in users:
#             total += user.current_balance
#         return total
#
#     def total_loan(self):
#         total = 0
#         for user in users:
#             total += user.loan_amount
#         return total
#
#     def loan_off(self):
#         users.can_take_loan = False



class Admin:
    def __init__(self):
        pass

    def create_account(self, name, email, address, account_type):
        user = User(name, email, address, account_type)
        user.create_account()

    def delete_account(self, account_number):
        for user in User.users:
            if user.account_number == account_number:
                User.users.remove(user)
                return "Account deleted successfully"
        return "Account not found"

    def view_all_accounts(self):
        for user in User.users:
            print(f"Name: {user.name}, Email: {user.email}, Account Number: {user.account_number}")

    def total_balance(self):
        total = sum(user.current_balance for user in User.users)
        return total

    def total_loan(self):
        total = sum(user.loan_amount for user in User.users)
        return total

    def loan_off(self, account_number):
        for user in User.users:
            if user.account_number == account_number:
                user.can_take_loan = False
                return "Loan disabled for this account"