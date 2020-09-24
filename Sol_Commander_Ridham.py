# import sys
# sys.stdin = open('input.txt', 'r')
# sys.stdout = open('output.txt', 'w')

for t in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    start = 0
    q = int(input())
    for i in range(q):
        query = list(input().split())

        if query[0] == '1':
            if query[1] == "right":
                start -= int(query[2])
            else:
                start += int(query[2])
        else:
            # for i in range(n):
            #     print(arr[(start+i)%n], end=" ")
            # print()
            print(arr[(start+int(query[1])-1) % n])
