
# coding: utf-8

# In[5]:


import pandas as pd


# In[6]:


demo=pd.read_csv("C:/Users/adwai/Research Python/class.csv")
demo


# In[8]:


rolls=list(range(1071,demo.shape[0]+1071))
demo.index=rolls


# In[9]:


final=demo.T.to_dict()


# In[21]:


num=float(input('Enter the ID no:'))
detail=final[num]
print('The details assosciated are:')
for key,value in stdetails.items():
    print("{}:{}".format(key,value))


# Retrieving the IDs after giving the corresponding values

# In[17]:


final2=demo


# In[18]:


col=input('Enter the column:')
val=input('Enter the Value:')


# In[20]:


q="{}=='{}'".format(col,val)
details=final2.query(q).T.to_dict().values()
print('The Product details are:',details)

