Exercise #1:
Write C++ program to maintain employee information for a business.  There are two groups of employees, “manager” and “worker”.  The suggested approach to complete the program is as follows: 
1.	Declare a class (using the name “employee”) with the following data items
Employee Number: 	a 9-digit integer number
Name:			up to 30 characters
Age:			a 2-digit integer number
Gender Code:		single character
Education:		two-character code. For example HS(High School),
			AD(Associate Degree), CD(Coll. Degree), MD(Masters Degree)
2.	A worker class, which includes the above data items and has the following additional data items:
Hiring Date: 		in MM/DD/YYYY format
Dept. Name:		4 characters, for example ACCT(Accounting), SALE(Sales)
			HUMN(Human Resources)
Hourly Rate:		float
3.	A manager class which includes the data items in class employee and has these additional data items:
Date of Promotion:	in MM/DD/YYYY format
Department Name:	4 characters
Job Title:		20 characters
Yearly Salary:		float

Your program should be menu-driven, such that when it starts, the main menu will display options such as: add manager, add worker, display manager, display worker, modify manger, modify worker,…..etc.  By selecting an option, corresponding function of different classes will be executed.
Limit the number of managers to 3 and workers to 5 such that if a user attempts to add 4th manager a warning should be displayed informing the limit has been reached.  Same with adding 6th worker.
