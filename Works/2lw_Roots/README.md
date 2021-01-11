Hello,This program will get the root for
 y = asin(x)-c with the Bisection method
 with the precision of d  for the range of [a,b]
please enter a , b , c and the precision d
a = -0.5
b = 0.9
c = 0.02
d = 0.0001
Now the program will calculate the Root of 
asin(x)= 0.020000 between -0.500000 & 0.900000 with the precision of 0.000100
y1=-0.543599
y2=1.099770
32768 steps :asin(-0.500000)=-0.543599
x = (0.200000)	 asin(0.201358)	asin(0.200000)= 0.201358
32770 steps :asin(-0.150000)=-0.543599
x = (0.025000)	 asin(0.025003)	asin(0.025000)= 0.025003
32776 steps :asin(0.019531)=-0.543599
x = (0.022266)	 asin(0.022267)	asin(0.022266)= 0.022267
32777 steps :asin(0.019531)=-0.543599
x = (0.020898)	 asin(0.020900)	asin(0.020898)= 0.020900
32778 steps :asin(0.019531)=-0.543599
x = (0.020215)	 asin(0.020216)	asin(0.020215)= 0.020216
32780 steps :asin(0.019873)=-0.543599
x = (0.020044)	 asin(0.020045)	asin(0.020044)= 0.020045
The root is x = 0.019958,asin(x)= -0.000040
gnuplot> plot (asin(x)*(x))+sqrt(1-x*x))
                                       ^
         unexpected or unrecognized token: )

gnuplot> plot asin(x)-0.02
gnuplot>
![Screenshot (60)](https://user-images.githubusercontent.com/72393420/104211859-43abc180-543d-11eb-9d01-79c256b9ccdf.png)
