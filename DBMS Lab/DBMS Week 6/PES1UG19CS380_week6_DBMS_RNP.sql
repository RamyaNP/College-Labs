--RamyaNP
\c company

--Show the resulting salaries if every employee 
--working on the ‘ProductX’ project is given a 10% raise.

Select ssn, fname, lname, salary as Old_Salary, 1.1*salary as Hiked_Salary
From Employee E, Works_On W, Project P
Where E.ssn = W.essn and W.pno = P.pnumber
and P.pname='ProductX';

--Find the sum of the salaries of all employees of the ‘Research’ department, as well as the
--maximum salary, the minimum salary, and the average salary in this department.

SELECT SUM (SALARY), MAX (SALARY), MIN (SALARY), AVG (SALARY)
FROM EMPLOYEE, DEPARTMENT
WHERE DNO = DNUMBER AND DNAME = 'Research';

--Count the number of distinct salary values in the database.

SELECT COUNT(DISTINCT SALARY) AS uniq_salary FROM employee;

--Retrieve the names of all employees who have two or more dependents.

SELECT fname, minit, lname
FROM EMPLOYEE
WHERE (SELECT COUNT (*)
FROM DEPENDENT
WHERE SSN = ESSN) >= 2;

--For each department, retrieve the department number, the number of employees in the
--department, and their average salary.

select dno,count(*),avg(salary)
from employee
group by dno;

--Retrieve the names of employees who make at least $10,000 more than the employee who is
--paid the least in the company.

select Fname, Minit, Lname
from EMPLOYEE
where Salary > 10000 + (select MIN(Salary)
						from EMPLOYEE);

--Retrieve the names of all employees who work in the department that has the employee with
--the highest salary among all employees

select Fname, Minit, Lname
from EMPLOYEE
where Dno = (select Dno
			 from EMPLOYEE
			 where Salary = (select MAX(Salary)
							from employee));

--Count the total number of employees whose salaries exceed $40,000 in each department
-- SELECT Dname, COUNT (*)
-- FROM DEPARTMENT, EMPLOYEE
-- WHERE Dnumber=Dno AND Salary>40000
-- GROUP BY Dname;

SELECT dname, COUNT (*) FROM department, employee 
WHERE dnumber=dno AND salary>40000 GROUP BY dname;

