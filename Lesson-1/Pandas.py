import pandas as pd
grade_dict = {'name': ['Amy', 'Bob', 'Charlie'],
              'grade': [50, 70, 90],
              'school': ['IVC', 'IVC', 'IVC']}
grade_df = pd.DataFrame(data=grade_dict)
print(grade_df)

for index in grade_df.index:
  print(grade_df['name'][index], '\'s grade is', grade_df['grade'][index])
