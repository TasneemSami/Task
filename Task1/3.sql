SELECT Teachers.name 
FROM Teachers WHERE NOT EXISTS(SELECT teacher_id 
                               FROM Courses 
                               WHERE Courses.teacher_id=Teachers.teacher_id)