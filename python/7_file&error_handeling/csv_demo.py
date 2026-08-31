import csv

# Your data structure
header = ['Product', 'Price', 'Stock']
rows = [
    ['Laptop', 999.99, 15],
    ['Mouse', 24.99, 150],
    ['Keyboard', 49.99, 45]
]

# Open file and write
with open('products.csv', mode='w', newline='', encoding='utf-8') as file:
    writer = csv.writer(file)
    
    # Write the header row
    writer.writerow(header)
    
    # Write all data rows at once
    writer.writerows(rows)

with open('products.csv', mode='r', newline='', encoding='utf-8') as file:
    reader = csv.reader(file)
    
    # Optional: Skip the header row if your file has one
    header = next(reader) 
    print(f"Header: {header}")
    
    for row in reader:
        print(row)  # Output: ['Alice', '30', 'Engineer']
