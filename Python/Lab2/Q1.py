def can_be_insured(age, health, gender, location):
    if 18 <= age <= 65 and health in ['Excellent', 'Good', 'Average'] and gender in ['Male', 'Female'] and location in ['City', 'Village']:
        premium = 2000
        if health == 'Excellent':
            premium += 1000
        if gender == 'Male':
            premium += 500
        if location == 'City':
            premium += 500
        max_policy = 100000
        if health == 'Excellent':
            max_policy += 100000
        return f"Eligible for insurance. Premium = Rs. {premium}, Maximum Policy = Rs. {max_policy:,}"
    else:
        return "Not eligible"

print(can_be_insured(30, 'Excellent', 'Male', 'City'))