# Write your MySQL query statement below
SELECT
(SELECT distinct Salary
from Employee order by salary desc
limit 1 offset 1

)
as SecondHighestSalary;
