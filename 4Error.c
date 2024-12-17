import React from 'react';
import ReactDOM from 'react-dom';

class ErrorBoundary extends React.Component {
  constructor(props) {
    super(props);
    this.state = { hasError: false, errorMessage: '' };
  }

  static getDerivedStateFromError(error) {
    return { hasError: true, errorMessage: error.message };
  }

  render() {
    if (this.state.hasError) {
      return <h1>{`Error: ${this.state.errorMessage}`}</h1>;
    }
    return this.props.children;
  }
}

function DivisionByZero() {
  const result = 10 / 0;  // This will cause Infinity
  if (!isFinite(result)) {
    throw new Error('Division by zero error!');
  }
  return <h1>Result: {result}</h1>;
}

function ArrayOutOfBounds() {
  const arr = [1, 2, 3];
  const value = arr[5];  // This will be undefined (out of bounds)
  if (value === undefined) {
    throw new Error('Array index out of bounds error!');
  }
  return <h1>Value: {value}</h1>;
}

function App() {
  return (
    <div>
      <h1>Error Boundaries Example</h1>
      <ErrorBoundary>
        <DivisionByZero />
      </ErrorBoundary>
      <br />
      <ErrorBoundary>
        <ArrayOutOfBounds />
      </ErrorBoundary>
    </div>
  );
}

ReactDOM.render(<App />, document.getElementById('root'));
