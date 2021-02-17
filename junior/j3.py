inputs = []
while True:
    foo = input()
    a = int(foo[0])
    b = int(foo[1])
    steps = int(foo[2:])
    if a == 9 and b == 9 and steps == 999:
        break;
    inputs.append((a, b, steps))

previous_direction = ""
for a, b, steps in inputs:
    if (a + b) % 2 != 0:
        print("left", end=" ")
        previous_direction = "left"
    elif (a + b) == 0:
        print(previous_direction, end=" ")
    elif (a + b) % 2 == 0:
        print("right", end=" ")
        previous_direction = "right"
    print(steps)

