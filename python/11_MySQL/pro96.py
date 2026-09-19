import mysql.connector

db_connection = mysql.connector.connect(
    host="localhost",
    user="root",
    password="",
    port=3307,
    database="karmaraj"
)

cursor = db_connection.cursor()

# Create Table
cursor.execute("""
    CREATE TABLE IF NOT EXISTS employees (
        id INT PRIMARY KEY AUTO_INCREMENT,
        name VARCHAR(50) NOT NULL,
        age INT NOT NULL,
        salary INT NOT NULL
    )
""")

print("Table 'employees' verified/created.")


# CREATE
def create_emp(name, age, salary):
    try:
        sql = """
            INSERT INTO employees (name, age, salary)
            VALUES (%s, %s, %s)
        """

        val = (name, age, salary)

        cursor.execute(sql, val)
        db_connection.commit()

        print(f"Employee successfully added with ID: {cursor.lastrowid}")

    except mysql.connector.Error as err:
        print(f"Error inserting data: {err}")


# READ
def read_all_emp():
    cursor.execute("SELECT id, name, age, salary FROM employees")

    records = cursor.fetchall()

    print("\n--- Employee Records ---")

    for row in records:
        print(
            f"ID: {row[0]} | "
            f"Name: {row[1]} | "
            f"Age: {row[2]} | "
            f"Salary: {row[3]}"
        )

    print("------------------------\n")

# employees with more than 45000 salary
def read_45k_emp():
    cursor.execute("SELECT id, name, age, salary FROM employees where salary>45000")

    records = cursor.fetchall()

    print("\n--- Employee Records ---")

    for row in records:
        print(
            f"ID: {row[0]} | "
            f"Name: {row[1]} | "
            f"Age: {row[2]} | "
            f"Salary: {row[3]}"
        )

    print("------------------------\n")


# UPDATE
def update_employee(id, new_salary):
    sql = """
        UPDATE employees
        SET salary = %s
        WHERE id = %s
    """

    val = (new_salary, id)

    cursor.execute(sql, val)
    db_connection.commit()

    print(f"Rows affected/updated: {cursor.rowcount}")


# DELETE
def delete_employee(name):
    sql = """
        DELETE FROM employees
        WHERE name = %s
    """

    val = (name,)

    cursor.execute(sql, val)
    db_connection.commit()

    print(f"Rows affected/deleted: {cursor.rowcount}")



# Fetch top 2 employees by salary
def getTopEmp(noOfEmp = 2):
    sql = f"""
        SELECT * 
        FROM employees
        ORDER BY salary DESC
        LIMIT {noOfEmp}
    """

    cursor.execute(sql)

    rows = cursor.fetchall()

    print("Top 2 salary employees:")

    for row in rows:
        print(
            f"ID: {row[0]} | "
            f"Name: {row[1]} | "
            f"Age: {row[2]} | "
            f"Salary: {row[3]}"
        )


# delete_employee('Vishal Singh')
read_all_emp()
# read_45k_emp()


# getTopEmp(3)


# CREATE EMPLOYEE
# create_emp("Amit Kumar", 24, 32000)
# create_emp("Sneha Verma", 27, 41000)
# create_emp("Raj Malhotra", 30, 52000)
# create_emp("Pooja Sharma", 25, 36000)
# create_emp("Vishal Singh", 33, 61000)
# create_emp("Kiran Patel", 29, 45000)
# create_emp("Nisha Gupta", 26, 39000)
# create_emp("Akash Yadav", 31, 57000)
# create_emp("Meera Joshi", 28, 48000)
# create_emp("Sahil Khan", 23, 30000)
# create_emp("Komal Shah", 32, 59000)
# create_emp("Deepak Mehta", 35, 68000)
# create_emp("Tanya Desai", 24, 34000)
# create_emp("Mohit Agarwal", 37, 75000)
# create_emp("Ritika Jain", 29, 46000)
# create_emp("Yash Thakkar", 26, 40000)
# create_emp("Simran Kaur", 34, 63000)
# create_emp("Nitin Rao", 38, 80000)
# create_emp("Bhavna Patel", 27, 43000)
# create_emp("Dev Joshi", 30, 55000)


# READ
# read_all_emp()

# # UPDATE
# update_employee(
#     0,
#     55000
# )

# # READ AGAIN
# read_all_emp()
