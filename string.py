
def numbersToStrings(argument):
    switcher = {
        0: "zero",
        1: "one",
        2: "two",
    }
 

    return switcher.get(argument, "nothing")
 
# Driver program
if __name__ == "__main__":
    argument=0
    print (numbersToStrings(argument))