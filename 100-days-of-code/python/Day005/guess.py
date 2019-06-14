import random

answer = random.randint(1, 1000)
counter = 0

while True:
    counter += 1
    Number =  int ( input ( ' Please enter: ' ))

    if number < answer:
        Print ( ' bigger ' )

    elif number > answer:
        Print ( ' small little ' )

    else:
        Print ( ' Congratulations you guessed it! ' )
        break

Print ( ' you guess the total of % d times '  % counter)

if counter > 20:
    Print ( ' Your IQ balance is obviously insufficient ' )
