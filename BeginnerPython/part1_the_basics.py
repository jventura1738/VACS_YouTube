# Justin Ventura [01/20/21]
# Ventura Academy YT Computer Science
# -> github.com/jventura1738/VACS_YoutTube

"""
In this file we will quickly go over some basic features.  I personally
believe you should never learn python as your first language, so I will
assume you have SOME knowledge of programming.  

HOWEVER,

I will still give explanations that even a first time coder should be
able to understand, just at a faster pace than my other series such as
the Beginner C++ Tutorial Series.

Note python has no types for variables until the variable is assigned
some data/object.  This is good and bad; good for quick coding, bad
for debugging and warrants errors.  However, the good programmer can
easily avoid these errors and be super productive.
"""

# Little example:
n = int(input('Enter a number: '))

if n % 2 == 0:
    print(f'{n} is an even number!')
else:
    print(f'{n} is an odd number!')
