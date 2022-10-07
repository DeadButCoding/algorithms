1. What are the different access specifiers for Java classes?
Access classifiers are said to be the keywords that are used before a class name which refers the access scope in Java. The below types of access classifiers is highly important and also frequently asked Java Interview Questions.

public: field, method, class is accessible from anywhere.
protected: field and method can be accessed from the same class to where they belong or from subclasses, and from same package class, but not from outside.
default: field, method, the class can be accessed from the same package only and not from outside of the native package.
private: field, the method can be accessed from the same class to where they belong.


2. What is the difference between an Inner class and a Subclass?
It is a Core Java Interview Questions, when you are a beginner go through the answer carefully.
An inner class has been nested within the other class. An inner class has access rights for the class that is nesting it and can access all methods and variables that are defined in the outer class.
A subclass inherits from the other class known as the superclass. Sub-class can access all protected and public fields and methods of its superclass.

3. What is known as data encapsulation and explain it’s significance?
Encapsulation is the concept which is asked frequently in the most Core Java Interview Questions for Freshers.
Encapsulation is said to be a concept in Object Oriented Programming for combining methods and properties in a single unit. Encapsulation helps the programmers in following a modular approach for the software development as each object has its unique set of variables and methods and serves its functions independent of other objects. Encapsulation is also used for data hiding purpose.

4. What is the purpose of static variables and static methods?
When there is a need to share a variable or a method between multiple objects of a class rather than creating separate copies for each object. To make a variable or method shared for all objects, we use.

5. What is called Loops in Java? What are the three types of loops?
This is a Java Basic Interview Questions to know mandatorily before attending any interviews.
Looping is used in programming to implement a statement or a statement block repeatedly. There are three types of loops in Java:

a. For Loops:

For loops are used in java to implement statements regularly for a given no of times. For loops are used when no of times to implement the statements is refer to the programmer.

b. while Loops:

While loop is used if certain statements require being implemented regularly until a condition is satisfied. The condition is tested first before implementation of statements in while loops.

c. Do While Loops:

Do while loop is similar to while loop with an only difference which condition is examined after implementation of statement blocks. Thus in do while loop case, statements are implemented at least once.

6. What is a singleton class? Give an example
In Java, a singleton class can have only one instance and thus all its variables and methods belong to one instance. The concept of a singleton class is used for the situations while there is a requirement to limit the no of objects for a class.
The good example of singleton usage scenario is while there is a limit of having an only single connection to a database due to some limitations of the driver or any licensing issues.

7. Explain the difference between break and continue statement?
When you are asked to explain Break and Continue concept in Java Interview Questions for Freshers, I suggest you to give examples to attract the interviewer.
Break and continue statements are the two main keywords used in loops. When a break keyword is used in a loop, instantly the loop is broken while when continue keyword is used, the current iteration is broken and the loop continues with the next iteration.
When counter reaches 4, loop is broken in the below example.
For (counter=0; counter<10; counter++) System.out.println(counter); if (counter==4) { break; }}
When counter reaches 4, loop just jumps to the next iteration in the below example and after the continue keyword any statements are skipped for the current iteration.
for (counter=0; counter<10; counter++) system.out.println(counter); if (counter==4) { continue; } system.out.println(“This will not get printed when counter is 4”); }

