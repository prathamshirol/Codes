select e1.unique_id,e.name
from Employees e left join EmployeeUNI e1
on e.id=e1.id