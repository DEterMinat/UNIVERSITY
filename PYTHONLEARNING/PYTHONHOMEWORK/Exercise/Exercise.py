salary = int(input("Your Salary: "))

def calculate_tax(salary):
    brackets = {
        418400: 0.396,
        416700: 0.35,
        191650: 0.33,
        91900: 0.28,
        37950: 0.25,
        9325: 0.15,
        0: 0.10
    }
    tax = 0
    for limit, rate in sorted(brackets.items(), reverse=True):
        if salary > limit:
            tax += (salary - limit) * rate
            print(f"{tax} + ({salary} - {limit}) * {rate}")
            salary = limit
            
    return tax

tax = calculate_tax(salary)
print(f"Tax Owner : {tax}")

