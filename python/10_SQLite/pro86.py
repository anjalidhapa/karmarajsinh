import sqlite3


# CREATE TABLE
def createTable():

    with sqlite3.connect("students.db") as conn:
        cursor = conn.cursor()

        cursor.execute("""
            CREATE TABLE IF NOT EXISTS students (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                name TEXT NOT NULL,
                age INTEGER
            )
        """)

        print("Database and table verified successfully.")


# INSERT
def insert_data(name, age):

    with sqlite3.connect("students.db") as conn:
        cursor = conn.cursor()

        cursor.execute("""
            INSERT INTO students (name, age)
            VALUES (?, ?)
        """, (name, age))

        print("Data Inserted")


# FETCH
def fetch_data():

    with sqlite3.connect("students.db") as conn:
        cursor = conn.cursor()

        cursor.execute("""
            SELECT * FROM students
        """)

        all_rows = cursor.fetchall()

        print("All data:", all_rows)
        print("Data fetch successful")


# sort FETCH
def sort_fetch_data():

    with sqlite3.connect("students.db") as conn:
        cursor = conn.cursor()

        cursor.execute("""
            SELECT * FROM students order by age desc
        """)

        all_rows = cursor.fetchall()

        print("All data:", all_rows)
        print("Data fetch successful")


# first 2 FETCH
def top_fetch_data():

    with sqlite3.connect("students.db") as conn:
        cursor = conn.cursor()

        cursor.execute("""
            SELECT * FROM students order by age desc limit 2
        """)

        all_rows = cursor.fetchall()

        print("All data:", all_rows)
        print("Data fetch successful")


# UPDATE
def update(id, new_age):

    with sqlite3.connect("students.db") as conn:
        cursor = conn.cursor()

        cursor.execute("""
            UPDATE students
            SET age = ?
            WHERE id = ?
        """, (new_age, id))

        print("Data updated successfully.")


# DELETE
def delete(name):

    with sqlite3.connect("students.db") as conn:
        cursor = conn.cursor()

        cursor.execute("""
            DELETE FROM students
            WHERE name = ?
        """, (name,))

        print("Data deleted successfully.")


# # IMPORTANT: Create table first
# createTable()


# # INSERT 20 STUDENTS
# insert_data("Aarav", 20)
# insert_data("Riya", 22)
# insert_data("Rahul", 21)
# insert_data("Priya", 19)
# insert_data("Arjun", 23)
# insert_data("Neha", 20)
# insert_data("Vivek", 24)
# insert_data("Ananya", 21)
# insert_data("Karan", 22)
# insert_data("Pooja", 19)
# insert_data("Rohan", 23)
# insert_data("Sneha", 20)
# insert_data("Aditya", 25)
# insert_data("Kavya", 21)
# insert_data("Nikhil", 24)
# insert_data("Isha", 19)
# insert_data("Manav", 22)
# insert_data("Diya", 20)
# insert_data("Harsh", 23)
# insert_data("Meera", 21)


# # FETCH
# fetch_data()

# update(20,18)

# delete('Diya')

sort_fetch_data()
top_fetch_data()