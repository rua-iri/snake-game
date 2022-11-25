
import serial
import keyboard

#must be run with sudo b/c of keyboard library

ard_ser = serial.Serial("/dev/ttyACM3", 9600, timeout=1)


while True:

    data = ard_ser.readline().decode().strip()

    if data=="w":
        keyboard.press_and_release("up")
    elif data=="a":
        keyboard.press_and_release("left")
    elif data=="s":
        keyboard.press_and_release("down")
    elif data=="d":
        keyboard.press_and_release("right")
    elif data=="e":
        keyboard.press_and_release("enter")
