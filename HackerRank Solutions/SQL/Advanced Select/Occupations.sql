/*
Enter your query here.
*/
SET @drow = 0, @prow = 0, @srow = 0, @arow = 0;
SELECT MIN(Doctor), MIN(Professor), MIN(Singer), MIN(Actor) FROM
(SELECT CASE Occupation 
WHEN 'Doctor' THEN @drow := @drow+1
WHEN 'Professor' THEN @prow := @prow+1
WHEN 'Singer' THEN @srow := @srow+1
WHEN 'Actor' THEN @arow := @arow+1 END
AS RowLine,
CASE WHEN Occupation = 'Doctor' THEN Name END AS Doctor,
CASE WHEN Occupation = 'Professor' THEN Name END AS Professor,
CASE WHEN Occupation = 'Singer' THEN Name END AS Singer,
CASE WHEN Occupation = 'Actor' THEN Name END AS Actor
FROM OCCUPATIONS ORDER BY Name) AS t
GROUP BY RowLine;