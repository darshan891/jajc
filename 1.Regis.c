<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>User Information Form</title>
</head>
<body>
    <h1>User Information Form</h1>
    <form>
        <!-- Name -->
        <label for="name">Name: </label>
        <input type="text" id="name" name="name"><br><br>

        <!-- Email -->
        <label for="email">Email: </label>
        <input type="email" id="email" name="email"><br><br>

        <!-- Age -->
        <label for="age">Age: </label>
        <input type="number" id="age" name="age"><br><br>

        <!-- Country -->
        <label for="country">Country: </label>
        <select id="country" name="country">
            <option value="India">India</option>
            <option value="USA">USA</option>
            <option value="Canada">Canada</option>
        </select><br><br>

        <!-- Password -->
        <label for="password">Password: </label>
        <input type="password" id="password" name="password"><br><br>

        <!-- Resume -->
        <label for="resume">Resume: </label>
        <input type="file" id="resume" name="resume"><br><br>

        <!-- Hobbies -->
        <label>Hobbies: </label>
        <input type="checkbox" id="cricket" name="hobby" value="Cricket">
        <label for="cricket">Cricket</label>
        <input type="checkbox" id="football" name="hobby" value="Football">
        <label for="football">Football</label><br><br>

        <!-- Gender -->
        <label>Gender: </label>
        <input type="radio" id="male" name="gender" value="Male">
        <label for="male">Male</label>
        <input type="radio" id="female" name="gender" value="Female">
        <label for="female">Female</label><br><br>

        <!-- City -->
        <label for="city">City: </label>
        <select id="city" name="city">
            <option value="">--Choose city--</option>
            <option value="Delhi">Delhi</option>
            <option value="Mumbai">Mumbai</option>
            <option value="Bangalore">Bangalore</option>
        </select><br><br>

        <!-- Address -->
        <label for="address">Address: </label><br>
        <textarea id="address" name="address" rows="4" cols="50"></textarea><br><br>

        <!-- Submit and Reset -->
        <input type="submit" value="Submit">
        <input type="reset" value="Reset">
    </form>
</body>
</html>
