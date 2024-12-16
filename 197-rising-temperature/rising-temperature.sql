SELECT w1.id AS Id
FROM Weather w1
JOIN Weather w2
ON DATE_ADD(w2.recordDate, INTERVAL 1 DAY) = w1.recordDate
WHERE w1.temperature > w2.temperature;
