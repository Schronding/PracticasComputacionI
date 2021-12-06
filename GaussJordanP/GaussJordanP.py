
equations = int(input("Número de ecuaciones: "))
rows = equations
colums = equations + 1
matrix = []
for i in range (rows):
    matrix.append([0] * colums)


for i in range (rows):
    for j in range (colums):
        matrix[i][j] = int(input("Valor elemento [" + str(i) + "][" + str(j) + "]: "))



for i in range(rows):
    for j in range(rows):
        if i != j:
            aux = float(matrix[j][i]) / float(matrix[i][i])
            for k in range(0, colums):
                matrix[j][k] = float(matrix[j][k]) - (float(aux) * float(matrix[i][k]))
        else:
            print("El sistema no tiene solución")


for i in range(equations):
    pivot = float(matrix[i][i])
    for j in range (0, colums):
        matrix[i][j] = float(matrix[i][j]) / pivot



print("Solución:\n")
for i in range(equations):
    print("x" + str(i),"=", str(matrix[i][equations]), "\n")