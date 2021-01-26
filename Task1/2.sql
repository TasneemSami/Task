Select TOP 1 teacer_id, Count(teacher_id) AS 'MAX_COUNT' 
FROM courses Group By teacher_id 
Order By 'MAX_COUNT' DESC;


                           Alternative Solution


SELECT name, COUNT(teacher_id) 
FROM teachers,  GROUP BY teacher_id 
HAVING COUNT (teacher_id)=( 
SELECT MAX(mycount) 
FROM ( 
SELECT teacher_id, COUNT(teacher_id) mycount 
FROM courses 
GROUP BY agent_code));