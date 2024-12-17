app.js

import React from 'react';

class CityChanger extends React.Component {
  constructor(props) {
    super(props);
    this.state = { city: "Mysore" };
    console.log("Constructor: Initializing state");
  }

  componentDidMount() {
    console.log("componentDidMount: Component has mounted");
    setTimeout(() => {
      this.setState({ city: "Bangalore" });
    }, 2000);
  }

  shouldComponentUpdate() {
    console.log("shouldComponentUpdate: Deciding whether to re-render");
    return true;
  }

  getSnapshotBeforeUpdate(prevProps, prevState) {
    console.log("getSnapshotBeforeUpdate: Capturing snapshot before update");
    return `Previous city was: ${prevState.city}`;
  }

  componentDidUpdate(prevProps, prevState, snapshot) {
    console.log("componentDidUpdate: Component has updated");
    console.log(snapshot);
  }

  render() {
    console.log("Render: Rendering the component");
    return (
      <div>
        <h1>Current City: {this.state.city}</h1>
      </div>
    );
  }
}

export default CityChanger;







Index.js

import React from 'react';
import ReactDOM from 'react-dom';
import App from './App';

ReactDOM.render(<App />, document.getElementById("root"));

