Data Structure

it's a way to store and organize data so that it can be used efficiently. It helps in organizing data in memory. It is not a programming language itself but a set of algorithms that can be used within any programming language to structure data in memory.

Data Structures Classification

Data structures are broadly classified into two categories:

<img width="1293" height="937" alt="image" src="https://github.com/user-attachments/assets/39c58403-a274-43dd-8e26-e320770f9ab1" />

- *Primitive data structures*: These are basic data types that are built into a programming language, such as int, char, float, double, and pointer.
- *Non-primitive data structures*: These are more complex data structures created from primitive data structures. They are further divided into linear and non-linear data structures.

Linear Data Structure

The arrangement of data in a sequential manner is known as a linear data structure. The data structures used for this purpose include arrays, linked lists, stacks, and queues. In linear data structures, one element is connected to only one other element in the sequence.

*Examples of Linear Data Structures:*

Example : Arrays , Linked Lists , Stacks , Queues

*Characteristics of Linear Data Structures:*

1- Elements are arranged in a sequential manner 2- Each element is connected to only one other element 3- Data is accessed in a linear sequence linear form

Non-linear data structure :-
When one element is connected to the 'n' number of elements known as non-linear data structures.

Example: trees and graphs.
in In this case, elements are arranged a random manner.

Algorithms and Abstract Darta types ??

<img width="601" height="370" alt="Screenshot 2025-12-13 081215" src="https://github.com/user-attachments/assets/94e96a73-a7dd-4244-b6bf-33b2db27931c" />

Why --> To structure the data in memory, 'n' number of algunthms are proposed, and all these algorithms are knowns as Abstract Darta Types , An Abstract Data Type (ADT) tells what is to be done and DS tells how is to be done ? , ADT gives us the bluepint while ds provides the implementation part 

What is the Need of Data Structures?

Data structures are needed to organize, store, manage, and process data efficiently in computer programs.

Why we need them:

1-Computers handle large amounts of data 2-Efficient data handling improves performance 3-Proper organization reduces time and memory usage 4-Makes programs scalable and maintainable

Real-world example:

1-A pharmacy system storing products, suppliers, and orders 2-A browser storing visited pages (Stack) 3-A search engine indexing data (Tree / Hashing) 4-Without data structures, programs become slow, complex, and difficult to manage.

Basic Data Terminology
1-Data :-Data is a raw fact or value

Examples: (25,"Mahmoud",true)
➡ Data alone has no meaning unless processed.

2-Attribute :- An attribute is a property or characteristic of an entity.

Examples: Student → Name, Age, ID       Product → Price, Quantity

3-Record :-A record is a collection of related attributes.

Example: Student Record: ID = 101  , Name = Mahmoud , Age = 22    ---> ecplanation:- One complete row in a table = one record.

4- File :- A file is a collection of records.

Example: Student file contains multiple student records , Product file contains many product records    ➡ In databases, a file is similar to a table.

5- Entity :- An entity is a real-world object that has an independent existence.

Examples:Student , Employee , Product , Order

Each entity: , Has attributes , Can have multiple records

# Relationship Between Terms :-
Entity → Attribute → Record → File

Example:
Entity: Student
Attributes: ID, Name, Age
Record: One student's details
File: All students data

# Advantages of Data Structures
 1. Efficient Data Access (Faster searching, sorting, and updating) 2. Better Memory Management ( Optimal use of memory , Avoids wastage ) 3. Improved Performance (Reduces time complexity , Makes applications faster ) 4. Code Reusability ( Standard structures like Stack, Queue, List can be reused ) 5. Scalability ( Handles growing data easily ) 6. Real-World Modeling (Helps represent real-world systems logically ) 

Operations on Data Structures

<img width="868" height="801" alt="image" src="https://github.com/user-attachments/assets/2317695a-816d-4a55-830b-27ca79544b6b" />

1- Traversin :- Traversing means visiting each element of a data structure one by one in order to perform a specific operation.
 
 Why it is needed : 1-Searching elements 2-Sorting data 3-Calculating values (sum, average, etc.)

 Example (from the photo) --> If we want to calculate the average marks of a student in different subjects

2- Insertion :- Insertion is the process of adding a new element to a data structure at any specific location.

Important point :- If the size of the data structure is n, we can insert elements only if space is available.

Example :- Inserting a new value into an array 2-Adding a node to a linked list 3-Pushing an element into a stack  "In arrays, insertion may require shifting elements "

3- Deletion :- Deletion is the process of removing an element from a data structure.

🔹 Key notes

Deletion can occur at:- 1-Beginning 2-End 3-Any random position

Important condition :- If we try to delete an element from an empty data structure, an underflow condition occurs.

Example :- 1-Removing an element from an array 2-Popping an element from a stack 3-Deleting a node from a linked list

4- Searching :- Searching is the process of finding the location (position) of a given element in a data structure.

Purpose :- 1-Check whether an element exists 2-Find the index or position of an element

Common searching methods :- 1-Linear Search – checks elements one by one 2-Binary Search – faster, but requires sorted data

5- Sorting :- Sorting is the process of arranging data elements in a specific order.

Common orders

1-Ascending order (small → large)

2-Descending order (large → small)

Why sorting is important :- 1-Makes searching faster 2-Improves data organization 3-Used in databases and real applications

Examples of sorting algorithms (mentioned in the photo) :- 1-Insertion Sort 2-Selection Sort 3-Bubble Sort  --> There are many other sorting algorithms like Merge Sort and Quick Sort.

6- Merging :- Merging is the process of combining two lists of similar data types into a single list.

Explanation :- 

List A of size M
List B of size N
After merging → List C of size (M + N)

# What is an Algorithm ?
An algorithm is a step-by-step procedure or set of rules used to solve a problem or perform a computation.

Important points  :- 1-An algorithm is not a program or code 2-It is the logic or solution approach 3-It can be represented using: 4-Flowcharts 5-Pseudocode 6-Simple written steps

Example :- Steps to find the maximum number: 1-Start 2-Read numbers 3-Compare values 4-Display the largest 5-Stop

Characteristics of an Algorithm :- 
1- Input ( An algorithm can take: Zero input or , One or more inputs ) 
2- Output ( An algorithm must produce at least one output , Output is obtained at the end of algorithm execution )
  Example: Input → numbers  Output → sum / average / maximum value
3- Unambiguity ( The algorithm should be unambiguous , Each instruction must be clear and simple , No step should have multiple meanings )
  Example: not corect “Process the data” (unclear) , corect “Add all numbers and store the result” (clear)
4- Finiteness ( An algorithm must terminate , It should have a finite (limited) number of steps , An algorithm that runs forever is invalid.)
5- Effectiveness

Every step must be: Simple , Executable , Practical , Each instruction should contribute to the final result.

