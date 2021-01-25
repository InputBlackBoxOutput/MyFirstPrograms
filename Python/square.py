# Program to draw a square of size 200 pixels

import turtle as t
import time

def square(size):
    t.pendown()
    t.forward(size)
    t.right(90)
    t.forward(size)
    t.right(90)
    t.forward(size)
    t.right(90)
    t.forward(size)
    time.sleep(5)

square(200)