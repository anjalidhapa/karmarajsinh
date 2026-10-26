import pandas as pd
import matplotlib.pyplot as plt


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

dpt = set(employees["Department"])
emp = len(set(employees["Employee_Name"]))

plt.pie(
    [dpt, emp],
    labels=["Male", "Female"],
    colors=["skyblue", "lightpink"],
    autopct="%1.1f%%",
    startangle=90
)

plt.show()