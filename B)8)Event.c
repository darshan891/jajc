const EventEmitter = require('events');
const eventEmitter = new EventEmitter();

const eventHandler = () => {
  console.log("Event triggered!");
};

eventEmitter.on('myEvent', eventHandler);

console.log("Emitting event...");
eventEmitter.emit('myEvent');

eventEmitter.removeListener('myEvent', eventHandler);

console.log("Emitting event again after removal...");
eventEmitter.emit('myEvent');
