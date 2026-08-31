import csv

header = ['NAME', 'ENROL. NO.', 'MARKS']
rows = [
    ['Raghu', 10001, 59],
    ['Maanas', 10002, 73],
    ['Keval', 10003, 43],
]

with open('student.csv', mode='r', newline='', encoding='utf-8') as file:
    read = csv.reader(file)

    for row in read:
        print(row)
