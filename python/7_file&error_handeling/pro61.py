import csv

header = ['NAME', 'ENROL. NO.', 'MARKS']
rows = [
    ['Raghu', 10001, 59],
    ['Maanas', 10002, 73],
    ['Keval', 10003, 43],
]

with open('student.csv', mode='w', newline='', encoding='utf-8') as file:
    writer = csv.writer(file)

    writer.writerow(header)

    writer.writerows(rows)


