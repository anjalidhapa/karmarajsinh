import pandas as pd
import matplotlib.pyplot as plt
df=pd.read_csv("employee.csv")
# print(df)
dept_counts = df["Department"].value_counts()
print(dept_counts)
dept_counts.plot(kind="pie", autopct="%1.1f%%", startangle=90)
plt.title("Employee Count by Department")
plt.ylabel("") # Hides y-axis label
plt.tight_layout()
plt.show()