#!/usr/bin/env python
# coding: utf-8

# In[3]:


import  psycopg2


# In[4]:


conn = psycopg2.connect(
   database="airres", user='postgres', password='123456', host='127.0.0.1', port= '5432')


# In[5]:


cursor = conn.cursor()


# In[6]:


cursor.execute("select distinct aplaneno from stops_at where stop_no>1;")


# In[7]:


data= cursor.fetchall()


# In[8]:


print(data)


# In[ ]:




