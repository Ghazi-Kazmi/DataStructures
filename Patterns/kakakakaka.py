import turtle

# Create a turtle object
t = turtle.Turtle()

# Set the background color to black
t.bgcolor("black")

# Set the turtle's pen color to white
t.pencolor("white")

# Set the turtle's pen size to 5
t.pensize(5)

# Move the turtle to the center of the screen
t.penup()
t.goto(0, 0)
t.pendown()

# Draw the "N" in the Netflix logo
t.left(90)
t.forward(100)
t.right(135)
t.forward(70)
t.left(90)
t.forward(70)
t.right(135)
t.forward(100)

# Move the turtle to the right of the "N" to draw the "e"
t.penup()
t.goto(30, 0)
t.pendown()
t.left(90)
t.forward(100)
t.right(90)
t.forward(40)
t.right(90)
t.forward(100)
t.left(90)
t.forward(40)

# Move the turtle to the right of the "e" to draw the "t"
t.penup()
t.goto(60, 0)
t.pendown()
t.left(90)
t.forward(100)
t.right(90)
t.forward(40)
t.right(90)
t.forward(100)

# Move the turtle to the right of the "t" to draw the "f"
t.penup()
t.goto(90, 0)
t.pendown()
t.left(90)
t.forward(100)
t.right(90)
t.forward(40)
t.right(90)
t.forward(60)
t.right(90)
t.forward(40)

# Move the turtle to the right of the "f" to draw the "l"
t.penup()
t.goto(120, 0)
t.pendown()
t.left(90)
t.forward(100)
t.right(90)
t.forward(40)

# Move the turtle to the right of the "l" to draw the "i"
t.penup()
t.goto(140, 0)
t.pendown()
t.left(90)
t.forward(100)

# Move the turtle to the right of the "i" to draw the "x"
t.penup()
t.goto(160, 0)
t.pendown()
t.left(90)
t.forward(100)
t.right(135)
t.forward(70)
t.left(90)
t.forward(70)
t.right(135)
t.forward(100)

# Hide the turtle and wait for the user to close the window
t.hideturtle()
turtle.exitonclick()
