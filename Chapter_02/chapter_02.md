# Ответы на упражения из главы 2

В данной документе приведены ответы на упражнения из второй главы

## Упражнение 2.1

Запишите логическое выражение в совершенной дизъюнктивной нормальной форме для
всех таблиц истинности, приведенных на Рис. 2.80.

### Ответ 2.1

a) Y = !A!B + A!B + AB

b) Y = !A!B!C + ABC

c) Y = !A!B!C + !AB!C + A!B!C + A!BC + ABC

d) Y = !A!B!C!D + !A!B!CD + !A!BC!D + !A!BCD + A!B!C!D + A!BC!D + ABC!D

e) Y = !A!B!C!D + !A!BCD + !AB!CD + !ABC!D + A!B!CD + A!BC!D + AB!C!D + ABCD

## Упражнение 2.2

Запишите логическое выражение в совершенной дизъюнктивной нормальной форме для
всех таблиц истинности, приведенных на Рис. 2.81.

### Ответ 2.2

a) Y = !AB + A!B + AB

b) Y = !A!BC + !AB!C + !ABC + A!B!C + AB!C

c) Y = !A!BC + AB!C + ABC

d) Y = !A!B!C!D + !A!BC!D + !A!BCD + !ABC!D + !ABCD + A!B!C!D + A!BC!D

e) Y = !A!BCD + !ABC!D + !ABCD + A!B!C!D + A!B!CD + A!BC!D + A!BCD

## Упражнение 2.3

Запишите логическое выражение в совершенной конъюнктивной нормальной форме для
всех таблиц истинности, приведенных на Рис. 2.80.

### Ответ 2.3

a) Y = (A+!B)

b) Y = (!A+!B+C)(!A+B+!C)(!A+B+C)(A+!B+!C)(A+!B+C)(A+B+!C)

c) Y = (!A+!B+C)(!A+B+C)(A+B+!C)

d) Y = (!A+B+!C+!D)(!A+B+!C+D)(!A+B+C+!D)(!A+B+C+D)(A+!B+!C+D)(A+!B+C+D)(A+B+!C+!D)(A+B+C+D)

e) Y = (!A+!B+!C+D)(!A+!B+C+!D)(!A+B+!C+!D)(!A+B+C+D)(A+!B+!C+!D)(A+!B+C+D)(A+B+!C+D)(A+B+C+!D)

## Упражнение 2.4

Запишите логическое выражение в совершенной конъюнктивной нормальной форме для
всех таблиц истинности, приведенных на Рис. 2.81.

### Ответ 2.4

a) Y = (!A+!B)

b) Y = (!A+!B+!C)(A+!B+C)(A+B+C)

c) Y = (!A+!B+!C)(!A+B+!C)(!A+B+C)(A+!B+!C)(A+!B+C)

d) Y = (!A+!B+!C+D)(!A+B+!C+!D)(!A+B+!C+D)(A+!B+!C+D)(A+!B+C+D)(A+B+!C+!D)
(A+B+!C+D)(A+B+C+!D)(A+B+C+D)

e) Y = (!A+!B+!C+!D)(!A+!B+!C+D)(!A+!B+C+!D)(!A+B+!C+!D)(!A+B+!C+D)(A+B+!C+!D)
(A+B+!C+D)(A+B+C+!D)(A+B+C+D)

## Упражнение 2.5

Минимизируйте все логические выражения, полученные в упражнении 2.1.

### Ответ 2.5


a) Y = !A!B + A!B + AB = !B+AB = (!B+A)(!B+B) = !B +A 

b) Y = !A!B!C + ABC = !A!B!C+ABC

c) Y = !A!B!C + !AB!C + A!B!C + A!BC + ABC = AC+!A!C+A!B!C=AC+!C(!A+A!B) = AC+!A!C+!B!C

d) Y = !A!B!C!D + !A!B!CD + !A!BC!D + !A!BCD + A!B!C!D + A!BC!D + ABC!D = !D!B+!BC!D+!A!B!CD+A!B!C!D+ABC!D=!A!B+!B!D+AC!D

e) Y = !A!B!C!D + !A!BCD + !AB!CD + !ABC!D + A!B!CD + A!BC!D + AB!C!D + ABCD 

## Упражнение 2.6

Минимизируйте все логические выражения, полученные в упражнении 2.2.

### Ответ 2.6

