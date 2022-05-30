# Write your MySQL query statement below
UPDATE Salary
SET sex= CASE
            WHEN sex='m' THEN 'f'
            WHEN sex='f' THEN 'm'
        END
WHERE sex IN ('f','m');