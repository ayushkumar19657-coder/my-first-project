<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>my details</title>
    <style>
        body{
            font-family: 'Gill Sans', 'Gill Sans MT', Calibri, 'Trebuchet MS', sans-serif;
            background-color: blue;
            margin: 0%;
            padding: 0%;
            display: flex;
            text-align: center;
            justify-content: center;

        }
        input{
            margin-bottom: 13px;             
            padding: 13px;
            background-color: aqua;
            text-align: center;
            border-radius: 7px;
        }
        form{
            display: flex;
            flex-direction: column;
        }
        button{
            background-color: blueviolet;
            border-radius: 0;
            padding: 0;
            cursor: pointer;
        }
        button :hover{
            background-color: chartreuse;
        }

    </style>
</head>
<body>
    <div>
        <h1>My Details</h1>
        <form>
            <input type="Name" name="" id="" placeholder="enter ur name">
            <input type="DOB" name="" id="" placeholder="enter ur dob">
            <input type="Email" placeholder="enter ur email">
            <input type="reg no" placeholder="enter ur reg number">
            <input type="insta" value="" placeholder="enter ur insta id">      
            <input type="reset" value="reset">
        </form>
    </div>
</body>
</html>
