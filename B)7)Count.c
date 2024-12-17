import React, { useState } from 'react';  // Import React and useState

function App() {
  const [count, setCount] = useState(0);
  
  const increment = () => {
    if (count < 10) {
      setCount(count + 1);
    }
  };
  
  const decrement = () => {
    if (count > 0) {
      setCount(count - 1);
    }
  };
  
  return (
    <div>
      <h2>Count: {count}</h2>
      <button onClick={increment} disabled={count >= 10}>Increment</button>
      <button onClick={decrement} disabled={count <= 0}>Decrement</button>
      {count === 10 && <h2>Cannot be incremented further</h2>}
    </div>
  );
}

export default App;
