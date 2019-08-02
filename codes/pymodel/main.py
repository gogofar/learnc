import pandas as pd
import numpy as np

df=pd.read_csv("./data/HR.csv")

import seaborn as sns
import matplotlib.pyplot as plt


#plt.bar(np.arange(len(df["salary"].values_counts())),df["salary"].values_counts())
plt.bar(np.arange(len(df["salary"].value_counts())),df["salary"].value_counts())

plt.show()
