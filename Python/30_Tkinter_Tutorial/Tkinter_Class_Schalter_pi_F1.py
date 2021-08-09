
# Tkinter
# Definition einer Klasse Schalter

from Tkinter import *
from PIL import Image, ImageTk

root = Tk()
v = IntVar()
canvas_width = 50
canvas_height = 50
	
sqr_gry_arrow_red_img = PhotoImage(file="//home/pi//Repositories//Raspberry-Pi//Python//30_Tkinter_Tutorial//20_Pictures//20_Gif//Rechteck_grau_mit_Pfeil_rot_klein.gif")
sqr_gry_circle_grn_img = PhotoImage(file="//home/pi//Repositories//Raspberry-Pi//Python//30_Tkinter_Tutorial//20_Pictures//20_Gif//Rechteck_grau_mit_Kreis_durchstrichen_gruen_klein.gif")

			
			


class Schalter:
					
	def upper_radio_button_pressed(self):
			self.canvas = Canvas(root, width=canvas_width, height=canvas_height)
			self.canvas.create_image(10,10, anchor=NW, image=sqr_gry_arrow_red_img)
			self.canvas.place(x = 150, y = 40, width=50, height=50)
	
	Radiobutton(root, 
            text="Schalter ON",
            padx = 10, 
            variable=v, 
            value=1,
            command=upper_radio_button_pressed).place(x = 20,
            y = 30, width=100, height=30)
            
	def lower_radio_button_pressed(self):
			self.canvas = Canvas(root, width=canvas_width, height=canvas_height)
			self.canvas.create_image(10,10, anchor=NW, image=sqr_gry_circle_grn_img)
			self.canvas.place(x = 150, y = 40, width=50, height=50)
	
	Radiobutton(root, 
            text="Schalter OFF",
            padx = 10, 
            variable=v, 
            value=2,
            command=lower_radio_button_pressed).place(x = 20,
            y = 70, width=120, height=30)

	def __init__(self):
            self.lower_radio_button_pressed()
		

		
	
schalter_1 = Schalter()

def main():
	
		# width x height + x_offset + y_offset:
	root.geometry("500x200+30+30")
	root.mainloop()
	
	


if __name__ == '__main__':
	main()
