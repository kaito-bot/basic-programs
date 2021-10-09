n = input()
rev = ""

for i in range(0, len(n)):
    rev += n[len(n)-i-1]

if n == rev:
    print("Palindrome")
else:
    print("Not a palindrome")
