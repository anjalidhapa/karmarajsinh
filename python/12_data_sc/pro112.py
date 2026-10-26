import pandas as pd

employees = {
    "Employee_ID": [101, 102, 103, 104, 105],
    "Employee_Name": ["Rahul", "Priya", "Amit", "Neha", "Karan"],
    "Age": [25, 28, 30, 24, 27],
    "Gender": ["Male", "Female", "Male", "Female", "Male"],
    "Department": ["IT", "HR", "Finance", "IT", "Marketing"],
    "City": ["Ahmedabad", "Bhavnagar", "Surat", "Rajkot", "Vadodara"],
    "Salary": [35000, 40000, 45000, 38000, 42000],
    "Experience": [2, 4, 5, 1, 3]
}

info = pd.DataFrame(employees, index=[1,2,3,4,5])

df = info.groupby("Department")

print(df['Salary'].mean())


df = info.groupby("City")
print(df['Experience'].max())

# print(info["Salary"].mean())

