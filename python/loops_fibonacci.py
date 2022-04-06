a=0
b=1
y=int(input("how many fibonacci no.s do you want : "))

while y>0:
	print(a)
	a,b=b,b+a
	y-=1