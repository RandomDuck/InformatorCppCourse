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


