const fs = require('fs');
const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Please enter some text to store in a file: ', (inputText) => {
  fs.writeFile('output.txt', inputText, (err) => {
    if (err) {
      console.error('Error writing to file:', err);
    } else {
      console.log('Input has been written to output.txt');
    }
    rl.close();
  });
});
