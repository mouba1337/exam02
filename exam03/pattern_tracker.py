def pattern_tracker(text: str) -> int:
    count = 0
    for i in range(len(text) - 1):
        char1 = text[i]
        char2 = text[i+1]
        if char1.isdigit() and char2.isdigit():
            if int(char2) == int(char1) + 1:
                count += 1
    
    return count

print(pattern_tracker("12a34"))