# intro and info about c++
Classes and template policy object, operator overloading
inheritance

Compile to native code
rebuilt c++ 2011

# varibles and types
Namespace = `<namespace>::<function/variable>`
extern is like a "global" keyword telling the compiler there is a variable with a specific name somewhere in a file. and to use it.

variables do not have a standardised set of size unless specifically supplied otherwise uses the machines registers standard size.


an uniintialise value is not undefined, instead it uses whatever value is in the registry that was assinged to it

enum vs enum class, enum is always global where enum class exists inside its own namspace/scope

Lvalue is anything that may be on the left hand side of an asignment, Rvalues are things that Cannot be on the left hand side, like literals or function returns

# header files, linker and compiler
header files tell cpp files where the functions or types or variables of other script files exist
scope talk, global vs local. standard stuff local shadows global
to use global inside local use scope operator `int x{::x}`


# classes and functions
function overload
classes, avoid setters, getters is fine
Abstractions for real world analogs
constructors are overloadable

remember `<classname> obj()` makes a function that returns class. use curly braces
only use constructurs to asign values dont do provessing

# header files & namspaces
becomes complicated when u want to inculde another header file for example when doing class inheritance and thus require include guards, therefore we should not include header files unless absolutley necissary.

Always include the corresponding headre file first in source, this keeps the source less error prone and also increases readability

remember to setup classes in header files and then define its functions in a cpp file for that class

only include things needed for external files goes into the header, otherwise use it in the .cpp file

unamed namspace is local to the current source file
namspaces should generaly go into the header file

namespaces can be included into a source file using the keyword `using <namspace>`
or specific parts can be made native using `using <namespace>::<partToMakeNative>`

# pointers and arrays, dynamic memory
array names are pointers. you can use a pointer to point to an array, doing this will point to the first element of an array, and so on. Function names are also pointers.

Constant pointers, they allow you to write protection to a non constant value

returning a referance to local values makes it available in stack meaning it can be overridden and thus cause errors

arrays are just pointers to a chunk of memory that is supposed to hold variables close to eachother.
in this way a string is just an array of chars.


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

# inheritance and abstraction
virtual keyword means it will be handled by an override function in a child parent
remember to use final for ur classes that no longer has virtual functions, if it shouldn't be inherited from simply remove the ability to inherit. Remember that if you do not define a function in the header "= 0" you must provide a definition in the cpp file.

override keyword should then be used in subclasses (children) to make the virtual function a real function.


# Throw and Assert
you can have multiple catch statements, they should go from the most final or defined to the least defined or most abstract. If we catch an unknown exception we can use `catch(...)` however we no longer get any data about the issue and can only do cleanup, we should take care to throw things that will describe our problem properly. we must remember to delete our pointers or have memory leaks

Asserts should be used for logic errors to SHAME OUR DEVELOPERS INTO SUBMISSION, and to fail faster and fix bugs.

Throw should be used for runtime errors, where we are aware that an error can occur but we cannot be sure if or how.

We should use assert in debug and throw exceptions in production. The good thing about assert is it will not crash a application running production but will crash if running debug.

If we never throw we can tag our function with noexcept, however we should use this cautiously, *MAKE SURE NOT THROW IF YOU TAG IT*, due to compiler optimizations.

# templates
Useful for dealing with allot of different data where the same operation need to be made on them. Probably not making these. but good to know. std lib uses templates quite a lot. will likely be using lots of templates.

To define what type a template uses we use the following syntax `classname<TYPE>`
Perhaps something to check out in the future.

# iterators
brain hurty, going crosseyed, need coffee send help.
keywords predicators, first, last, begin, end, generator.

# lambdas
[`pass variables here, notably = gives copy of local scope, & gives referance of local scope`](`set paramaters here`) -> `defifine type (will be done autmatically)` {`code block`};

# containers
All containers store copies. generator version often suffice. Consider pointer or even better smart pointers.
All containers have similar methods, implemented only if meaningful.

ex. size(), empty(), begin(), end(), push_back() etc..

# smart pointers
deletes themselves, wraps around regular pointers. no need to make destructors and keeps us safe from unclear interfaces.
