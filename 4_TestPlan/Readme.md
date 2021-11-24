## High Level Test Plan:
| ID | Description | Exp   I/P | Exp O/P | Actual O/P| Types of Test |
|-------|--------------|------|---|---------|----------|
|HR01|Charge The EV|230 volts| 230 volts ± 5 % | 230 Volts|Technical|
|HR02|Charging Time|For 1 rupee 10 seconds|10 Seconds|10.13 Seconds|Required Base|
|HR03|Display The Output| -- | Display Time |SUCCESS|Requried Base|
|HR04|Connectors|--|--|--|Technical|
## Low level Test plan:
| ID | Description | Exp   I/P | Exp O/P | Actual O/P| Types of Test |
|-------|--------------|------|---|---------|----------|
|LR01|Identify the Energy source to charge EV|Either Wind,Solar, from Transmission lines |---|--|Technical|
|LR02|Coin Sensor|--|--|SUCCESS|Technical|
|LR03|Microcontroller|--|----|SUCCESS|Technical|
|LR04|Relay|--|---|SUCCESS|Technical|
|LR05|Charging time will change base on coins|--|---|SUCCESS|Requried Base|
|LR06|LCD display used to display actions/status|---|---|SUCCESS|Requried Base|
|LR07|Universal Connectors is used for E-Bike another one for E-Cars,E-Buses |--|---|--|Technical|
