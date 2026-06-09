def twist_sequence(arr: list[int], k: int) -> list[int]:
    # Edge Case: If the array is empty, return it immediately
    if not arr:
        return []
        
    # The Modulo Magic: Handle out-of-range 'k'
    effective_k = k % len(arr)
    
    # Edge Case: If the effective rotation is 0, the array doesn't change
    if effective_k == 0:
        return arr
        
    # The Slicing: Grab the last 'effective_k' elements, and add the rest behind them
    return arr[-effective_k:] + arr[:-effective_k]