<!---
  решил при помощи сайта [https://www.emathhelp.net/en/calculators/discrete-mathematics/boolean-algebra-calculator/?f=%21A%21BCD%2B%21ABC%21D%2B%21ABCD%2BA%21B%21C%21D%2BA%21B%21CD%2BA%21BC%21D%2BA%21BCD] --->

a) Y = !AB + A!B + AB = B(A+!A)+A!B = B + A!B  

B) Y = !A!BC + !AB!C + !ABC + A!B!C + AB!C = A!C+!AC+B!A

c) Y = !A!BC + AB!C + ABC = AB+!A!BC

d) Y = !A!B!C!D + !A!BC!D + !A!BCD + !ABC!D + !ABCD + A!B!C!D + A!BC!D = !AC+!B!D

e) Y = !A!BCD + !ABC!D + !ABCD + A!B!C!D + A!B!CD + A!BC!D + A!BCD = A!B+!ABC+!ACD

## Упражнение 2.7

Нарисуйте достаточно простые комбинационные схемы, реализующие выражения,
полученные в *упражнении 2.5* Под достаточно простой схемой подразумевается
такая, которая состоит из небольшого количества элементов, но при этом ее
разработчик не тратит много времени на проверку каждой из возможных
реализаций схемы.

### Ответ 2.7

a) ![Ответ 2.7 a)](2_7_a.svg "Ответ 2.7 a)")

b) ![Ответ 2.7 b)](2_7_b.svg "Ответ 2.7 b)")

c) ![Ответ 2.7 c)](2_7_c.svg "Ответ 2.7 c)")

d) ![Ответ 2.7 d)](2_7_d.svg "Ответ 2.7 d)")

e) ![Ответ 2.7 e)](2_7_e.svg "Ответ 2.7 e)")

## Упражнение 2.8

Нарисуйте достаточно простые комбинационные схемы, реализующие выражения,
полученные в *упражнении 2.6* Под достаточно простой схемой подразумевается
такая, которая состоит из небольшого количества элементов, но при этом ее
разработчик не тратит много времени на проверку каждой из возможных
реализаций схемы.


### Ответ 2.8


a) ![Ответ 2.8 a)](2_8_a.svg "Ответ 2.8 a)")

b) ![Ответ 2.8 b)](2_8_b.svg "Ответ 2.8 b)")

c) ![Ответ 2.8 c)](2_8_c.svg "Ответ 2.8 c)")

d) ![Ответ 2.8 d)](2_8_d.svg "Ответ 2.8 d)")

e) ![Ответ 2.8 e)](2_8_e.svg "Ответ 2.8 e)")

## Упражнение 2.9

Повторите *Упражнение 2.7*, используя только элементы НЕ, И и ИЛИ.

### Ответ 2.9

Также как и 2.7

## Упражнение 2.10

Повторите *Упражнение 2.8*, используя только элементы НЕ, И и ИЛИ.

### Ответ 2.10

Также как и 2.8

## Упражнение 2.11

Повторите *Упражнение 2.7*, используя только элементы НЕ, И-НЕ и ИЛИ.

### Ответ 2.11

a) ![Ответ 2.11 a)](2_11_a.svg "Ответ 2.11 a)")

b) ![Ответ 2.11 b)](2_11_b.svg "Ответ 2.11 b)")

c) ![Ответ 2.11 c)](2_11_c.svg "Ответ 2.11 c)")

d) ![Ответ 2.11 d)](2_11_d.svg "Ответ 2.11 d)")

e) ![Ответ 2.11 e)](2_11_e.svg "Ответ 2.11 e)")

## Упражнение 2.12

Повторите *Упражнение 2.8*, используя только элементы НЕ, И-НЕ и ИЛИ.

### Ответ 2.12

a) ![Ответ 2.12 a)](2_12_a.svg "Ответ 2.12 a)")

b) ![Ответ 2.12 b)](2_12_b.svg "Ответ 2.12 b)")

c) ![Ответ 2.12 c)](2_12_c.svg "Ответ 2.12 c)")

d) ![Ответ 2.12 d)](2_12_d.svg "Ответ 2.12 d)")

e) ![Ответ 2.12 e)](2_12_e.svg "Ответ 2.12 e)")


## Упражнение 2.13 

Упростите следующие логические выражения, используя 
булевы теоремы. Проверьте правильность результатов, используя таблицы 
истинности или карты Карно.

### Ответ 2.12

a) Y = AC + !A!BC = AC + !BC

b) Y = !A!B +!AB!C+!(A+!C) = !A!B + !A!C + !AC = !A(!B + !C + C) = !A(!B + 1) = !A

c) 