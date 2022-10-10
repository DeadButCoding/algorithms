Q1. Explain the various types of Joins present in SQL.

Left Join, Right Join, Inner Join, and Full Outer Join are the four basic SQL joins to extract data from tables.

Left Join- A left join returns all rows from the left table and only the relevant rows from the right table if the join condition is satisfied.

Right Join- A right join returns all rows from the right table and only identical rows from the left table wherever the join condition is satisfied.

Inner Join- The most commonly used SQL join is the inner join. It retrieves all the rows from various tables that satisfy the join condition.

Full Outer Join- Whenever there is a match in any table, a full join returns all entries. As a result, it returns all the rows from the left and right tables.

Q2. With the help of an example, explain Equi join.

Equi join is a type of join that occurs when you join two or more tables using the 'equal to' operator. Only the condition equal to(=) between the columns in the table needs to be focused on.

Example: From Employee a, Employee b, select a.Emp name,b.Dept name, where a.Dept ID=b.Dept ID.

Q3. With an example, explain the Right Outer Join.

This join is suitable when the user wants all of the records from the Right table (Second table) and only equal or matching records from the First or Left table. You can refer to the records that don't match as null records.

Example: Select p1.col1, p2.col2,...p 'n'col 'n.' from table1 p1, table2 p2 where p1.col(+)=p2.col;

Q4. In SQL, how do you alter the name of a column?

In MYSQL, this is the command to alter the name of a column:

ALTER TABLE table_name CHANGE old_colname new_colname char(50);

You'll begin by using the ALTER TABLE commands, followed by the table's name. After that, you'll use the CHANGE keyword to provide the column's original name, followed by the name to which you'd like to rename it.

Q5. How does a Full Join differ from a Cross Join?

A Full Outer Join is formed by combining a Left Outer and a Right Outer Join. It returns the query's WHERE clause in all rows from both tables, and it returns a NULL value if the ON condition is not met.

A cross join yields all possible combinations of all rows from both tables, generating a cartesian product.

Q6. Explain Natural Join with the help of an example.

A natural join establishes an implicit join clause between two tables based on shared characteristics. In both tables, a common characteristic has the same name. Unlike an equi join, a Natural join does not require a comparison operator.

Consider the following example of a Natural join. Employee and Department are two tables with the same field, 'EmpNo.'

Employee

EmpId

EmpName

City

123

Adam

San Fransisco

456

James

New York

789

Duke

Paris

Department

DeptId

DeptName

EmpId

342

HR

123

145

Sales

456

760

Admin

789

Syntax:

SELECT Employees.EmpName, Department.DeptName 

FROM Department Natural JOIN Employees

New Projects


SQL Interview Questions on Joins by Tech Giants
Q7. Between 2019-02-01 and 2019-05-01, find the customer with the highest overall order cost. If a consumer placed multiple orders on the same day, calculate the order expenses daily. The output must include their initial name, the total cost of the items, and the date.

Also, assume that each first name in the dataset is distinct.

SELECT first_name,

       sum(total_cost) AS total_cost,

       order_date

FROM orders od

LEFT JOIN customers cst ON od.cust_id = cst.id

WHERE order_date BETWEEN '2019-02-1' AND '2019-05-1'

GROUP BY first_name,

         order_date

