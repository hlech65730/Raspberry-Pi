
# Definition der ersten Klasse und Funktionen

class MyClass:
	CL_text = "Klassentext"
	CL_zahl = 42;
	def CL_function(self):
		print("Klassenfunktion") 

x = 42
y = MyClass()

#  

z = ['Python','Java','C++','Ada']

		

def funk(x=42, y =6 ):
	
	if x < 50:
		print("x ist kleiner 50")
	else:
		print("x ist groesser als 50")	
	
	while y < 12:
		print(x)
		y = y + 1

	for i in range (0,20):
		print(i)
		if i > 15:
			break

	print("beendet")

	return i

def User_input(nix = 5):
	
		gehtab = input("was geht ab ?")
		
		#print(type(gehtab))
		
		#for s in gehtab:
			#print(s) 
			
		print(gehtab)
		


if __name__ == '__main__':
	
	print ("erster output")
	
	y.CL_function()
	
	


#Befehle ->
#D:
#cd D:\Programme\Python27
#Python D:\Holger\Python\First_Try_Win.py
