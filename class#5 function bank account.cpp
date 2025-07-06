#include <iostream>
#include <string>

class BankAccount { // BankAccount ------- class name
  private: 
    std::string accountNumber; 
    double balance; 
  public:
    // Constructor to initialize BankAccount object with provided values
    BankAccount(const std::string & accNum, double initialBalance): accountNumber(accNum), balance(initialBalance) {}

    void deposit(double amount) {
      balance += amount; // Add the deposited amount to the current balance
      std::cout << "Deposit successful. Current balance: " << balance << std::endl; // Output success message and current balance
    }
    
    void withdraw(double amount) {
      if (amount <= balance) { 
        balance -= amount; // Deduct the withdrawn amount from the current balance
        std::cout << "Withdrawal successful. Current balance: " << balance << std::endl; 
      } else {
        std::cout << "Insufficient balance. Cannot withdraw." << std::endl; 
      }
    }
};

int main() {
  std::string sacno = "SB-123"; // Define the account number
  double Opening_balance, deposit_amt, withdrawal_amt; // Define variables for opening balance, deposit amount, and withdrawal amount
  Opening_balance = 1000; // Assign the opening balance
  std::cout << "A/c. No." << sacno << " Balance: " << Opening_balance << std::endl; // Output the account details

  BankAccount account(sacno, 1000.0); // Create a BankAccount object with initial account number and balance

  deposit_amt = 1500; 
  
  std::cout << "Deposit Amount: " << deposit_amt << std::endl; 
  account.deposit(deposit_amt); // Call the deposit method of the account object

  withdrawal_amt = 750; 
  std::cout << "Withdrawal Amount: " << withdrawal_amt << std::endl; 
  account.withdraw(withdrawal_amt); // Call the withdraw method of the account object

  withdrawal_amt = 1800; // Define an amount higher than the balance for withdrawal
  std::cout << "Attempt to withdrawal Amount: " << withdrawal_amt << std::endl; // Output the withdrawal amount
  account.withdraw(withdrawal_amt); // Call the withdraw method of the account object

  return 0; 
}
