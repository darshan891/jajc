<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Sample HTML Page</title>
  
</head>
<body>
  <h1>Welcome to My Sample HTML Page</h1>

  <!-- List of Items -->
  <h2>List of Items</h2>
  <ul>
    <li>Item 1: HTML Basics</li>
    <li>Item 2: CSS Styling</li>
    <li>Item 3: JavaScript Introduction</li>
    <li>Item 4: React Components</li>
  </ul>

  <!-- Paragraphs -->
  <h2>About This Page</h2>
  <p>This page is a simple demonstration of an HTML structure with a list of items, some buttons, and paragraphs.</p>
  <p>The list above shows topics in web development, and the buttons below are for interaction purposes.</p>

  <!-- Buttons -->
  <h2>Actions</h2>
  <button onclick="alert('Button 1 Clicked!')">Button 1</button>
  <button onclick="alert('Button 2 Clicked!')">Button 2</button>
  <button onclick="alert('Button 3 Clicked!')">Button 3</button>

</body>
</html>











ii)


<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>JavaScript DOM Manipulation</title>
</head>
<body>

  <h1 id="header">Change Background Color</h1>

  <ul>
    <li>Item 1</li>
    <li>Item 2</li>
    <li>Item 3</li>
  </ul>

  <button onclick="this.innerHTML = 'Clicked!'">Click Me</button>
  <button onclick="this.innerHTML = 'Clicked!'">Click Me</button>
  <button onclick="this.innerHTML = 'Clicked!'">Click Me</button>

  <p>This is the first paragraph.</p>
  <p>This is the second paragraph.</p>

  <div class="highlight">This is a highlighted div.</div>

  <script>
    // Change background color of header
    document.getElementById('header').style.backgroundColor = 'black';

    // Change text color of all list items to blue
    document.querySelectorAll('li').forEach(item => item.style.color = 'blue');

    // Increase font size of all paragraphs
    document.querySelectorAll('p').forEach(p => p.style.fontSize = '28px');

    // Change text of the first element with class "highlight"
    document.querySelector('.highlight').innerHTML = 'Text has been changed!';
  </script>

</body>
</html>
