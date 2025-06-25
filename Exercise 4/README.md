Exercise #4:
Using the following UML diagram as a reference, create the classes. It is common practice to leave out the accessors and mutators (getters and setters) from UML class diagrams, since there can be so many of them. Unless otherwise specified, it is assumed that there is an accessor (getter) and a mutator (setter) for every class attribute.

Understanding the UML Class Diagram	
1.	The first section specifies the class name.
2.	The second section specifies the attributes (Data Members) 
3.	The third section specifies the behaviors (Methods)

The first character specifies the access specifier value, where
•	"-" means that the class member is private
•	“#” means that the class member is protected
•	"+" means that the class member is public.

 THERE IS A PICTURE HERE IN THE DOC

Code the Benefit Class
An employee typically has benefits, so:
1.	Create a Benefits class.

Creating the Employee Class
1.	The default constructor should set the attributes as follows: firstName = "not given", lastName = "not given", gender = "U" (for unknown), dependents = 0, and annualSalary = 20,000.
2.	The multi-arg constructor should initialize all of the attributes using values passed in using its parameter list.
3.	As shown in the Class diagram, each attribute should have a "getter" to retrieve the stored attribute value, and a "setter" that modifies the value.
4.	The calculatePay( ) method of the Employee class should return the value of annual salary divided by 52 (return annualSalary / 52;).
5.	The displayEmployee() method should display all the attributes of the Employee object in a well-formatted string with logical labels applied to each attribute. Don't forget to call calculatePay from within the displayEmployee method in order to display the Employee's weekly pay as well!
6.	 Integrate the Benefit class into the Employee class. (Composition)

Creating the Salaried Class
1.	Using the above UML Diagram, create the Salaried class, ensuring to specify that the Salary class inherits from the Employee class.
2.	For each of the constructors listed in the Salaried class, ensure to invoke the appropriate base class constructor and pass the correct arguments to the base class constructor. This will initialize the protected attributes and update the numEmployees counter.
3.	The valid management levels are 0, 1, 2, and 3, and should be implemented as a constant.
4.	Override the calculatePay method to add a 10 percent bonus for each of the management levels (i.e., bonus percentage = managementLevel * .10). The bonus percentage should be implemented as a constant.
5.	Override the displayEmployee() method to add the management level to the employee information.

Creating the Hourly Class
1.	Using the UML Diagram, create the Hourly classes, ensuring to specify that the Hourly class inherits from the Employee class.
2.	For each of the constructors listed in the Hourly class, ensure to invoke the appropriate base class constructor and pass the correct arguments to the base class constructor. This will initialize the protected attributes and update the numEmployees counter.
3.	The valid category types are "temporary", "part time", and "full time".
4.	The provided hours must be more than 0 hours and less than 50 hours, and the limits should be implemented as constants.
5.	The provided wage must be between 10 and 75, and the limits should be implemented as constants.
6.	Override the calculatePay method by multiplying the wages by the number of hours.
7.	Override the Employee setAnnualSalary method and set the annual salary by multiplying the weekly pay by 50.
8.	Override the displayEmployee() method to add the category to the hourly employee information.

Testing (main)
1.	Create at least one object of Employee, Hourly, and Salaried employee.
2.	For each object created, display the number of employees created.
3.	For each object created, write statements to exercise each of the public methods listed in the Class diagram.
4.	For each object created, invoke the object's displayEmployee() method to display the employee's information.

Compile and Test
When done, compile and run your code.  Then, debug any errors until your code is error-free.  Check your output to ensure that you have the desired output, modify your code as necessary, and rebuild. 
