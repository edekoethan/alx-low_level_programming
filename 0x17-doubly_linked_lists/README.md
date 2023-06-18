A doubly linked list is a data structure in C that consists of nodes, where each node contains a data element and two pointers: one pointing to the previous node and another pointing to the next node. This allows for traversal in both forward and backward directions.

Here's a summary of the main operations and characteristics of a doubly linked list in C:

Node Structure:
c
Copy code
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
Initialization:
c
Copy code
struct Node* head = NULL;  // Initialize an empty list
Insertion:
Insertion at the beginning:
c
Copy code
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->prev = NULL;
newNode->next = head;

if (head != NULL)
    head->prev = newNode;

head = newNode;
Insertion at the end:
c
Copy code
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = NULL;

struct Node* current = head;
if (head == NULL) {
    newNode->prev = NULL;
    head = newNode;
    return;
}

while (current->next != NULL)
    current = current->next;

current->next = newNode;
newNode->prev = current;
Deletion:
Delete the first node:
c
Copy code
struct Node* temp = head;
head = head->next;
head->prev = NULL;
free(temp);
Delete the last node:
c
Copy code
struct Node* current = head;
while (current->next != NULL)
    current = current->next;

current->prev->next = NULL;
free(current);
Traversal:
Forward traversal:
c
Copy code
struct Node* current = head;
while (current != NULL) {
    // Process current node
    current = current->next;
}
Backward traversal:
c
Copy code
struct Node* current = head;
while (current->next != NULL)
    current = current->next;

while (current != NULL) {
    // Process current node
    current = current->prev;
}
These are the basic operations for a doubly linked list in C. Remember to handle memory allocation and deallocation appropriately.


0. Print list
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that prints all the elements of a dlistint_t list.

1. List length
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that returns the number of elements in a linked dlistint_t list.

2. Add node
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that adds a new node at the beginning of a dlistint_t list.

3. Add node at the end
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that adds a new node at the end of a dlistint_t list.

4. Free list
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that frees a dlistint_t list.

5. Get node at index
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that returns the nth node of a dlistint_t linked list.

6. Sum list
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that returns the sum of all the data (n) of a dlistint_t linked list.

7. Insert at index
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that inserts a new node at a given position.

8. Delete at index
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that deletes the node at index index of a dlistint_t linked list.

9. Crackme4
#advanced
Score: 0.0% (Checks completed: 0.0%)
Find the password for crackme4.

10. Palindromes
#advanced
Score: 0.0% (Checks completed: 0.0%)
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

Save the result in the file 102-result
Your file should contain the exact result, no new line, no extra space

11. crackme5
#advanced
Score: 0.0% (Checks completed: 0.0%)
Write a keygen for crackme5.
