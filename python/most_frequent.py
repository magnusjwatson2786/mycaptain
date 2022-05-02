def most_frequent(s):
    dic={}
    for a in s:
        if a in dic.keys():
            dic[a]+=1
        if a not in dic.keys():
            dic[a]=1
    for i in sorted (dic.values())[::-1] :
        k=list(dic.keys())[list(dic.values()).index(i)]
        print(f"{k}= {dic[k]}",end=" ")
        del dic[k]
    
y=input("Please enter a string : ")
most_frequent(y)
