def countDigits(number):
    return len(str(abs(number)))


def isArmstrong(number):
    if number < 0:
        return False

    digits = countDigits(number)
    total = sum(int(digit) ** digits for digit in str(number))
    return total == number


def main():
    try:
        number = int(input("Input a number:"))
    except ValueError:
        print("Invalid input.")
        return 1

    if isArmstrong(number):
        print(f"{number} is an Armstrong number")
    else:
        print(f"{number} is not an Armstrong number")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
