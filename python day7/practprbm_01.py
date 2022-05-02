with open("poems.txt","r") as f:
    if('Twinkle' in f.read()):
        print("\nyes twinkle is present")
    else:
        print("The word twinkle is not present")

    print(f.read())
