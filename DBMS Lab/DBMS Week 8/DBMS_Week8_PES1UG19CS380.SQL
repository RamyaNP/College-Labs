\c company

--Using nested query retrieve the names of all 
--employees who have two or more dependents.

SELECT LNAME , FNAME FROM EMPLOYEE WHERE ( SELECT COUNT ( * ) FROM DEPENDENT WHERE SSN = ESSN ) >=2;

--Using nested query Retrieve the name of each 
--employee who has a dependent with the same
--first name and is the same sex as the employee.

SELECT E.FNAME, E.LNAME FROM EMPLOYEE AS E WHERE E.SSN IN (SELECT ESSN FROM DEPENDENT WHERE E.FNAME = DEPENDENT_NAME AND E.gender = gender);

--Using nested query retrieve names of employees 
--whose salary is greater than the salary of all
--the employees in department 5.

select fname, lname from employee E where E.salary > (select max(salary) from employee where dno=5);

--Retrieve the names of employees who have no 
--dependents.( use Exists/Not Exists)

select fname, lname from employee E where not exists (select essn from dependent D where D.essn = E.ssn);

--List the names of managers who have at least 
--one dependent.

select fname, lname from employee E inner join department D on E.ssn=D.mgr_ssn;

--Using natural Join retrieve the name and 
--address of every employee who works for the
--‘Research’ department.

select fname, lname, address from employee natural join (select dname, dnumber as dno from department where dname='Research') as dep_research;