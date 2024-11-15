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
