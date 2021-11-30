def add(x,y):
    return 
def sub(x,y):
    return x - y
def mul(x,y):
    return x*y
def div(x,y):
    return x/y

print("Select operation :-")
print("1.Add")
print("2.Substract")
print("3.Multiply")
print("4.Divide")

n = input("Entert your choice :")

print("Your choice is :"+n+" Now enter the two numbers:")
x=input()
y=input()

if(n == 1):
    print(x+y)
elif(n ==2):
    print(x-y)
elif(n ==3):
    print(x*y)
elif(n ==4):
    print(x/y)
