
# Importing the Libraries
from sklearn.preprocessing import StandardScaler
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import LabelEncoder, OneHotEncoder
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd


def Drop_Columns_Except(dataset, Columns):
    Drop_Columns = []
    for X in dataset.columns:
        if X in Columns:
            continue
        else:
            Drop_Columns.append(X)
    return dataset.drop(Drop_Columns, axis=1)


def Drop_Column(dataset, Limit):
    Columns = []
    Null_Sum = dataset.isnull().sum()
    i = 0
    while i < Null_Sum.__len__():
        if(Null_Sum[i] > Limit):
            Columns.append(dataset.columns.values[i])
        i = i + 1
    return dataset.drop(Columns, axis=1)


# Reading File
Columns = ['iyear', 'extended', 'country',
           'country_txt', 'region', 'region_txt', 'provstate', 'city',
           'suicide', 'attacktype1',
           'attacktype1_txt', 'targtype1', 'targtype1_txt', 'targsubtype1',
           'targsubtype1_txt',  'natlty1', 'natlty1_txt',
           'weaptype1', 'weaptype1_txt', 'weapsubtype1', 'weapsubtype1_txt',
           'nkill', 'nkillus', 'nkillter', 'nwound', 'nwoundus',
           'nwoundte']

# ! Columns Left
Final_Columns = ['iyear', 'country_txt', 'region_txt',
                 'attacktype1_txt', 'targtype1_txt', 'weaptype1_txt']

# Reading Data From File
Globel_Terrorism = pd.read_csv("Global_Terrorism.csv")

# Data Cleaning:
# Removing Empty Data Columns
Globel_Terrorism = Drop_Column(Globel_Terrorism, 0)

# Removing Columns
Globel_Terrorism = Drop_Columns_Except(Globel_Terrorism, Final_Columns)
X = Globel_Terrorism.values
Y = Globel_Terrorism.iloc[:, 1]  # ! Country Columns

print(X)
print(Y)
Globel_Terrorism.head(100)

# Encoding categorical data

labelencoder_X = LabelEncoder()

for i in range(1, 6):
    X[:, i] = labelencoder_X.fit_transform(X[:, i])

labelencoder_Y = LabelEncoder()
Y = labelencoder_Y.fit_transform(Y)
# One Hot Encoder....
"""
onehotencoder = OneHotEncoder(categorical_features =[0])
X = onehotencoder.fit_transform(X).toarray()
"""

# Splitting the Dataset into Training set and Test Set
X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.2)

# Feature Scaling
sc_X = StandardScaler()
X_train = sc_X.fit_transform(X_train)
X_test = sc_X.transform(X_test)
sc_Y = StandardScaler()
Y_train = sc_Y.fit_transform(X_train)
Y_test = sc_Y.transform(X_test)
                                                                                                                                                                                                                                                                                                                                              