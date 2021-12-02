
# Embedded Home Application fan on and off
# Folder Structure
|FOLDER|DESCRIPTION|
|:-----|:----------|
|`1_Requirements`|Documents detailing requirements|
|`2 Architecture`|Structural and Behavioural UML|
|`3_Implementation`|All the code is written here|
|`4 TestPlanAndOutput`|Documents with test plans and outputs|
|`5_Report`|Generated Report|
|`6 ImagesandVideos`|All the images and program execution video|
|`7_Other`|other information|
 ## Research
Automation is a necessity in our day to day life because it not only seeks to improve the quality of life for humans at both home and work.
* It allows the distribution of both quality products and services to be made available at faster rates, reduces down time and human error.
* This days the technology is developing at very high speed innovation and advancements is their in all the sectors. 
* The Temperature measurement system for Bus is capable of maintaining the proper temperature inside.
* The main aim of this project is to sense the temperature inside the  HOME using temperature sensor (LM 35) and it will give the signal to fan which is present above the    passenger's seat which will get switched ONN and OFF according to requirement .

* The fan will get on and off based on the temperature inside the HOME at that moment .for Example:- if the temperature is high inside the HOME so the fan will switch on and if the temperature is low so fan will switch off Based on this our controller will onn and off the fan accordingly .
*  The temperature sesnor (LM35) will sense the heat inside the bus and a LCD display will show the temperature. In our project we have used ATmega328 microcontroller along with temperature sensor, Push button, LED 

# Features
* The System will sense the temperature and switch the fan ONN and Off Accordingly.
* Low cost and robust system.
* Modular Approach.


## SWOT- Strengths, and Weakness, Opportunities Threats
 ### Strengths
User Friendly and easy to use.
Easy to alter the temperature inside the bus.
Modular Approach, Low cost and Robust system.
### Weakness
Speed contorl is independent of individual perference it will either on or off.
### Opportunities
Save energy by switching off in low temperature and It is a modern way of approach.
### Threat
Micro controller is the heart of the circuit, if controller is damaged the whole system will be interrupted.
## 4W's and 1'H
### WHO :-
Any user who is travelling in the bus can use this system.

### WHAT :-
The project main aim is to make a robust system which can automatically switch on and off the fan according to requirement.

### WHEN :-
To improve the quality of life for humans while travelling we can use this system.

### WHERE:-
As in the super coach buses their are seperated compatment for every passenger's so according to their need the system can be deployed.

### HOW :- 
By developing a embedded system which is user friendly and can be implemented without difficulty.

## Detail requirements
 ## High Level Requirements
High Level Requirements|	Description	|Category|	Status|
|-----------------------|:---------:|:---------:|:-------------|
HLR1 |	User shall able to see the present Temperature	|Technical|	Implemented|
HLR2	|Fan should automatically swtich off when temperature is low|	Technical	|Implemented|
HLR3	|Fan should automatically swtich On when temperature is high|	Technical|	Implemented|
## Low Level Requirements
Low Level Requirements|	Description|	Category|	Status|
|----------------------|:---------:|:--------:|:-----:|
LLR1	|Temperature should be dispaly on LCD Screen|	Technical|	Implemented|

## Test Plans:-
Test ID|	Description|	Input|	Output|	Status|
|-------:|:----------:|:-----:|:------:|:------:|
|01	|Is person in room|	push button=1	|push button=1	|PASS|
|02	|Is person in room or not|	push button=0|	push button=0|	PASS|
|03	|Temperature low	|Temp=0	|Fan=Off|	PASS|
|04|	Temperature High|	Temp=30	|Fan=On	|PASS|
|05|	LED ON|	Button= && Fan=1|	LED=1|	PASS|
|06 |LED OFF|	Button=0 && Fan=0	|LED=0|	PASS|
# simulation results
<img width="511" alt="Output" src="https://user-images.githubusercontent.com/94446387/144372898-b9bd67dc-6e94-41ce-8f38-0bcb3914844d.png">

![output1](https://user-images.githubusercontent.com/94446387/144372438-9a23f36c-1e83-4fa7-afa8-efc6b04130be.png)

<img width="635" alt="project output" src="https://user-images.githubusercontent.com/94446387/144372505-5cb6efd3-b988-4d5c-b9f3-4e1d7cd6c0d7.png">


## Bill of Materials:

* Led-4 : Led   
* Potentiometer-2 : Potentiometer 1 kΩ
* Push-5 : Push   
* Push-6 : Push   
* Resistor-3 : Resistor 100 Ω
* atmega328-1 : atmega328   
