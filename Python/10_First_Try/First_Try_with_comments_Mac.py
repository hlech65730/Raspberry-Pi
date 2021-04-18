
# Morpheus Video Tutorials  3 - 
# Python 3.6 !

# Morpheus Python Tutorial #21, #22 und #23

class MyClass:
	CL_text = "Klassentext\n"
	CL_zahl = 42
	#list =[]
	#Konstruktor
	def __init__(self,buchstabeneu = 'a'):
		self.buchstabe = buchstabeneu 
		self.list=[]
	# Methode'
	def CL_function(self,neuezahl):
		self.CL_zahl = neuezahl
		self.list.append(neuezahl)
		print("Klassenfunktion\n") 

# Morpheus Python Tutorial #21

class Lebewesen:
	augen = 3 
	def __init__(self):
		self.klasse = "saeuger" 
		
	def lebe(self):
			self.augen = 4 

class Hund (Lebewesen):
	beine = 42
	
	def __init__(self):
		Lebewesen.__init__(self)
	
	def do_something(self,neuezahl):
		self.augen = neuezahl
		self.lebe()
		


# Definition von Variablen 

x = 42
k = 0 

#  Morpheus Python Tutorial #3
print("Morpheus Python Tutorial #3 \n")

s1 = 'wie geht\'s Dir ?\n'
s2 = "wie geht's Dir ?\n"
s3 = ' "wie geht\s" Dir ?\n'

print (s1)
print (s2)
print (s3)

#  Morpheus Python Tutorial #4
print("Morpheus Python Tutorial #4\n")

L1 = [1,2,3,4]
print (L1)
print ("\n")

L1.append (42)
print ("letzte Zahl ist jetzt 42\n")
print (L1[-1])  
print ("\n")

z = ['Python','Java','C++','Ada']
LL = [L1,z]		
print (LL)
print ("\n")

#  Morpheus Python Tutorial #5
print("Morpheus Python Tutorial #5\n")

L2 = 3 *  'di' + 'da' 
print (L2)
L3 = 'eins'
L4 = 'zwei'
print (L3 + L4)
L5 = 'Text fuer Einzelbuchstaben Zeichen 6 = u'
print (L5[6])

#Zeichen -3 ist das =
print ("Zeichen -3 ist das =\n")
print (L5[-3])

#Zeichen 10 bis 16 sind Einzel
print ("Zeichen 10 bis 16 sind Einzel\n")
print (L5[10:16])

#Zeichen ab 5 bis 16 ist fuer Einzelbuchstaben Zeichen 6 = u
print ("Zeichen ab 5 bis 16 ist fuer Einzelbuchstaben Zeichen 6 = u\n")
print (L5[4:])

#Zeichen bis 5 ist Text
print ("Zeichen bis 5 ist Text\n")
print (L5[:5])


# Morpheus Python Tutorial #8
print ("Morpheus Python Tutorial #8\n")
	
while k < 12:
	print(k)
	k = k + 1

# Morpheus Python Tutorial #9
print ("Morpheus Python Tutorial #9\n")

for i in z:
	print(z)

print ('finish 9')


# Morpheus Python Tutorial #10 +#11
print ("Morpheus Python Tutorial #10+ #11\n")

for i in range (0,20):
	print(i)
	if i > 15:
		break

print ("\n")

for i in range (30,20,-1):
	if i == 27:
		continue
	print(i)
	if i < 25:
		break

print ("\n")

for i in range(len(z)):
	print(z)

print('range len \n')


# Morpheus Python Tutorial #12
print ("Morpheus Python Tutorial #12\n")

def funk(x=42, y =6 ):
	print ("Morpheus Python Tutorial #15\n")
	# Morpheus Python Tutorial #7 und #15
	print ("Enthaelt Morpheus Python Tutorial #7\n")
	
	if x < 50:
		print("x ist kleiner 50\n")
	elif x == 50:
		print("x ist 50\n")
	else:
		print("x ist groesser als 50\n")
	
	print(" funk beendet\n")

	return i
	
funk()
	
# Morpheus Python Tutorial #13
print ("Morpheus Python Tutorial #13\n")
	
def fib(n):
	if n< 2 :
		return n
	else:
		return fib (n-1) + fib (n-2)
		
