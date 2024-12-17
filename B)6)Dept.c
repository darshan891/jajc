src/components/6.js



import React from 'react';  // Import React

const DepartmentList = () => {
  const departments = [
    'Sales',
    'Marketing',
    'Engineering',
    'Human Resources',
    'Finance',
    'Customer Support'
  ];

  return (
    <div>
      <h1>Departments</h1>
      <ul>
        {departments.map((department, index) => (
          <li key={index}>{department}</li>
        ))}
      </ul>
    </div>
  );
};

export default DepartmentList;




app.js


import React from "react";
import DepartmentList from "./components/6";  // Import the DepartmentList component

function App() {
  return (
    <div>
      <DepartmentList />
    </div>
  );
}

export default App;
