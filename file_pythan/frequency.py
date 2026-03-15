def letter_frequency(sentence):
    freq = {}
    for ch in sentence:
        if ch.isalpha():
            ch = ch.lower()
            if ch in freq():
                freq[ch] += 1
            else:    
                freeq[ch] = 1 
    return freq
s = input("enter a sentence:")                
print("frequency of each letter:")

