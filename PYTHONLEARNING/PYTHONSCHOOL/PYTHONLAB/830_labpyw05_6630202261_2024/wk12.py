global_var = "Global"
def my_fucntion():
    print(f"inside {global_var}")
    
my_fucntion()
print("outside",global_var)