def sculptor(text: str) -> str:
    result = []
    next_is_lower = True
    
    for char in text:
        if char.isalpha():
            if next_is_lower:
                result.append(char.lower())
            else:
                result.append(char.upper())

            next_is_lower = not next_is_lower
        else:
            result.append(char)
            
    return "".join(result)

if __name__ == "__main__":
    # Basic case
    print(sculptor("Hello world"))
    # Output: "hElLo WoRlD"

    # With punctuation
    print(sculptor("Hello, world!"))
    # Output: "hElLo, WoRlD!"

    # With numbers
    print(sculptor("123abcDEF"))
    # Output: "123aBcDeF"

    # Mixed characters
    print(sculptor("a-bC-dEf-ghIj"))
    # Output: "a-Bc-DeF-gHiJ"

    # Edge cases
    print(sculptor(""))
    # Output: ""

    print(sculptor("12345"))
    # Output: "12345"

    print(sculptor("A"))
    # Output: "a"

    print(sculptor("ab"))
    # Output: "aB"
    s = ["hdhhdhd"]
    d = (["dhjskd"], 99, "hhdsj")
    s.append((["dhjskd"], 99, "hhdsj"))
    print(s)