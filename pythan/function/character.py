def menu():
    text = input("enter the main string:")
    while true:
        print("\n----string operations menu---")
        print("1. find frequency of a character")
        print("2. replace a character with another")
        print("3. remove first occurrence of a character")
        print("4. remove all occurrences of a character")
        print("5. Exit")
        choice = input("select an option(1-5):")
        if choice =='1':
            char = input("enter character to count:")
            print(f"frequency of '{char}:{text.count(char)}")
            elif choice =='2': 
                old = input("character to replace:")
                new = input("New character:")
                text = text.replace(old,new)
                print(f"updated string:{text}")
            elif choice =='4':
                char + input("character to remove(all):")
                text = text.replace(char,"")
                print(f"Updated string:{text}")
            elif choice =='5':
                print("Exiting program.")
                break
            else:
                print("Invalid choice, try again.")
                menu()
    