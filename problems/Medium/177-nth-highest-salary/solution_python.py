import pandas as pd

def nth_highest_salary(employee: pd.DataFrame, N: int) -> pd.DataFrame:
    df = employee.drop_duplicates(subset = ['salary'])
    df['salary'] = pd.to_numeric(df['salary'])
    sal = df['salary'].nlargest(N)
    if N > len(df) or N <= 0:
        return pd.DataFrame({f"getNthHighestSalary({N})" :[None]})
    else: 
        return pd.DataFrame({f"getNthHighestSalary({N})" :[sal.iloc[-1]]})