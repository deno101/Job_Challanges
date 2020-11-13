def main():
    for x in range(1, 100):
        divisible = False
        if (x % 3 == 0):
            divisible = True
            print("Open", end="")

        if (x % 7 == 0):
            divisible = True
            print("Source", end="")

        if not divisible:
            print(x, end="")

        print("")

if __name__ == "__main__":
    main()