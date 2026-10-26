# 1
# import pandas as pd
# data={
#     'id':[1,2,3,4],
#     'name':['abc','xyz','pqr','ab']
# }
# result=pd.DataFrame(data,index=['a1','a2','a3'])

# print(result.loc['a1'])

# 2
import pandas as pd

data=pd.read_csv('employee.csv')
# print(data.to_string())
# print(data.head(2))
# print(data.tail(2).to_string())
# print(data.describe())

for index, row in data.iterrows():
    print(row['Employee_Name'])
    print('-----------------------------------')
