console.log("Test 2 on 5th DEC");
console.error("Something went wrong");
console.warn("This is a warning");
console.info("This is an information regarding.");

const users = [
  { name: "Darshan", age: 20, USN: "4NI22CS053" },
  { name: "Deepak", age: 21, USN: "4NI22CS054" },
  { name: "Akash", age: 21, USN: "4ni22cs017" }
];
console.table(users);

console.time("processTime");
setTimeout(() => {
  console.timeEnd("processTime");
}, 1000);

console.assert(1 === 1, "This should pass!");
console.assert(1 === 2, "This should fail!");

console.log("This is a regular log message.");

console.group("Outer Group");
console.log("Message inside the outer group.");

console.group("Inner Group");
console.group("Inner Inner Group");
console.log("Message inside the inner group.");
console.groupEnd();

console.log("Back to the outer group.");
console.groupEnd();

console.log("Outside all groups.");
