# from .user import User
# from .admin import Admin
#
# while True:
#     print("Welcome to the bank")
#
#     print("0. Admin Login")
#     print("1. Create Account")
#     print("2. Deposit")
#     print("3. Withdraw")
#     print("4. Check Balance")
#     print("5. Transaction History")
#     print("6. Take Loan")
#     print("7. Transfer")
#     print("8. Exit")
#
#     choice = int(input("Enter your choice: "))
#
#     if choice == 0:
#         print('''
#         Admin Login Details:
#         Username: admin
#         Password: 1234
#         ''')
#         username = input("Enter your username: ")
#         password = input("Enter your password: ")
#         if username == "admin" and password == "1234":
#             admin = Admin()
#             print("Login successful")
#             while True:
#                 print("0. Create Account")
#                 print("1. Delete Account")
#                 print("2. View All Accounts")
#                 print("3. Total Balance")
#                 print("4. Total Loan")
#                 print("5. Total Loan Balance")
#                 print("6. Loan Off")
#                 print("7. Exit")
#
#                 admin_choice = int(input("Enter your choice: "))
#
#                 if admin_choice == 0:
#                     name = input("Enter your name: ")
#                     email = input("Enter your email: ")
#                     address = input("Enter your address: ")
#                     account_type = input("Enter your account type: ")
#                     admin.create_account(name, email, address, account_type)
#                     print("Account created successfully")
#
#                 elif admin_choice == 1:
#                     account_number = int(input("Enter the account number to delete: "))
#                     admin.delete_account(account_number)
#                     print("Account deleted successfully")
#
#                 elif admin_choice == 2:
#                     admin.view_all_accounts()
#
#                 elif admin_choice == 3:
#                     total_balance = admin.total_balance()
#                     print(f"Total balance is {total_balance}")
#
#                 elif admin_choice == 4:
#                     total_loan = admin.total_loan()
#                     print(f"Total loan is {total_loan}")
#
#                 elif admin_choice == 5:
#                     admin.loan_off()
#                     print("Loan off successfully")
#
#                 elif admin_choice == 6:
#                     break
#
#                 else:
#                     print("Invalid choice")
#
#     elif choice == 1:
#         name = input("Enter your name: ")
#         email = input("Enter your email: ")
#         address = input("Enter your address: ")
#         account_type = input("Enter your account type: ")
#         user = User(name, email, address, account_type)
#         user.create_account()
#         print("Account created successfully")
#
#     elif choice == 2:
#         amount = int(input("Enter the amount to deposit: "))
#         user.deposit(amount)
#         print("Amount deposited successfully")
#
#     elif choice == 3:
#         amount = int(input("Enter the amount to withdraw: "))
#         user.withdraw(amount)
#         print("Amount withdrawn successfully")
#
#     elif choice == 4:
#         balance = user.check_balance()
#         print(f"Your current balance is {balance}")
#
#     elif choice == 5:
#         user.transaction_history()
#
#     elif choice == 6:
#         amount = int(input("Enter the amount to take as loan: "))
#         user.take_loan(amount)
#         print("Loan taken successfully")
#
#     elif choice == 7:
#         amount = int(input("Enter the amount to transfer: "))
#         transfer_to = int(input("Enter the account number to transfer: "))
#         user.transfer(amount, transfer_to)
#         print("Amount transferred successfully")
#
#     elif choice == 8:
#         break
#
#     else:
#         print("Invalid choice")

from user import User
from admin import Admin

while True:
    print("\nWelcome to the bank")
    print("0. Admin Login")
    print("1. Create Account")
    print("2. Deposit")
    print("3. Withdraw")
    print("4. Check Balance")
    print("5. Transaction History")
    print("6. Take Loan")
    print("7. Transfer")
    print("8. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 0:
        print("""Admin Login Details:
        Username: admin
        Password: 1234""")
        username = input("Enter your username: ")
        password = input("Enter your password: ")
        if username == "admin" and password == "1234":
            admin = Admin()
            print("\nLogin successful")
            while True:
                print("0. Create Account")
                print("1. Delete Account")
                print("2. View All Accounts")
                print("3. Total Balance")
                print("4. Total Loan")
                print("5. Disable Loan for Account")
                print("6. Exit")

                admin_choice = int(input("Enter your choice: "))

                if admin_choice == 0:
                    name = input("Enter your name: ")
                    email = input("Enter your email: ")
                    address = input("Enter your address: ")
                    account_type = input("Enter your account type: ")
                    admin.create_account(name, email, address, account_type)

                elif admin_choice == 1:
                    account_number = int(input("Enter the account number to delete: "))
                    print(admin.delete_account(account_number))

                elif admin_choice == 2:
                    admin.view_all_accounts()

                elif admin_choice == 3:
                    print(f"Total balance: {admin.total_balance()}")

                elif admin_choice == 4:
                    print(f"Total loan: {admin.total_loan()}")

                elif admin_choice == 5:
                    account_number = int(input("Enter account number to disable loan: "))
                    print(admin.loan_off(account_number))

                elif admin_choice == 6:
                    break

        else:
            print("Invalid login credentials")

    elif choice == 1:
        name = input("Enter your name: ")
        email = input("Enter your email: ")
        address = input("Enter your address: ")
        account_type = input("Enter your account type: ")
        user = User(name, email, address, account_type)
        user.create_account()

    elif choice == 2:
        amount = int(input("Enter the amount to deposit: "))
        user.deposit(amount)
        print("Amount deposited successfully")

    elif choice == 3:
        amount = int(input("Enter the amount to withdraw: "))
        print(user.withdraw(amount))

    elif choice == 4:
        print(f"Your current balance is {user.check_balance()}")

    elif choice == 5:
        user.transaction_history()

    elif choice == 6:
        amount = int(input("Enter the amount to take as loan: "))
        print(user.take_loan(amount))

    elif choice == 7:
        amount = int(input("Enter the amount to transfer: "))
        transfer_to = int(input("Enter the account number to transfer to: "))
        print(user.transfer(amount, transfer_to))

    elif choice == 8:
        break

    else:
        print("Invalid choice")
