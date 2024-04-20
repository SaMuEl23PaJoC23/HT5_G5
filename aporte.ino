import serial, time

puertoSerie = serial.Serial('COM3', 9600)
time.sleep(2)

data=''
while (data != '3'):
    data = input("Introducir un valor (1 o 0): ")
    if(data == '1'):
        puertoSerie.write(b'1')
        print("LED encendido !! \n")
