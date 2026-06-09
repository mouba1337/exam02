def number_base_converter(number: str, from_base: int, to_base: int) -> str:

    if not (2 <= from_base <= 36) or not (2 <= to_base <= 36):
        return "ERROR"

    try:
        base10_val = int(number, from_base)
    except ValueError:
        return "ERROR"

    if base10_val == 0:
        return "0"                  

    chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    result = []

    while base10_val > 0:
        remainder = base10_val % to_base
        result.append(chars[remainder])
        base10_val = base10_val // to_base

    result.reverse()
    
    return "".join(result)

if __name__ == "__main__":
    print(number_base_converter("1010", 2, 10))    
    print(number_base_converter("FF", 16, 10))      
    print(number_base_converter("255", 10, 16))     
    print(number_base_converter("123", 10, 2))      # Output: "1111011"
    print(number_base_converter("Z", 36, 10))       # Output: "35"
    print(number_base_converter("35", 10, 36))      # Output: "Z"
    
    # Invalid Inputs -> Graceful "ERROR"
    print(number_base_converter("102", 2, 10))      # Output: "ERROR" (2 is invalid in Base-2)
    print(number_base_converter("FF", 10, 16))      # Output: "ERROR" (F is invalid in Base-10)
    print(number_base_converter("10", 1, 10))       # Output: "ERROR" (from_base must be >= 2)