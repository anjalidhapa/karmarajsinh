import sqlite3

def createTable():
    # Connect to a database file (or use ':memory:' for a temporary RAM database)
    with sqlite3.connect("users_data.db") as conn:
        # A cursor allows you to execute SQL statements
        cursor = conn.cursor()
        
        # Create a table
        cursor.execute("""
            CREATE TABLE IF NOT EXISTS users (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                name TEXT NOT NULL,
                email TEXT UNIQUE,
                age INTEGER
            )
        """)
        print("Database and table verified successfully.")

def insertData(name = "", email = "", age = 0):
    # Connect to a database file (or use ':memory:' for a temporary RAM database)
    with sqlite3.connect("users_data.db") as conn:
        # A cursor allows you to execute SQL statements
        cursor = conn.cursor()
        
        # Create a table
        cursor.execute("""
            insert into users (name, email, age) values (?, ?, ?)
        """, (name, email, age))
        print("Data inserted successfully.")

def fetchData():
    # Connect to a database file (or use ':memory:' for a temporary RAM database)
    with sqlite3.connect("users_data.db") as conn:
        # A cursor allows you to execute SQL statements
        cursor = conn.cursor()
        
        # Create a table
        cursor.execute("""
            select * from users
        """)
        all_rows = cursor.fetchall()
        print("All rows:", all_rows)
        print("Data fetched successfully.")
        

createTable()
# insertData("hadi", "hadi@gmail.com", 10)
insertData("cosmos", "cosmos@gmail.com", 103)
insertData("cosmos_computer", "cosmos_computer@gmail.com", 210)
fetchData()