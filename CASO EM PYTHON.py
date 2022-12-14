import math
x= int(input("Informe o Divisor: "))
z= int(input("Informe o Dividendo: "))

try:
  print (x/z)
except ZeroDivisionError:
  print("o Resultado é nulo")

div =(x/z)

if (div <= -1):
  print ("O Resultado apresentado e negativo:",div)
elif (div >=1):
  print ("O Resultado apresentado e positivo:",div)
