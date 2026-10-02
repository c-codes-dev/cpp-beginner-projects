# 🍽️ Restaurant Ordering and Billing System

A beginner-friendly C++ program that allows customers to order food from a restaurant menu, calculates the total bill, applies a discount, and keeps track of total customers served and restaurant sales.

## What This Program Does........

- Displays a restaurant menu using a `do-while` loop.
- Allows the customer to enter their choice.
- Uses a `switch` statement to determine which item the customer selected.
- Asks the customer to enter the quantity.
- Calculates the item price using price × quantity.
- Keeps showing the menu until the customer chooses "Finish Order".
- Gives a 10% discount if the bill is $50 or more.
- Calculates the final bill after the discount.
- Asks whether another customer wants to place an order.
- Counts the total number of customers served.
- Calculates the total restaurant sales.

## 🧠 C++ Concepts Used

- `do-while` loop
- Nested loops
- `switch` statement
- `if-else` statement
- Variables
- `cin` and `cout`
- Basic input and output
- Arithmetic calculations
- Percentage calculations
- Comparison operators
- Logical operators
- `break` statement

## 🍔 Restaurant Menu

| Choice | Item | Price |
|---|---|---:|
| 1 | Burger | $5 |
| 2 | Pizza | $8 |
| 3 | Pasta | $6 |
| 4 | Drink | $2 |
| 5 | Finish Order | — |

## 💰 Discount

If the total bill is **$50 or more**, the customer receives a **10% discount**.

| Total Bill | Discount |
|---|---:|
| Less than $50 | No discount |
| $50 or more | 10% |

## 🔄 Loops

The program uses a **nested `do-while` loop**.

The inner loop keeps displaying the menu and taking orders until the customer chooses:

```text
5. Finish Order
