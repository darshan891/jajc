<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>CSS Box Model Showcase</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      background-color: #f0f8ff;
      display: flex;
      justify-content: center;
      align-items: center;
      height: 100vh;
      margin: 0;
    }
    .box {
      width: 300px;
      padding: 20px;
      margin: 30px;
      border: 4px solid #4682b4;
      background-color: #f9f9f9;
      text-align: center;
      border-radius: 10px;
      box-shadow: 0 4px 8px rgba(0, 0, 0, 0.2);
    }
    .box img {
      width: 100%;
      border-radius: 8px;
    }
    .box a {
      display: inline-block;
      margin-top: 15px;
      padding: 10px 15px;
      background-color: #4682b4;
      color: white;
      text-decoration: none;
      border-radius: 5px;
      transition: background-color 0.3s;
    }
    .box a:hover {
      background-color: #315f7c;
    }
  </style>
</head>
<body>
  <div class="box">
    <h2>CSS Box Model</h2>
    <p>This demonstrates the CSS box model with padding, borders, and margins.</p>
    <img src="https://via.placeholder.com/280x150" alt="Placeholder Image">
    <a href="https://example.com">Learn More</a>
  </div>
</body>
</html>
