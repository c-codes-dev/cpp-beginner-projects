🏨 Hotel Booking and Bill System

A beginner-friendly C++ program that calculates a hotel customer's bill based on their room type, number of nights, age, and student status.

What This Program Does........

- Takes the customer's name as input.
- Takes the customer's age as input.
- Asks whether the customer is a student ("Y/N").
- Takes the number of nights they want to stay.
- Allows the customer to select a room type.
- Determines the room price using an if-else-if ladder.
- Calculates the base bill using the room price and number of nights.
- Gives an age-based discount.
- Gives students an additional 5% discount.
- Determines the stay category based on the final bill.
- Uses a switch statement to display the room type.
- Uses another switch statement to display the stay category.
- Displays the final hotel bill.

🧠 C++ Concepts Used

- "if-else-if" ladder
- "switch" statement
- Variables
- "char" and "string"
- "cin" and "cout"
- Basic input and output
- Arithmetic calculations
- Percentage calculations
- Nested decision-making
- Comparison operators
- Logical operators ("||", "&&")

🏨 Room Types & Prices

Room Type| Price Per Night
Standard| $50
Deluxe| $80
Suite| $120

🎟️ Age-Based Discount

Age| Discount
12 or under| 10%
13–59| No discount
60 or above| 15%

🎓 Student Discount

Students receive an additional 5% discount after the age-based discount has been applied.

Student: "Y" → 5% off
Not a student: "N" → No student discount

💰 Stay Categories

The final bill determines the customer's stay category.

Category| Final Bill| Stay Type
1| $100 or less| Budget Stay
2| More than $100 to $300| Comfortable Stay
3| More than $300| Premium Stay

🔀 Decision Making

The program uses an if-else-if ladder to determine the price of the selected room.

The program uses a switch statement to display:

- Standard / Deluxe / Suite
- Budget Stay / Comfortable Stay / Premium Stay

💻 Example

Enter customer name: Ali
Enter age: 20
Are you a student? (Y/N): Y
Enter number of nights: 3

Room Types:
1. Standard - $50 per night
2. Deluxe   - $80 per night
3. Suite    - $120 per night

Enter room type: 1

----- HOTEL BILL -----
Customer Name: Ali
Room Type: Standard
Stay Category: Comfortable Stay
Number of Nights: 3
Room Price per Night: $50
Base Bill: $150
Age Discount: $0
Student Discount: $7.5
Final Bill: $142.5

🎯 Purpose

This is my beginner 3rd C++ practice project. I created it to practice decision-making, if-else-if ladders, switch statements, calculations, discounts, and user input.

👩‍💻 Learning Progress

This is my next beginner C++ project as I continue learning and practicing C++ programming.

Through this project, I practiced using different decision-making techniques and learned how to combine them to create a simple real-world billing system.
