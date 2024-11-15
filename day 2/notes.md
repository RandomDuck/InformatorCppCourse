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
