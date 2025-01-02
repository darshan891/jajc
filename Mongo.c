Part - A
8)
use collegedb;
db.createCollection("Students");
db.Students.insertMany([
            { name: "Alice", age: 20, sem: 4, usn: "1A01", grade: "A" },
            { name: "Bob", age: 18, sem: 3, usn: "1A02", grade: "B" },
            { name: "Charlie", age: 22, sem: 6, usn: "1A03", grade: "A" },
        ]);
db.createCollection("Courses");
db.Courses.insertMany([
            { courseName: "Mathematics", courseCode: "MATH101", credits: 4 },
            { courseName: "Physics", courseCode: "PHY102", credits: 3 },
            { courseName: "Chemistry", courseCode: "CHEM103", credits: 2 },
        ]);
db.Students.find();
db.Students.find({age:{$gt:18}});
db.Students.find({grade:"A"});
db.Courses.find({credits:{$gte:3}});
db.dropDatabase();



Part - B
12)
use Employee;
db.createCollection("employees");
db.employees.insertMany([
  { "name": "Alice", "department": "HR", "salary": 50000 },
  { "name": "Bob", "department": "Engineering", "salary": 80000 },
  { "name": "Charlie", "department": "HR", "salary": 55000 },
  { "name": "David", "department": "Engineering", "salary": 90000 },
  { "name": "Eve", "department": "Sales", "salary": 70000 }
]
);

db.employees.aggregate([
  {
    $group: {
      _id: "$department", 
      totalEmployees: { $sum: 1 }, 
      averageSalary: { $avg: "$salary" } 
    }
  },
  {
    $sort: { totalEmployees: -1 } 
  }
]);




use WorkDB;
db.createCollection("Teachers");
db.craeteCollection("students");
db.Teachers.insertMany([
            { name: "Alice", age: 20, sem: 4, usn: "1A01", grade: "A" },
            { name: "Bob", age: 18, sem: 3, usn: "1A02", grade: "B" },
            { name: "Charlie", age: 22, sem: 6, usn: "1A03", grade: "A" },
        ]);
db.students.insertMany([
            { name: "Alice", age: 20, sem: 4, usn: "1A01", grade: "A" },
            { name: "Bob", age: 18, sem: 3, usn: "1A02", grade: "B" },
            { name: "Charlie", age: 22, sem: 6, usn: "1A03", grade: "A" },
        ]);
Come out of mongosh and go to terminal

mongoexport --db=WorkDB --collection=students --out=students.json
output:
connected to: mongodb://localhost/
exported 5 records
mongoimport --db=WorkDB --collection=studentbackup --file=students.json
output:
connected to: mongodb://localhost/
5 document(s) imported successfully.

to verify go to mongosh
use WorkDB
db.studentbackup.find();
collection studentbackup will be created







from pymongo import MongoClient

client = MongoClient("mongodb://localhost:27017/")

college_db = client["CollegeDB"]

students_collection = college_db["students"]
students_data = [
    {"name": "Alice", "age": 20, "sem": 4, "usn": "1NI20CS001", "grade": "A"},
    {"name": "Bob", "age": 21, "sem": 5, "usn": "1NI20CS002", "grade": "B"},
    {"name": "Charlie", "age": 19, "sem": 3, "usn": "1NI20CS003", "grade": "A+"}
]
students_collection.insert_many(students_data)

courses_collection = college_db["courses"]
courses_data = [
    {"courseName": "Data Structures", "courseCode": "CS201", "credits": 4},
    {"courseName": "Database Systems", "courseCode": "CS301", "credits": 3},
    {"courseName": "Operating Systems", "courseCode": "CS401", "credits": 4}
]
courses_collection.insert_many(courses_data)

print("Database and collections created successfully with documents inserted.")
