# <pre> 15 most asked JavaScript interview questions</pre>



- ## <u>**BASIC :**</u>

1) What is 'typeof' operator?  
Ans:JavaScript provides a 'typeof' operator that can examine a value and tell you what data type it is.

2) Scopes in JavaScript?  
Ans:JavaScript has 3 types of scope:
    a) Block scope :
       -Variables declared inside a { } block cannot be accessed from outside the block.
       -Achieved using 'let' and 'const' variables.
	
    b) Local Scope :
       -Variables declared within a JavaScript function, become LOCAL to the function.
       -They can only be accessed from within the function.	

    c) Global Scope :
       -Variables declared Globally (outside any function) have Global Scope.
       -Global variables can be accessed from anywhere in a JavaScript program.

3) Explain equality in JavaScript  
Ans: JavaScript has both strict and type–converting comparisons:
     a) Strict comparison : (e.g., ===) checks for value equality along with checking data type.  
     b) Abstract comparison (e.g. ==) checks for value equality without checking data type.

4) What does 'use strict' do?  
Ans : The use strict literal is entered at the top of a JavaScript program or at the top of a function and it  
      helps you write safer JavaScript code by throwing an error if a global variable is created by mistake.

5) What kind of language JavaScript is?  
Ans : JavaScript is object-oriented language.



- ## <u>**INTERMEDIATE :**</u>
1) Difference betweeen 'Null' and 'Undefined' in JavaScript?  
Ans: When something that hasn't been initialised is called as undefined,whereas something that is currently  
     unavailable is null.

2) What is hoisting in JavaScript?  
Ans: In JavaScript, a variable can be declared after it has been used.  
     In other words; a variable can be used before it has been declared.

3) How do you share code in JavaScript between multiple files?  
Ans : Using ES5 syntax in JavaScript means that the sharing of code between files is done with the ‘require’ and ‘module.exports’  
statements. A ‘module’ in Javascript can be thought of as a container that holds related code which can then be exported to another file.

4) What is the use of 'WeakMaps'?  
Ans : WeakMaps provide a way to extend objects from the outside without interfering with garbage collection. Whenever you want to extend an  
      object but can't because it is sealed - or from an external source - a WeakMap can be applied.

5) What is an event bubbling in JavaScript?  
Ams : Event bubbling is a way of event propagation in the HTML DOM API, when an event occurs in an element inside another element, and both  
      elements have registered a handle for that event.



- ## <u>**EXPERT :**</u>

1) Name a JavaScript String function that modifies the original string.  
Ans : There's no such function,since strings are immutable.

2) What convenience method was added with ES6 to arrays to create an array from array-like and iterable objects?  
Ans : Array.from

3) What is 'temporal dead zone'?  
Ans : Temporal Dead Zone is a behaviour that occurs with variables declared using let and const keywords.  
      It is a behaviour where we try to access a variable before it is initialized.

4) When arrow functions should not be used in JavaScript?  
Ans : An arrow function doesn’t have its own this value and the arguments object. Therefore, you should not use it as an event handler,   
      a method of an object literal, a prototype method, or when you have a function that uses the arguments object.

5) What is generator in JS?  
Ans : Generators are functions which can be exited and later re-entered. Their context (variable bindings) will be saved across re-entrances.   
      Generator functions are written using the function* syntax. When called initially, generator functions do not execute any of their code, instead  
      returning a type of iterator called a Generator. When a value is consumed by calling the generator's next method, the Generator function executes  
      until it encounters the yield keyword.
