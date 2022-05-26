# Write your MySQL query statement below
SELECT employee_id,
CASE MOD(employee_id,2) WHEN 1
THEN salary
ELSE 0
END "bonus"
FROM (
SELECT employee_id,name,
    CASE LEFT(name,1) WHEN 'M'
    THEN 0
    ELSE salary
    END 'salary'
FROM employees
) AS tt;
