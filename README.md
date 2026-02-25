Library Management System
This is a mini project for my DSA practical. I have built this using C++ and Qt Creator. I used a Doubly Linked List to store and manage book records.

Key Features:
Unique ID Generation:
The system creates a special ID for every book based on its floor, shelf, row and its serial number(Example: F1-S2-R3-010). This helps to find the book location easily.

Book Management:
I used a Doubly Linked List (DLL) to add and store books. This makes it easy to add new data or delete books from the list.

Search System:
There is a search bar to find books by name or ID. It uses a simple loop to check the records, which is O(n) complexity.

Issue and Return:
The system can record which student borrowed a book and when they have to return it.

Fine Calculation:
If the return date is late, the system calculates a fine of Rs. 10 per day automatically.

Summary Table:
A main table shows all the books, their IDs, and whether they are available or borrowed.

Dashboard: 
A dashboard that shows total,borrowed and available books of the library
