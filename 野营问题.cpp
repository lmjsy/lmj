objects = {"water": [3, 10], "book": [1, 3],
			 "food": [2,9], "jack": [2,5],
			 "camera": [1,6]}

cell = [] # 5rows x 6columns values are useful
names = ["water", "book", "food", "jack", "camera"]
flag = [False] * 5 

for i in range(6):
	row = []
	for j in range(7):
		row.append(0)
	cell.append(row)

print(cell)

for i in range(1, len(cell)): # 12345

	for j in range(1, len(cell[0])): # 123456

		# print(i,j)

		current_object_weight = objects[names[i-1]][0]
		current_object_value = objects[names[i-1]][1]
		val = 0
		if j - current_object_weight < 0 :
			val = 0
			cell[i][j] = cell[i-1][j]
		else:
			val = cell[i-1][j - current_object_weight]
			cell[i][j] = max(cell[i-1][j], current_object_value + val ) 
	
def determineWhatObjectsGetSelected(i,j):
	

	if i == 0 or j == 0:
		return 

	else:
		if cell[i][j] == cell[i-1][j]:
			flag[i-2] = True
			determineWhatObjectsGetSelected(i-1, j)
		if cell[i][j] != cell[i-1][j]:
			flag[i-1] = True
			determineWhatObjectsGetSelected(i-1, j-objects[names[i-1]][0])

determineWhatObjectsGetSelected(5,6)

selected = []

for i in range(len(flag)):
	if(flag[i]):
		selected.append(names[i])
print(selected)
