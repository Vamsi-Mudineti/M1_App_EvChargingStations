# Introduction 
Ev Charging station is nothing but a charging station, also called an EV charger or electric vehicle supply equipment (EVSE), is a piece of equipment that supplies electrical power for charging plug-in electric vehicles (including hybrids, neighborhood electric vehicles, trucks, buses, and others).
Electrical energy is supplied to EV's by

i) Plug-in Electrical vechicle


![image](https://upload.wikimedia.org/wikipedia/commons/thumb/7/72/Electric_car_charging_%28ACEA_terminology%29.svg/1920px-Electric_car_charging_%28ACEA_terminology%29.svg.png)


ii) Battery Swaping Technique


![image](https://img.etimg.com/thumb/width-1200,height-900,imgsize-178997,resizemode-1,msid-79874332/industry/auto/auto-news/sun-mobility-aims-to-set-up-100-battery-swapping-stations-in-bengaluru-by-2021-end.jpg)


iii) Wireless parking charge


![image](https://upload.wikimedia.org/wikipedia/commons/thumb/f/fc/Electric_car_wireless_parking_charge_closeup.jpg/1920px-Electric_car_wireless_parking_charge_closeup.jpg)



## My idea is to implement a charging station, if we insert a coin accroding to that EV's will charge up to time. 


# Research
Present if we observe the current situation pertol price is high, so every one is look at EV's.recently, Ola electricals lanuch ebikes S1 and S1 pro registration hits 500 scooter per second.EV's are also occupies 30% of present market shares.

![image](https://www.91-cdn.com/hub/wp-content/uploads/2021/11/electric-car-sales-india-fy-2021-2022.jpg)

Tata Nexon is in top position in Ev car Market,And also Every companies is concerated on EV's Charging Stations.
recently HeroelecTRic is tried up with CHARGE companie and trying to estalish the Ev charging station More than 80 cities, present there are working in banglore citie.

![image](https://img1.wsimg.com/isteam/ip/33245bb6-f268-41f8-a23c-2678092e05a0/WhatsApp%20Image%202020-01-18%20at%2011.11.46%20AM.jpeg)

## Cost and Features and Timeline
Time VS Ev Development

![image ](https://www.researchgate.net/publication/345392256/figure/fig1/AS:1014645091491840@1618921649434/Historical-timeline-of-the-development-of-EV-HEV.png)

Comparsion of EV's And SI Engines

![image](https://i2.wp.com/evduniya.com/wp-content/uploads/2020/04/Example-of-Cost-of-Running-an-Electric-Vehicle-in-India.png?w=800&ssl=1)

### Imporant factor that effecyt the cost of e bike

![image](https://image.cnbcfm.com/api/v1/image/106315306-157772330676720191230_timeline_of_market_development.png?v=1577723332&w=720&h=405)

# Defining Our System
Ev charging station is supplies energy to EV's, Here we can generate our own energy either wind turbines or solar pannels or connected to transmission line.and  Energy is give to charge EV's.
Note: if we connected to tranmission lines, we neeed to use rectifier to convert AC to DC supply(120V DC). if we use use solar or wind energy sources we need to used regulator to obtaine a constant DC Output.

In My system Coin sensor,Microcontroller,Realy,LCD display are used.
As soon Coin Sensor detects the coin it sends a pulse to the Microcontroller. The Microcontroller turns ON the relay(Electromechanical Switch) to provide 230V,50Hz signal to the charging socket and the user can charge his/her mobile phone from the socket. The LCD (16×2) is used to display the time duration for which the user can charge his/her mobile phone.
If we insert a coin accroding to that EV's will charge up to time
For example:
if we insert 1Rs coin it will charge up to 1 mintue.30 seconds, -> 2 rs coin it charge up to 3 mintues,if we 5 rs coin  it will charge up to 10 mintues. like that we implement.
![image](https://resources.altium.com/sites/default/files/inline-images/migrate/aHViPTY1NjQ2JmNtZD1pdGVtZWRpdG9yaW1hZ2UmZmlsZW5hbWU9aXRlbWVkaXRvcmltYWdlXzVhNDZiYzM2YTI4ZTcuanBnJnZlcnNpb249MDAwMCZzaWc9MGU2ZTg5ZmZkYWVmMWYwODc2MmYwNzUzZjI2YmUyM2E%25253D)

# SWOT ANALYSIS

![image](https://github.com/Vamsi-Mudineti/M1_app_Wireless-Waterlevel-Controller/blob/main/swot.png?raw=true)

# 4W's and 1'H
Who:
Who are the users/applications that are allowed to use the EV charging station,all EV's are charged it is automated so  we didn't want any satff here. 

What:
What are the things involved in EV's Charging Station? Are the things actual physical devices or virtual entities? Are these things used for sensing or actuation? What are the capabilities of these things? What is the lifetime of these things? What is the phenomenon of interest measured by these things? What are the conditions under which these things must collect data? Should the data be collected under certain circumstances only? The answer to ‘what’ of an EV's application requires concepts to identify the data sources and their context (e.g., the mobility of the sensor, the activity being performed, whether measurements were taken by devices automatically or was there some human intervention).

When:
This gives us information about the time for implementating the idea. I think this is the best time to implement.

Where:
Where are the things located? Is the location a specific geo-coordinate, a spatial region, or a point of interest (a landmark)? Is the location absolute or relative (w.r.t. a testbed)?
This describes the physical place where the particular equipment is placed.My idea is to place near Petrol bunks,Malls, Parking lots.

How:
How do users interact with things/Equipment? How are new things deployed within EV Charging station? How are things safely exposed to users? 

# Detail requirements
## High Level Requirements:
| ID | Description | Category | Status |
|-------|--------------|---------|-----------|
|HR01|Maintaining Constant Voltage,Current|Requried Based|IMPLEMENTED|
|HR02|Speed Charging|Requried Based|IMPLEMENTED|
|HR03|Contionus Power Supply| Requried Based| IMPLEMENTED|
|HR04|Connectors|Required Based| IMPLEMENTED|
## Low level Requirements:
| ID | Description | HLR ID | Status |
|-------|--------------|---------|-----------|
|LR01|Maintaining Constant Voltage 230 Vlots for Single Phase,415 vlots for 3 phase|HR01|IMPLEMENTED|
|LR02|Maintaing Constant current of 12 amps|HR01|IMPLEMENTED|
|LR03|Time required for charging is must less|HR02| IMPLEMENTED|
|LR04|Maintane a power backup facility| Hr03| IMPLEMENTED|
|LR04|Unviersal Connectors is used for Ebike another one for Ecars/EBuses |HR04| IMPLEMENTED|
