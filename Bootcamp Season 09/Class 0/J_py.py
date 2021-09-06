while True:
    try:
        val = input ()
        result=""
        for letter in val:
            if letter=="-":
                result=result+letter
            elif letter>="A" and letter<="C":
                result=result+"2"
            elif letter>="D" and letter<="F":
                result=result+"3"
            elif letter>="G" and letter<="I":
                result=result+"4"
            elif letter>="J" and letter<="L":
                result=result+"5"
            elif letter>="M" and letter<="O":
                result=result+"6"
            elif letter>="P" and letter<="S":
                result=result+"7"
            elif letter>="T" and letter<="V":
                result=result+"8"
            elif letter>="W" and letter<="Z":
                result=result+"9"
            else:
                result=result+letter
        print(result+"\n")
    except EOFERROR:
        break




print(result)
