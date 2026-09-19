from datetime import date
import mysql.connector

# 1. Establish Connection to the 'db' database
db_connection = mysql.connector.connect(
    host="localhost",
    user="root",
    password="",
    port=3307,
    database="karmaraj_sinh",
)

cursor = db_connection.cursor()

# 2. CREATE TABLE
cursor.execute(
    """
CREATE TABLE IF NOT EXISTS students (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(255) NOT NULL,
    email VARCHAR(255) UNIQUE NOT NULL,
    marks INT NOT NULL,
    pass_status VARCHAR(10) NOT NULL,
    dob DATE NOT NULL
)
"""
)
print("Table 'students' verified/created.")

# ==========================================
# CRUD FUNCTIONS
# ==========================================


# C - CREATE: Add a new student
def create_student(name, email, marks, pass_status, dob_str):
    """dob_str format should be 'YYYY-MM-DD'"""

    # query -> 
    # password=hadi22or''  sql injection - CS attact
    try:
        sql = "INSERT INTO students (name, email, marks, pass_status, dob) VALUES (%s, %s, %s, %s, %s)"
        val = (name, email, marks, pass_status, dob_str)
        cursor.execute(sql, val)
        db_connection.commit()
        print(f"Student successfully added with ID: {cursor.lastrowid}")
    except mysql.connector.Error as err:
        print(f"Error inserting data: {err}")


# R - READ: Fetch and display all students
def read_all_students():
    cursor.execute("SELECT id, name, email, marks, pass_status, dob FROM students")
    records = cursor.fetchall()
    print("\n--- Student Records ---")
    for row in records:
        print(
            f"ID: {row[0]} | Name: {row[1]} | Email: {row[2]} | Marks: {row[3]} | Pass Status: {row[4]} | DOB: {row[5]}"
        )
    print("-----------------------\n")


# U - UPDATE: Update marks and pass status by email
def update_student_marks(email, new_marks, new_status):
    sql = "UPDATE students SET marks = %s, pass_status = %s WHERE email = %s"
    val = (new_marks, new_status, email)
    cursor.execute(sql, val)
    db_connection.commit()
    print(f"Rows affected/updated: {cursor.rowcount}")


# D - DELETE: Remove a student by email
def delete_student(email):
    sql = "DELETE FROM students WHERE email = %s"
    val = (email,)
    cursor.execute(sql, val)
    db_connection.commit()
    print(f"Rows affected/deleted: {cursor.rowcount}")


# ==========================================
# EXECUTION EXAMPLES
# ==========================================

# # 1. Insert/Create a student record
# create_student(
#     name="Alice Smith",
#     email="alice@example.com",
#     marks=85,
#     pass_status="Pass",
#     dob_str="2005-04-12",
# )

# # 2. View all records
# read_all_students()

# # 3. Update a record
# update_student_marks(email="alice@example.com", new_marks=92, new_status="Pass")

# # 4. View changes
# read_all_students()

# # 5. Delete the record
# delete_student(email="alice@example.com")

# 3. Bulk insert statement
def insert_many(data):
    sql = "INSERT INTO students (name, email, marks, pass_status, dob) VALUES (%s, %s, %s, %s, %s)"
    try:
        # executemany inserts the entire list in one go
        cursor.executemany(sql, data)

        # Commit transactions to make it permanent
        db_connection.commit()

        print(f"Successfully inserted {cursor.rowcount} students into the table!")

    except mysql.connector.Error as err:
        print(f"Database Error: {err}")



student_data = [
    ("Diya Sharma", "diyasharma@example.com", 65, "Pass", "2005-05-16"),
    ("Sanya Gupta", "sanyagupta@example.com", 43, "Pass", "2004-06-27"),
    ("Aditya Mehta", "adityamehta@example.com", 34, "Fail", "2004-03-02"),
    ("Arjun Kumar", "arjunkumar@example.com", 59, "Pass", "2006-10-31"),
    ("Sneha Sharma", "snehasharma@example.com", 55, "Pass", "2006-05-09"),
    ("Sanya Patel", "sanyapatel@example.com", 65, "Pass", "2004-01-14"),
    ("Meera Roy", "meeraroy@example.com", 84, "Pass", "2005-11-27"),
    ("Vihaan Gupta", "vihaangupta@example.com", 57, "Pass", "2005-11-20"),
    ("Diya Verma", "diyaverma@example.com", 78, "Pass", "2004-07-17"),
    ("Priya Choudhury", "priyachoudhury@example.com", 74, "Pass", "2005-06-25"),
    ("Ananya Roy", "ananyaroy@example.com", 88, "Pass", "2004-09-12"),
    ("Amit Verma", "amitverma@example.com", 100, "Pass", "2005-08-23"),
    ("Sneha Choudhury", "snehachoudhury@example.com", 76, "Pass", "2005-01-28"),
    ("Arjun Sharma", "arjunsharma@example.com", 59, "Pass", "2005-08-15"),
    ("Arjun Choudhury", "arjunchoudhury@example.com", 59, "Pass", "2004-07-25"),
    ("Amit Singh", "amitsingh@example.com", 88, "Pass", "2006-01-17"),
    ("Meera Joshi", "meerajoshi@example.com", 75, "Pass", "2005-03-05"),
    ("Vihaan Roy", "vihaanroy@example.com", 39, "Fail", "2004-12-16"),
    ("Kriti Roy", "kritiroy@example.com", 61, "Pass", "2004-11-30"),
    ("Dev Mehta", "devmehta@example.com", 64, "Pass", "2005-03-25"),
]

insert_many(student_data)



# ==========================================
# CLOSE CONNECTION
# ==========================================
cursor.close()
db_connection.close()
