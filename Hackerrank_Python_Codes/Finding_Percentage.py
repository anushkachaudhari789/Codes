if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    x=student_marks.get(query_name)
    sum1=0 
    i=0   
    sum1+=x[i]+x[i+1]+x[i+2]
    avg=0
    avg+=sum1/3
    print("%.2f" % avg)
