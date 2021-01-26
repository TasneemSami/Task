SELECT C.name COURSE_NAME,T.name TEACHERS_Name
FROM courses C JOIN teachers T
ON (C.teacher_id = T.teacher_id);