8. What is known as infinite loop? Explain how infinite loop is declared?
An infinite loop runs infinitely and without any condition. An infinite loop may be broken by explaining any breaking logic in the statements blocks body.
Infinite loop is proclaimed as follows
for (;;) { // Statements to execute // Add any loop breaking logic }
JAVA interview questions and answers
 
9. What is known as a final keyword in Java? Give an example
A constant is proclaimed using the keyword final in Java. The value may be assigned once and after the assignment, the value of a constant cannot be changed.
A constant with the name const_val has been assigned and declared a value in the below example:
Private Final int const_val=100
It cannot be overridden by the subclasses if a method is declared as final. This method is considered to be faster than any other method because they have been resolved at the compiled time.
It can’t be subclassed, when a class is declared as final. E.g., integer, string, and other wrapper classes.

10. Explain the difference between float and double variables in Java?
Float always takes about 4 bytes in memory while double takes about 8 bytes in memory in Java. The float is said to be single precision floating point decimal number and the double is the double precision decimal number.

11. How will you generate random numbers in Java?
You can generate random numbers using Math.random() in the range which is greater than or equal to 0.1 and less than 0.1 and also by using Random class in package java.util.

12. What is known as a ternary operator? Provide an example.
Based on a Boolean value evaluation, Ternary operator is also called conditional operator which is used to make the decision that value to assign to a variable.
If rank is 1, the status is assigned a value of “Done” else “Pending” in the below example.
public class conditionTest { public static void main(string args[]) { string status; int rank = 3; status = (rank = = 1) ? “Done” : “Pending”; System.out.println(status); } }

13. What is known as the base class in Java from which all the classes are derived?
Java.lang.object

14. What is a default switch case? Give an example
The default case is implemented when no other switch condition matches in a switch statement. The default case is referred as an optional case.
It may be declared only once all the other switch cases have been coded.
When score is not 1 or 2, default case is used in the below example:
public class switchExample { int score=4; public static void main(String args[]) { switch (score) { case 1: system.out.println(“Score is 1”); >break; case 2: system.out.println(“Score is 2”); break; default: system.out.println(“Default Case”); } } }

15. What are known as Java Packages? What is the significance of packages?
The package is referred to the collection of interfaces and classes that are bundled together as they are relevant to each other in Java. Use of package helps the developers to modularize the code and assemble the code for proper re-use. Once the code is packed in packages, it may be imported into other classes and used.

16. Does main() method in java return any data?
main() method cannot return back any data and thus, it is always declared with a void return type in Java.

17. Explain the difference between an Interference and Abstract Class in Java.
The foremost difference between an interference and abstract class is that interference may only possess public static methods declaration with no concrete implementation when an abstract may have members with any access specifiers (private, public etc) without or with the concrete implementation.
Other key difference in use of interfaces and abstract class is that a class which executes an interface should execute all the interface methods when a class that inherits from an abstract class that doesn’t need the implementation of superclass methods.
A class can execute multiple interfaces but it may extend only one abstract class.

18. Are we able to declare a class as Abstract class without having any abstract method?
Yes, using the abstract keyword before the class name even it doesn’t contain any abstract method, we can create an abstract class. Although, when a class contains even one abstract method, it should be revealed as abstract otherwise it gives an error.

19. Can importing a package imports the sub packages as well in Java?
While a package is imported in Java, its sub packages are not imported and the developer requires to separately import them if needed.
For e.g., when a developer imports a package university.*, all the classes in the package named university that are loaded but no other classes from its sub-package are loaded. The developer has to import it to load classes from its sub package as follows:
Import university.department.*

20. What is known as the interface performance implications over abstract classes?
Interfaces are said to be slower in performance when compared to the abstract classes as the extra indirections that are needed for interfaces. Another key factor for the developers in order to take into the consideration is which any class may extend the only single abstract class when a class can execute more interfaces.
Use of interfaces also puts an additional burden on the developers at any time an interface is executed in a class; the developer is forced to execute each and every interface method.

21. How will we pass an argument to a function through reference rather than pass value?
In Java, we are able to pass argument only by value to a function, and not by reference.

22. Can we state the main method of our class as private?
These Java Interview Questions for Freshers will brush up your knowledge and help you get through your interview easily.
The main method should be public static to run any kind of applications correctly. If the main method has been declared as private, the developer would not get any compilation error, although, it’ll not get implemented and will provide a runtime error.

23. When are we supposed to use serialization?
It is one of the Core Java Interview Questions which is asked frequently.
Serialization has been used when data requires being transmitted through the network. With serialization, state of the object is converted and saved into a byte stream. The byte stream is transferred through the network while the object is recreated at the destination.

24. How can an object be serialized in java?
In Java, an interface using the name serialization is executed by the class in order to change an object into byte stream through serialization. Almost all the objects of a class executing serializable interface get serialized, and state is stored in the byte stream.
JAVA interview questions and answers
 
25. Is there any method to skip finally exception block still if some exception happens in the exception block?
If an exception is increased in the Try block, manage passes to catch block if it exists or to finally block. Finally, block is implemented always while an exception happens and the only method to avoid implementation of any statements in finally block is by terminating the code powerfully by writing following code line at the end of try block:

1 System.exit(0);

26. Is it mandatory for a Try block to be followed by a Catch block in Java for Exception handling?
This is one of the Java Basic Interview Questions to know before attending an interview.
Try block requires being followed by either Catch block or Finally block or both. Any exception thrown from try block requires being either get caught in the catch block or else any particular tasks to be executed before the termination of code is placed in the Finally block.

27. Will a class contain multiple constructors?
Yes, a class comprises of multiple constructors with various parameters. Which constructor receives used for the creation of object depends on the arguments passed during the object creation.

28. When is the class constructor invoked?
Every time an object is built with new keywords, the constructor of a class has been invoked.
For E.g., two objects has been created with new keyword and thus, constructor is invoked two times in the following class.
public class const_example {const_example() { } public static void main(String args[]) { const_example c1=new const_example(); const_example c2=new const_exam } }

29. In the below mentioned example what can be the output?
public class superclass { public void displayResult() { system.out.println(“Printing from superclass”); } } public class subclass extends superclass { public void displayResult () { system.out.println(“Displaying from subclass”); super.displayResult(); } public static void main(String args[]) { subclass obj=new subclass(); obj.displayResult(); } }

Output is:

Displaying from subclass Displaying from superclass

30. Is it possible for us to override static methods of a class?
No, static methods cannot be overrided. A static method does not belong to individual objects but to a class and is resolved at the compilation time. Still, if we attempt to override a static method, we will not receive a compilation error, nor the overriding impact while generating the code.
