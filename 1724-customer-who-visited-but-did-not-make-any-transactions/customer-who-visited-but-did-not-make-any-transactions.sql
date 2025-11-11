# Write your MySQL query statement below
select v.customer_id,COUNT(v.customer_id) AS count_no_trans
from Visits v
left join Transactions t
on v.visit_id=t.visit_id
where t.visit_id is NULL
GROUP BY v.customer_id;