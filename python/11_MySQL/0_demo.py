import mysql.connector

# Connect to the MySQL server (leaving out the 'database' argument)
db_connection = mysql.connector.connect(
    host="localhost",
    user="root",
    password="",
    port=3307
)

# Create a cursor object
cursor = db_connection.cursor()

# Execute the SQL query to create the database
cursor.execute("CREATE DATABASE IF NOT EXISTS karmaraj_sinh")

print("Database 'db' created successfully!")

# Clean up and close connections
cursor.close()
db_connection.close()
