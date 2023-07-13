A hash table is a data structure used for efficient storage and retrieval of key-value pairs. It is implemented in C using an array of fixed size, where each element in the array represents a "bucket" or "slot" for storing data.

Here's a summary of how a hash table works in C:

Hash Function: A hash function is used to convert the given key into an index of the array. The hash function should distribute the keys uniformly across the array to minimize collisions.

Collision Handling: Collisions occur when two keys generate the same index. There are different techniques to handle collisions:

Separate Chaining: Each slot in the array contains a linked list. Colliding elements are stored in the corresponding linked list.
Open Addressing: If a collision occurs, the algorithm probes the next available slot in the array until an empty slot is found.
Insertion: To insert a key-value pair into a hash table:

Apply the hash function to the key to determine the index.
If the slot is empty, store the key-value pair there.
If the slot is occupied (collision), use a collision handling technique to find the next available slot.
Retrieval: To retrieve the value associated with a key:

Apply the hash function to the key to determine the index.
If the slot is empty, the key is not present in the hash table.
If the slot is occupied, use the collision handling technique (if necessary) to find the correct slot.
Return the value associated with the key.
Deletion: To remove a key-value pair from the hash table:

Apply the hash function to the key to determine the index.
If the slot is empty, the key is not present in the hash table.
If the slot is occupied, use the collision handling technique (if necessary) to find the correct slot.
Remove the key-value pair from the slot.
Hash tables provide fast average-case time complexity for insertion, retrieval, and deletion operations, typically O(1) under ideal circumstances. However, in the worst case, these operations can have a time complexity of O(n) if there are many collisions. Therefore, choosing a suitable hash function and handling collisions effectively is important for optimal performance.




0. >>> ht = {}
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that creates a hash table.

Prototype: hash_table_t *hash_table_create(unsigned long int size);
where size is the size of the array
Returns a pointer to the newly created hash table
If something went wrong, your function should return NUL


1. djb2
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a hash function implementing the djb2 algorithm.

Prototype: unsigned long int hash_djb2(const unsigned char *str);
You are allowed to copy and paste the function from this pageL



2. key -> index
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that gives you the index of a key.

Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
where key is the key
and size is the size of the array of the hash table
This function should use the hash_djb2 function that you wrote earlier
Returns the index at which the key/value pair should be stored in the array of the hash table
You will have to use this hash function for all the next tasks

3. >>> ht['betty'] = 'cool'
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that adds an element to the hash table.

Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
Where ht is the hash table you want to add or update the key/value to
key is the key. key can not be an empty string
and value is the value associated with the key. value must be duplicated. value can be an empty string
Returns: 1 if it succeeded, 0 otherwise
In case of collision, add the new node at the beginning of the list

4. >>> ht['betty']
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that retrieves a value associated with a key.

Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
where ht is the hash table you want to look into
and key is the key you are looking for
Returns the value associated with the element, or NULL if key couldn’t be found

5. >>> print(ht)
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that prints a hash table.

Prototype: void hash_table_print(const hash_table_t *ht);
where ht is the hash table
You should print the key/value in the order that they appear in the array of hash table
Order: array, list
Format: see example
If ht is NULL, don’t print anything

6. >>> del ht
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that deletes a hash table.

Prototype: void hash_table_delete(hash_table_t *ht);
where ht is the hash table



