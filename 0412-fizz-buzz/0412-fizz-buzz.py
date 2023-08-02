class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        i = 0
        li = []
        for num in range(1, n+1):
            i += 1
            if (num % 15 == 0):
                li.append("FizzBuzz")
            elif (num % 3 == 0):
                li.append("Fizz")
            elif (num % 5 == 0):
                li.append("Buzz")
            else:
                li.append(f"{num}")
        return li