HAVING sum(total_cost) =

  (SELECT max(total_cost)

   FROM

     (SELECT sum(total_cost) AS total_cost

      FROM orders

      WHERE order_date BETWEEN '2019-02-1' AND '2019-05-1'

      GROUP BY cust_id,

               order_date)

Q8. For each city, determine the number of orders, the number of clients, and the total cost of orders. The output must include only cities with at least five orders and all clients in each city, even those who did not place an order.

Display each computation along with the name of the city it corresponds to.

SELECT customers.city,

       count(DISTINCT orders.id) AS orders_per_city,

       count(DISTINCT customers.id) AS customers_per_city,

       sum(orders.total_order_cost) AS orders_cost_per_city

FROM customers

LEFT JOIN orders ON customers.id = orders.cust_id

GROUP BY customers.city

HAVING count(orders.id) >=5

SELECT customers.city,

       count(DISTINCT orders.id) AS orders_per_city,

       count(DISTINCT customers.id) AS customers_per_city,

       sum(orders.total_order_cost) AS orders_cost_per_city

FROM orders

RIGHT JOIN customers ON orders.cust_id = customers.id

GROUP BY customers.city

HAVING count(orders.id) >=5

Q9. In a marathon, gun time is measured from the moment the race is officially started, whereas net time is measured from the moment a runner crosses the starting line. The timestamps for both variables are in seconds.

You must determine whether the interval between the two times for male and female runners is different. Calculate the average absolute difference between a gun and net time first. Sort the results by the genders- male and female. The absolute difference between the two values should be output.

WITH male_avg_diff AS

  (SELECT AVG(ABS(gun_time - net_time)) AS abs_diff

   FROM marathon_male),

     female_avg_diff AS

  (SELECT AVG(ABS(gun_time - net_time)) AS abs_diff

   FROM marathon_female)

SELECT ABS(m.abs_diff - f.abs_diff) difference

FROM male_avg_diff m

CROSS JOIN female_avg_diff f

Q10. Determine the number of employees from Arizona, California, and Hawaii. Arrange all city data alphabetically by the first name. Also, Arizona, California, and Hawaii should be the output column headers.

Assume that each city has a different number of employees.

WITH arizona AS

  (SELECT first_name AS aname,

          ROW_NUMBER() OVER (

                             ORDER BY first_name) AS arn

   FROM employee

   WHERE city='Arizona' ),

     california AS

  (SELECT first_name AS cname,

          ROW_NUMBER() OVER (

                             ORDER BY first_name) AS crn

   FROM employee

   WHERE city='California' ),

     hawaii AS

  (SELECT first_name AS hname,

          ROW_NUMBER() OVER (

                             ORDER BY first_name) AS hrn

   FROM employee

   WHERE city='Hawaii' )

SELECT aname AS arizona,

       cname AS california,

       hname AS hawaii

FROM hawaii

FULL OUTER JOIN california ON hrn=crn

FULL OUTER JOIN arizona ON COALESCE(hrn, crn) =arn;

Questions on Tricky SQL Queries for Interview
Often, data analysts are asked queries in SQL interview questions. This section will list some query-based SQL interview questions for data analyst.

Q11. Consider the following query-

SELECT column, AGG_FUNC(column_or_expression), …

  FROM a_table

 INNER JOIN some_table

       ON a_table.column = some_table.column

 WHERE a_condition

 GROUP BY column

HAVING some_condition

 ORDER BY column

 LIMIT 5;

What is the order in which SQL executes the clauses? Choose the best option from the choices below:

SELECT, FROM, WHERE, GROUP BY

FROM, WHERE, HAVING, SELECT, LIMIT

SELECT, FROM, INNER JOIN, GROUP BY

FROM, SELECT, LIMIT, WHERE

Option 2 is the right answer. 

SQL server retrieves the data from the tables (FROM and INNER JOIN)

Processes it (WHERE)

Combines the information (GROUP BY)

Filters the gathered data (HAVING)

Chooses which columns and expressions to show (SELECT)

Sorts the remaining information (ORDER BY)

Limits the outcomes (LIMIT)

 

Now, consider the following tables-

Emp_Details-

EmpId

FullName

ManagerId

DateofJoining

City

121

Emma Greene

321

01/05/2018

London

321

Janice Linn

657

13/07/2019

Sydney

421

William Scott

329

25/11/2022

California

Emp_Salary-

EmpId

Project

Salary

Variables

121

P1

7000

0

321

P2

12000

2000

421

P1

8000

1000

Q12. Create a SQL query to obtain a list of all the employees who are also managers in the EmpDetails table.

SELECT DISTINCT E.FullName

FROM Emp_Details E

INNER JOIN Emp_Details M

ON E.EmpID = M.ManagerID;

Q13. Create a SQL query to retrieve duplicate records from EmployeeDetails (neglecting the primary key, EmpId).

SELECT FullName, ManagerId, DateOfJoining, City, COUNT(*)

FROM Emp_Details

GROUP BY FullName, ManagerId, DateOfJoining, City

HAVING COUNT(*) > 1;

Q14. Without creating a temporary table, write a SQL query to eliminate duplicates from a table.

DELETE E1 FROM Emp_Details E1

INNER JOIN Emp_Details E2 

WHERE E1.EmpId > E2.EmpId 

AND E1.FullName = E2.FullName 

AND E1.ManagerId = E2.ManagerId

AND E1.DateOfJoining = E2.DateOfJoining

AND E1.City = E2.City;

Explore Categories

Apache Hadoop Projects Apache Hive Projects Apache Hbase Projects Apache Pig Projects Hadoop HDFS Projects Apache Oozie Projects Apache Impala Projects Apache Flume Projects Apache Sqoop Projects Spark SQL Projects Spark GraphX Projects Spark MLlib Projects Apache Zepellin Projects Apache Kafka Projects Neo4j Projects Redis Projects Microsoft Azure Projects Google Cloud Projects GCP AWS Projects
Q15. Create a SQL query to determine the table's nth highest income.

SELECT TOP 1 Salary

FROM (

      SELECT DISTINCT TOP N Salary

      FROM Employee

      ORDER BY Salary DESC

      )

ORDER BY Salary ASC;

Using the limit clause in MySQL-

SELECT Salary

FROM Employee

ORDER BY Salary DESC LIMIT N-1,1;

Q16. Without employing the TOP/limit keyword, write a SQL query to find the 3rd highest income from a table.

SELECT Salary

FROM Emp_Salary Emp1

WHERE 2 = (

                SELECT COUNT( DISTINCT ( Emp2.Salary ) )

                FROM Emp_Salary Emp2

                WHERE Emp2.Salary > Emp1.Salary

            )

Q17. Create a SQL query that only returns even rows from the table.

If you have an auto-increment field, such as EmpId, you can use the query below-

SELECT * FROM Emp_Details 

WHERE MOD (EmpId, 2) = 0;

If you don't have such a field, you can use the queries below-

Using SQL server's Row_number ensures that the remainder is 1 when divided by 2.

SELECT E.EmpId, E.Project, E.Salary

FROM (

    SELECT *, Row_Number() OVER(ORDER BY EmpId) AS RowNumber

    FROM Emp_Salary

) E

WHERE E.RowNumber % 2 = 0;

Using a MySQL user-defined variable-

SELECT *

FROM (

      SELECT *, @rowNumber := @rowNumber+ 1 rn

      FROM Emp_Salary

      JOIN (SELECT @rowNumber:= 0) r

     ) t 

WHERE rn % 2 = 0;

Q18. Create a SQL query to retrieve the top n records.

Using LIMIT in MySQL-

SELECT *

FROM EmpSalary

ORDER BY Salary DESC LIMIT N;

Using the TOP command in SQL Server-

SELECT TOP N *

FROM Emp_Salary

ORDER BY Salary DESC;

Q19. Create a SQL query to retrieve only the table's odd rows.

If you have an auto-increment field, such as EmpId, you can use the query below-

SELECT * FROM Emp_Details 

WHERE MOD (EmpId, 2) <> 0;

If you don't have such a field, you can use the queries below-

Using SQL server's Row_number and ensuring that the remainder is 1 when divided by 2-

SELECT E.EmpId, E.Project, E.Salary

FROM (

    SELECT *, Row_Number() OVER(ORDER BY EmpId) AS RowNumber

    FROM Emp_Salary

) E

WHERE E.RowNumber % 2 = 1;

Using a MySQL user-defined variable-

SELECT *

FROM (

      SELECT *, @rowNumber := @rowNumber+ 1 rn

      FROM Emp_Salary

      JOIN (SELECT @rowNumber:= 0) r

     ) t 

WHERE rn % 2 = 1;

Get confident to build end-to-end projects.

Access to a curated library of 250+ end-to-end industry projects with solution code, videos and tech support.

SQL Interview Questions Advanced
Here are a few SQL interview questions for experienced professionals-

Q20. Find the top ten users who have traveled the furthest. List their names as well as the overall distance traveled. (Consider the table names- cab_users and cab_rides_log)

SELECT name, traveled_distance

FROM

    (SELECT cu.name,

           SUM(cr.distance) AS traveled_distance,

           rank () over (order by SUM(cr.distance) desc) as rank

    FROM cab_users AS cu

    INNER JOIN cab_rides_log AS cr ON cu.id = cr.user_id

    GROUP BY cu.name

    ORDER BY traveled_distance DESC

    ) sq

WHERE rank <= 10

Q21. Suppose a company has created a search algorithm that will scan through user comments and display the search results to the user. We have a table containing the search result that the user clicked on ('notes' column), the user's search query, and the final search ranking returned for the specific comment to evaluate the algorithm's performance.

Since these remarks were what the user was looking for, the higher the position, the better. Create a query that analyses the search algorithm's performance against each user query. (Use the table search_results)

SELECT t.result_id,

      t.query,

      CASE

          WHEN t.check = FALSE THEN 1

          WHEN t.check = TRUE

                AND t.position >= 10 THEN 2

          WHEN t.check = TRUE

                AND (t.position BETWEEN 6 AND 9) THEN 3

          WHEN t.check = TRUE

                AND (t.position BETWEEN 4 AND 5) THEN 4

          WHEN t.check = TRUE

                AND t.position <=3 THEN 5

      END AS rating

FROM

  (

SELECT query,

           result_id,

           position,

           notes,

           (regexp_replace(notes, '[^\w]+',' ','g') ilike concat

('% ', query,' %')) AS check

   FROM search_results

  ) t

Q22. Create a query that returns cities with housing prices greater than the national average. Generate a list of city names. (Use the table xyz_transactions)

SELECT city

FROM xyz_transactions a

GROUP BY city

HAVING avg(a.mkt_price) >

  (SELECT avg(mkt_price)

   FROM xyz_transactions)

ORDER BY city ASC

Q23. Determine each user's email activity rank. The total number of emails sent determines the email activity rank. The user with the most emails sent receives a rank of one, and so on. Display the user's name, the total number of emails they've received, and their activity rank. Arrange records in descending order based on the total number of emails. You should sort individuals with the same rank score alphabetically.

Even if numerous users have the same quantity of emails, return a unique value (i.e., a unique percentile) in your rankings. (Use the gmail_emails table)

SELECT  from_user, 

        count(*) as total_emails, 

        row_number() OVER ( order by count(*) desc)

    FROM gmail_emails 

    GROUP BY from_user

    order by 3, 1

Q24. Determine the difference between NVL and NVL2 functions.

NVL(exp1, exp2) and NVL2(exp1, exp2, exp3) check if the value exp1 is null. If exp1 is not null, the NVL(exp1, exp2) function returns the value of exp1; otherwise, it returns the value of exp2. However, exp2 must be of the same data type as exp1. If exp1 is not null, the NVL2(exp1, exp2, exp3) function returns exp2; otherwise, it returns the value of exp3.

Q25. List the various kinds of SQL sandboxes?

There are three types of SQL sandboxes-

1. Safe Access Sandbox- In this environment, users can conduct SQL operations such as creating stored procedures, triggers, etc. but cannot access memory or create files.

2. Sandbox for External Access- Users can access files without having the right to modify memory allocation.

3. Unsafe Access Sandbox- This is a collection of untrusted routines that allow a user to access memory.

Q26. What are the differences between COALESCE() and ISNULL()?

COALESCE() takes two or more parameters, and while you can apply as many as you like, it only returns the first non-NULL parameter.

ISNULL() only takes two arguments.

The first parameter is tested for a NULL value, and if it is, the second parameter is returned; if not, the first parameter is returned.

Q27. Compare the 'Having' and 'Where' clauses in detail.

WHERE Clause

HAVING Clause

The WHERE clause sets the conditions that particular records must meet for a query to select them. It is not required to include the GROUP by clause.

Without the GROUP BY clause, the HAVING clause will not execute.

The WHERE clause chooses rows before grouping.

2. The HAVING clause chooses rows once grouping is done.

Aggregate functions aren't permitted in the WHERE clause.

3. You can use aggregate functions in the HAVING clause.

The WHERE clause is used before the GROUP BY clause to enforce a condition on the SELECT statement and the single row function.

4. The HAVING clause is used after the GROUP BY clause in the query to put a constraint on the GROUP Function.

E.g.- SELECT Column, AVG(Column_name) FROM Table_name WHERE Column > value GROUP BY Column_name

5. SELECT Column, AVG(Column_name) FROM Table_name WHERE Column > value GROUP BY Column_name Having column_name>or<value

Q28. What is meant by cte in SQL Server?

Common Table Expressions (CTEs) are expressions used to build temporary output tables from which data can be obtained and used. CTEs can also be used with Insert, Update, and Delete statements. A CTE with a SELECT statement has the following standard syntax-

WITH RESULT AS 

(SELECT COL1, COL2, COL3

FROM EMPLOYEE)

SELECT COL1, COL2 FROM RESULT

Q29. Distinguish between MongoDB and MySQL.

MongoDB

MySQL

MongoDB is the right choice when you require high data availability with automatic, quick, and immediate data recovery.

MYSQL will make the setup simple and low-maintenance if you're just getting started and don't expect your database to expand much.

If you plan to scale up in the future, MongoDB includes a built-in sharding option.

2. If you need exceptional performance on a tight budget, MySQL is the way to go.

If your schema is unstable and you want to save on schema migration, you should work with MongoDB.

3. If you have a stable schema and data structure, you should choose MySQL.

If you don't have access to a database administrator, MongoDB is the preferable option.

4. If you need a handful of transactions per second, MySQL is the way to go.

MongoDB is the best choice if most of your services are cloud-based.

5. MySQL is the best DBMS to use if data security is a high priority.

 

Q30. In SQL Server, how can you build a stored procedure?

A Stored Procedure is a commonly-used SQL query. Queries like SELECT queries, which are frequently used to fetch a data set from a database, can be recorded as a Stored Procedure. The SQL query saved within the Stored Procedure is executed when the Stored Procedure is called.

To construct a Stored Procedure, use the following syntax:

CREATE PROCEDURE PROCEDURE_NAME

AS

SQL_QUERY (Write your frequently used query here)

GO;

SQL Server supports both user-defined and built-in stored procedures. Also, you can provide a variety of parameters to a Stored Procedure.
