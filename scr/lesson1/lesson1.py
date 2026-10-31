import time  # Подключаем модуль для работы со временем

start_time = time.perf_counter()


name = input("Введите ваше имя: ")
age = int(input("Введите ваш год рождения: "))

current_year = 2026

print(f"Привет, {name}!")
print(f"Тебе {current_year - age} лет.")

end_time = time.perf_counter()

print(f"Время выполнения: {end_time - start_time:.6f} секунд")
