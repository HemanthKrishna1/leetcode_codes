# Write your MySQL query statement below
SELECT DISTINCT author_id as id
FROM views AS v
WHERE v.author_id = v.viewer_id
ORDER BY author_id