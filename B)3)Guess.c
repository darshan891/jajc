<!DOCTYPE html>
<html lang="en">
<head>
    <title>Guess the Number Game</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 20px;
            background-color: #f0f8ff;
            text-align: center;
        }
    </style>
</head>
<body>
    <h1>Guess the Number Game</h1>
    <script>
        function playGame() {
            let randomNumber = Math.floor(Math.random() * 100) + 1;
            let guess;

            while (true) {
                guess = prompt("Guess a number between 1 and 100:");
                if (guess === null) {
                    alert("Game canceled. Thanks for playing!");
                    return;
                }

                guess = Number(guess);
                if (isNaN(guess)) {
                    alert("Please enter a valid number.");
                } else if (guess < randomNumber) {
                    alert("Too low! Try again.");
                } else if (guess > randomNumber) {
                    alert("Too high! Try again.");
                } else {
                    alert("Correct! You guessed the number.");
                    break;
                }

                // Ask after each prediction
                if (!confirm("Do you want to keep playing?")) {
                    alert("Thanks for playing!");
                    return;
                }
            }

            // Ask after winning
            if (confirm("You won! Do you want to play again?")) {
                playGame();
            } else {
                alert("Thanks for playing!");
            }
        }

        playGame();
    </script>
</body>
</html>
