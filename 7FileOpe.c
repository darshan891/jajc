
fileOperation.js

const fs = require('fs');

function readFile(fileName, callback) {
  fs.readFile(fileName, 'utf8', (err, data) => {
    if (err) {
      callback(err, null);
    } else {
      callback(null, data);
    }
  });
}

function writeFile(fileName, content, callback) {
  fs.writeFile(fileName, content, (err) => {
    if (err) {
      callback(err);
    } else {
      callback(null);
    }
  });
}

function appendToFile(fileName, content, callback) {
  fs.appendFile(fileName, content, (err) => {
    if (err) {
      callback(err);
    } else {
      callback(null);
    }
  });
}

module.exports = { readFile, writeFile, appendToFile };




app.js


const fileOps = require('./fileOperations');

fileOps.readFile('output.txt', (err, data) => {
  if (err) {
    console.error('Error reading file:', err);
  } else {
    console.log('File content:', data);
  }
});

fileOps.writeFile('output.txt', 'Hello, this is some new content!', (err) => {
  if (err) {
    console.error('Error writing to file:', err);
  } else {
    console.log('Successfully wrote to the file!');
  }
});

fileOps.appendToFile('output.txt', '\nThis is appended content.', (err) => {
  if (err) {
    console.error('Error appending to file:', err);
  } else {
    console.log('Successfully appended to the file!');
  }
});
