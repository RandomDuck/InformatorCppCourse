# Memmory, virtual and physical, stack and heap
physical vs virtual memory
physical memory is RAM,
Virtual memory simply points either to the drive or the RAM depending on where its stored.
Virtual memory only maps, but it does not reserve or allocate ram until the first use.

### Stack memory 
Exists during execution of functions, variable types, variable data for local variables.
Do not store big data on stack

1 stack per thread. Stack memory is a mostly static memory pool that is abou 1mb - 8mb large depending on OS

### Heap memory 
A dynamic memory pool, DMS keeps track of available data blocks, Applications and programs keeps pointers to used blocks.

Improperly terminated or accidentally freed up will cause memory leak. Make sure you terminate safely when releasing heap memory.

Heaps are far slower than stack memory and should be used to stor larger data.

To allocate to the heap use the `new` keyword. remember to then use `delete`or `delete[]` to deallocate the memory. Deallocating the memory will not remove the pointer, so make sure the pointer is not reused or at-least that you set the pointer to `nullptr` so it does not point to invalid memory.

### Static memory
Global and static variables that exists for the entire execution of a program. As long as it is know at runtime.


# destructuring
making a class allows you to add a constructor, in the same vain you can make a destructor. `~<classname> {}` this is things that will run when you delete a class instance.

When leaving scope destructuring happens automatically.

# linked lists
Store a pointer to next data with ur current data, allowing versitility att the expense of speed.

Contains an arbitrary number of elements
Unlike Arrays who have fixed size

Each element is linked to the next one using a pointer

Holds data, payload, directly or via an internal pointer to data
Singly or doubly linked

### List elements
Constructor assigns pointer to next element
Constructor allocates and destructor releases data (if owned by pointer)

The list can be handled by a list class object
