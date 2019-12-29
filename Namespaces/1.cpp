// // Theory :-

// // Namespaces allow us to group named entities that otherwise would have global scope into narrower scopes, 
// giving them namespace scope. This allows organizing the elements of programs into different logical
//  scopes referred to by names.

// //     Namespace is a feature added in C++ and not present in C.
// //     A namespace is a declarative region that provides a scope to the identifiers 
// (names of the types, function, variables etc) inside it.
// //     Multiple namespace blocks with the same name are allowed. All declarations within 
// those blocks are declared in the named scope.

// // A namespace definition begins with the keyword namespace followed 
// by the namespace name as follows:


#include <iostream>

namespace first{
    int val = 40; //variable created inside namespace
}

int val = 50; // global variable

int main(){
    int val = 30; //local variable 

    std :: cout << first::val << "\n"; 
    std :: cout << val << "\n";

    return 0;
}
