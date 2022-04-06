y=input("Input the Filename : ")
ft=""
if y.endswith(".py"):
	ft="python"
elif y.endswith(".txt"):
	ft="text"
elif y.endswith(".pdf"):
	ft="Document"

print(f"The extension of the file is : '{ft}'")
