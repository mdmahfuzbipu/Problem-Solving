num_of_words=int(input())

words=[]

for i in range(num_of_words):
    word=input()
    words.append(word)

for i in range(num_of_words):
    if len(words[i]) > 10:
        length_of_midwords=len(words[i])-2
        print(words[i][0]+str(length_of_midwords)+words[i][-1])
    else:
        print(words[i])
