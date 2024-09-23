# Write your MySQL query statement below
select d.name as Department ,e.name as Employee ,e.salary as Salary
from Employee e 
join Department d on e.departmentId = d.id
WHERE (e.salary, e.departmentId) IN (
    SELECT MAX(salary), departmentId
    FROM Employee
    GROUP BY departmentId
);

