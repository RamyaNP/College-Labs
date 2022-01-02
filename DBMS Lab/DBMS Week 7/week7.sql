\c company
--Make a list of all project numbers for projects that involve an employee whose last name is
--‘Smith’, either as a worker or as a manager of the department that controls the project.
(SELECT DISTINCT PNUMBER
FROM PROJECT, DEPARTMENT, EMPLOYEE
WHERE DNUM = DNUMBER AND MGR_SSN = SSN AND LNAME = 'Smith')
UNION
(SELECT DISTINCT PNUMBER
FROM PROJECT, WORKS_ON, EMPLOYEE
WHERE PNUMBER = PNO AND ESSN = SSN AND LNAME = 'Smith');

--Retrieve the names of the employee who does not have dependents
(SELECT FNAME, LNAME
FROM EMPLOYEE)
EXCEPT
(SELECT FNAME, LNAME
 FROM EMPLOYEE, DEPENDENT
WHERE ESSN = SSN);

--Retrieve the Social Security numbers of all employees who either work in 
--department 5 or directly supervise an employee who works in department 5
SELECT ssn 
from employee 
where dno=5
UNION 
SELECT super_ssn 
from employee 
where dno=5;

--Using Intersect find all projects controlled by the department 
--5 and has employee ssn 123456789 working in that project

select pname 
from project 
where dnum=5
intersect
select pname 
from project as P, works_on as W 
where W.essn='123456789' and P.pnumber = W.pno;

--Using Except find all ssn of employees who works in department 5 
--but not in Bellaire location 
select ssn 
from employee as E 
where dno=5
EXCEPT
select essn 
from works_on W, project P 
where P.dnum=5 and W.pno=P.pnumber and P.plocation='Bellaire';

--Find the name of the employee who has the same name as the 
--dependent of any employee (use intersect ). 
select fname 
from employee
intersect
select dependent_name 
from dependent;

