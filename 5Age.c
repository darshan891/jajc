import React, { useState, useEffect } from "react";

function AgeComponent({ initialAge }) {
  const [age, setAge] = useState(initialAge);
  const [inputAge, setInputAge] = useState(initialAge);

  useEffect(() => {
    console.log(`Age updated to: ${age}`);
  }, [age]);

  const handleUpdateAge = () => {
    setAge(inputAge);
  };

  return (
    <div>
      <h1>Age: {age}</h1>
      <input
        type="number"
        value={inputAge}
        onChange={(e) => setInputAge(Number(e.target.value))}
      />
      <button onClick={handleUpdateAge}>Update Age</button>
    </div>
  );
}

function App() {
  return (
    <div>
      <h1>Age Component Example</h1>
      <AgeComponent initialAge={25} />
    </div>
  );
}

export default App;