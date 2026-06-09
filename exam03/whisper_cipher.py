def whisper_cipher(text: str, shift: int) -> str:
    cleane = []
    for tt in text:
        if tt.isalpha():
            if tt.isupper():
                tt = chr((ord(tt) - ord('A') + shift) % 26 + ord('A'))
                cleane.append(tt)
            else:
                tt = chr((ord(tt) - ord('a') + shift) % 26 + ord('a'))
                cleane.append(tt)
        else:
            cleane.append(tt)
    return "".join(cleane)

print(whisper_cipher("Hello World!", 1))