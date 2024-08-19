###  Digital Wallet Management System 💳

---

Welcome to the **Digital Wallet Management System**! This software platform helps users manage their financial transactions digitally. It allows users to securely transfer and receive funds and view their account balances conveniently. This system is designed to make financial management simple, fast, and secure. 🚀

### 📋 Features

- **Manage Users:** Each user has a unique ID and an initial balance.
- **Fund Transfers:** Users can transfer funds between accounts.
- **Transaction Verification:** The system confirms whether a transaction is successful or not.
- **Balance Sorting:** After all transactions, users are displayed in sorted order based on their remaining balance.

### 📌 Input Format

1. **Number of Users:** The first line contains an integer `N`, the number of users.
2. **User Details:** The next `N` lines contain two integers each: `userID` and `balance`.
   - `userID`: The user's identifier (unique).
   - `balance`: The user's initial balance.
3. **Number of Transactions:** The next line contains an integer `T`, the number of transactions.
4. **Transaction Details:** The next `T` lines each contain three integers:
   - `from_userID`: The ID of the user initiating the transfer.
   - `to_userID`: The ID of the user receiving the transfer.
   - `amount`: The amount of money being transferred.

### ⚙️ Constraints

- 1 ≤ `N` ≤ 102 (Number of users)
- 1 ≤ `userID` ≤ 102 (Unique identifier for each user)
- 0 ≤ `balance` ≤ 10,000 (User's initial balance)
- 1 ≤ `T` ≤ 1,000 (Number of transactions)
- 0 ≤ `amount` ≤ 10,000 (Amount to be transferred)

### 🖥️ Output Format

For each transaction:
- Print `"Success"` if the transaction was completed successfully.
- Print `"Failure"` if the transaction could not be completed (e.g., insufficient funds).

After all transactions:
- Print all users in sorted order based on their leftover balance. The user with the lowest balance appears first.

### 🔍 Sample Input

```plaintext
4
1 9000
2 3000
3 7500
4 2000

5
1 2 1000
3 4 3000
2 3 500
4 1 7500
1 4 1500
```

### 🎯 Sample Output

```plaintext
Success
Success
Success
Failure
Success

2 3500
3 5000
1 6500
4 6500
```

### 🛠️ Implementation in C++

To get started with implementing this system in C++, follow the structure below:

1. **Define User Class:** Create a class for users that includes attributes like `userID` and `balance`.
2. **Transaction Processing:** Create functions to handle transactions between users, ensuring balance checks.
3. **Sorting Functionality:** Implement sorting of users based on their remaining balance after all transactions.
4. **Input & Output Handling:** Capture the input as per the format and produce the output as required.

### 💡 Tips

- Ensure proper error handling for edge cases, like when a user tries to transfer more money than they have.
- Use efficient algorithms for sorting to handle the maximum number of users and transactions within the constraints.

### 🚀 Get Started

Simply clone the repository and compile the C++ program using your preferred compiler. Run the program with the provided sample inputs to test its functionality. 🎉

---

Happy coding! 💻 If you have any issues or suggestions, feel free to contribute or raise an issue in the repository.
