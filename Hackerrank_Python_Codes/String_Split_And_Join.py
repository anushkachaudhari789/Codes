def split_and_join(line):
    s=line.split(" ")
    res="-".join(s)
    return res
if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