for i in range(1,10):
	var = fib(i)
	print(var) 


# Morpheus Python Tutorial #14
print ("Morpheus Python Tutorial #14\n")

def flist(L6=None):
	if L6 is None:
		L6 = []
		L6.append(42)
		return L6
print ( flist())
print ( flist())

# Morpheus Python Tutorial #17

def User_input(nix = 5):
		print ("Morpheus Python Tutorial #17\n")
		gehtab = ""
		#gehtab = raw_input("was geht ab ?\n") # Python 2
		gehtab = input("was geht ab ?\n") # Python 3
		print(type(gehtab))
		for s in gehtab:
			print(s) 		
		alter = input("Wie alt bist Du ?\n")
		print (type(alter))
		alter2 =  int(alter) +5
		print("In 5 Jahren bist Du " + str(alter2))
		print ("\n")
	
# Morpheus Tutorial Uebung 1
# Temperaturen umrechnen von Grad Celsius in Grad Kelvin
# K = C + 273,15

def get_temperature():
	print(' Morpheus Tutorial Uebung 1 ')
	while True:
			try:
				print ( "Gib die Temperatur in ") 
				C = float(input("Grad Celsius ein : "))
				return C
			except ValueError:
				print(" Keine gueltige Temperaturangabe.") 

def convert_to_Kelvin(C):
	K = C + 275.15
	return K
	

# Morpheus Python Tutorial #20
# Failure : invalid syntax bei Python 2.x ! 
	
def fvartest():
		print ("Morpheus Python Tutorial #20\n")
		def tstlocal():
				stvar = "local text "
		#def do_nonlocal():
				#nonlocal tstvar
				#tstvar = 'non local text'
		def do_global():
				global tstvar
				tstvar = 'global text'
		tstvar = "text "
		tstlocal()
		#do_nonlocal()
		do_global()
		print("after init:" , tstvar ) 

fvartest() 
print("global", tstvar )



if __name__ == '__main__':
	
	print ( " First_Try_with_comments wird ausgefuehrt ") 
	
	Cel = get_temperature()
	print("Das sind " + str(convert_to_Kelvin(Cel)) + "  Kelvin" )
	
	# Morpheus Python Tutorial #17
	User_input()
	
	# Morpheus Python Tutorial #18
	print ("Morpheus Python Tutorial #18\n")
	f = open('text.txt','r')
	print(f.read())
	print(f.readline())
	for line in f:
		print(line)
	print(f.read(4))

	# Morpheus Python Tutorial #19
	print ("Morpheus Python Tutorial #19\n")
	f = open('text.txt','a')
	f.write('\n3.Zeile wurde eingefuegt')
	f.close()
	f = open('text.txt','r+')
	print(f.read())
	f.close()
	
	# Morpheus Python Tutorial #22
	print ("Morpheus Python Tutorial #22\n")
	
	instanz = MyClass('z')
	instanz2 = MyClass()
	instanz.CL_function(1337)
	print('Ausgabe des Textes in der Klasse MyClass')
	print(instanz.CL_zahl)
	print(instanz.CL_text)
	print(instanz.buchstabe)
	print(instanz2.buchstabe)
	print(instanz2.list)
	print(instanz.list)
	
	# Morpheus Python Tutorial #23
	print ("Morpheus Python Tutorial #23\n")
	
	fiffi = Hund()
	fiffi.do_something(42)
	print(fiffi.augen)
	print(fiffi.klasse)
	
	#f = open('text.txt','w') ueberschreibt Dateiinhalt ! 
	#f = open('text.txt','r+') liest Dateiinhalt falsch ein bei print ohne close! 
	#f = open('text.txt','rb) read in binaer modus !

# function create arrays

Demoliste = []

def create_num_array(liste,xp=0):

	while xp != 0:
		liste += [0]
		xp = xp -1

create_num_array(Demoliste,10)

print(Demoliste)



charlist = ["0"]

def create_char_array(liste,cp=0):
	newchar = 'x'
	while cp != 0:
		liste.append(newchar)
		cp = cp -1

create_char_array(charlist,10)

print(charlist)


#Befehle Console->
#D:
#cd D:\Programme\Python27
#Python D:\Holger\Python\First_Try_Win.py
