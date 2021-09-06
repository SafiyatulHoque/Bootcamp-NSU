while True:
    try:
        sent=""
        sentence = input()
        sen = sentence.split()
        loop=0
        for word in sen:
            backwards = word[::-1]
            if loop==0:
                loop=1
            else:
                sent=sent+" "
            sent=sent+backwards
        print(sent)

    except EOFError:
        break



# word = "hello"
# backwards = word[::-1]
# print(backwards)
