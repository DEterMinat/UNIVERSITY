shopping = {'produce':{'fruites':['apples','oranges','spinach','carrots'],
                       'vegetable':['spinach','carrots']
                      },
            'meat':['ground beef', 'chicken breasts']}
#5.1
print(shopping['produce']['fruites'])
print(shopping['produce']['vegetable'])
#5.2
print(shopping['meat'])

print(shopping['produce'].keys())
# print(shopping['produce'].values())
#5.3
print(shopping['produce']['fruites'][0])
print(shopping['produce']['vegetable'][1])