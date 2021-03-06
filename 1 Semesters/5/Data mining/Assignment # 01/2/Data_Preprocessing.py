# Import Libraries

import numpy as np
import pandas as pd
from sklearn.preprocessing import LabelEncoder, StandardScaler
from sklearn.impute import SimpleImputer
from sklearn.model_selection import train_test_split

# Function


def Remove_Duplication(x):
    return list(dict.fromkeys(x))


def Empty_Row_Del(X):
    RowNo = 0
    for Row in X:  # Loop Will Run Almost 6690...
        i = 0
        isnan_Row = True
        while i < Row.__len__():  # Checking Every Index of a ROW DATA
            if(pd.isna(Row[i]) == False):
                isnan_Row = False
                break
            else:
                i = i+1
        if(isnan_Row):
            # Drop the Empty OR Null Row from Data
            Google_Browsing.drop([RowNo], axis=0, inplace=True)
        RowNo = RowNo + 1
    return Google_Browsing.iloc[:, :].values


def Split_Year(Dates):
    Year = []
    for Date in Dates:
        str(Date)
        Year.append(Date.split("-")[0])
    return Remove_Duplication(Year)


# Importing DataSet
Google_Browsing = pd.read_csv("data.csv")
X = Google_Browsing.iloc[:, 1:].values

# ! Data Cleaning:
# Dropping Columns
# print(Google_Browsing.isnull().sum())
Google_Browsing = Google_Browsing.drop(
    ["Browser warnings", "Search warnings"], axis=1)
# print(Google_Browsing.isnull().sum())

# Removing Complete Empty Row
X = Empty_Row_Del(X)

# Dealing With Missing Data
imputer = SimpleImputer()
imputer = imputer.fit(X[:, 1:])
X[:, 1:] = imputer.transform(X[:, 1:])


# Encoding Categorical Data
Data_Weak_Date = Google_Browsing.iloc[:, 0].values
labelencoder = LabelEncoder()
Encoded_Date = labelencoder.fit_transform(Data_Weak_Date)

# Checking For Data
# print(Split_Year(Data_Weak_Date))
# OneHot Enncoder
"""
    One Hot Encoder is Not Perfect For This Condition
"""

"""
    Let Start Data Handling
"""

# Selecting the Column
X_Site = np.array(X[:, [1, 2, 5, 6, 7, 8]])
Y_Number = X[:, [3, 4]]

# Spliting the Data into Training Set and Test Set
X_train, X_test, y_train, y_test = train_test_split(
    X_Site, Y_Number, test_size=0.2)  # ! Spliting the Data in 80% and 20%


# Feature Scaling
sc_x = StandardScaler()
X_train = sc_x.fit_transform(X_train)
X_test = sc_x.transform(X_test)
                                                                                                                                                                                                                                                                                                                                              