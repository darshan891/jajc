<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Event Handling Demo</title>
    <style>
        #successMessage {
            color: green;
            margin-top: 10px;
            display: none;
        }
        #passwordStrength {
            color: blue;
        }
    </style>
</head>
<body>
    <h1>Event Handling Demo</h1>

    <button id="changeButton">Click me</button>
    <p id="successMessage">Button clicked successfully!</p>

    <br><br>

    <input type="text" id="dynamicInput" placeholder="Type something here...">
    <p id="dynamicText">Your text will appear here as you type.</p>

    <br><br>

    <input type="password" id="passwordInput" placeholder="Enter your password">
    <p id="passwordStrength">Password strength: </p>

    <script>
        document.body.addEventListener("click", () => {
            alert("You clicked on the body of the page!");
        });

        const changeButton = document.getElementById("changeButton");
        const successMessage = document.getElementById("successMessage");
        changeButton.addEventListener("click", () => {
            changeButton.textContent = "Clicked!";
            successMessage.style.display = "block";
        });

        const dynamicInput = document.getElementById("dynamicInput");
        const dynamicText = document.getElementById("dynamicText");
        dynamicInput.addEventListener("input", () => {
            dynamicText.textContent = dynamicInput.value || "Your text will appear here as you type.";
        });

        const passwordInput = document.getElementById("passwordInput");
        const passwordStrength = document.getElementById("passwordStrength");
        passwordInput.addEventListener("input", () => {
            const password = passwordInput.value;
            if (password.length === 0) {
                passwordStrength.textContent = "Password strength: ";
                passwordStrength.style.color = "blue";
            } else if (password.length < 6) {
                passwordStrength.textContent = "Password strength: Weak";
                passwordStrength.style.color = "red";
            } else if (password.length < 10) {
                passwordStrength.textContent = "Password strength: Medium";
                passwordStrength.style.color = "orange";
            } else {
                passwordStrength.textContent = "Password strength: Strong";
                passwordStrength.style.color = "green";
            }
        });
    </script>
</body>
</html>
