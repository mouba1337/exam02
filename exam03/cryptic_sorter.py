def cryptic_sorter(strings: list[str]) -> list[str]:
    def count_vowels(s: str) -> int:
        return sum(1 for char in s.lower() if char in "aeiou")

    return sorted(strings, key=lambda x: (len(x), x.lower(), count_vowels(x)))