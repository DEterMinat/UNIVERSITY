a = {'Obama':'Hawai',
         'Bush':'Texas',
         'Cliton':'Arkansas',
         'Trump':'New York'
        }
print(a)
# print(type(a))
# print(a['Obama'])
# print(a['Cliton'])
# print(a['Trump'])
# print(a['Bush'])

# print(a.keys())
# print(a.values())
# print(a.items())

b= [item.upper() for item in a.keys()]
print(b)