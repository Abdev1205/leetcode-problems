select project_id, ROUND(SUM(experience_years)/COUNT(Employee.employee_id),2) as average_years
from Project
left join Employee
on Project.employee_id = Employee.employee_id
group by project_id