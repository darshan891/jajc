<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Student CGPA Program</title>
</head>
<body>
  <h1>Student CGPA Program</h1>
  <h2>Students with CGPA 9 or Higher</h2>
  <div id="students-list"></div>
  <h3>Total Students with CGPA 9 or Higher: <span id="total-count"></span></h3>

  <script>
    const students = [
      { name: 'Alice', marks: 95 },
      { name: 'Bob', marks: 98 },
      { name: 'Charlie', marks: 92 },
      { name: 'David', marks: 85 },
      { name: 'Eva', marks: 98 }
    ];

    const convertToCGPA = marks => (marks / 10) - 0.75;

    const highCGPAStudents = students
      .map(student => ({ name: student.name, cgpa: convertToCGPA(student.marks) }))
      .filter(student => student.cgpa >= 9);

    const studentsList = document.getElementById('students-list');
    highCGPAStudents.forEach(student => {
      const div = document.createElement('div');
      div.textContent = student.name; // Display only the student's name
      studentsList.appendChild(div);
    });

    const totalCount = highCGPAStudents.reduce(count => count + 1, 0);
    document.getElementById('total-count').textContent = totalCount;
  </script>
</body>
</html>
