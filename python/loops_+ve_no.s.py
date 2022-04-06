y=input("Input no.s separated by space : ")

y=y.split(" ")
x=[]
for l in y:
	if int(l) > 0:
		x.append(int(l))

print("Output: ",x)