# Restaurant Billing System
## Introduction

The project is "Restaurant Billing System" software for monitoring and controlling the transactions in a Restaurant.

The project Restaurant Billing System gives us the facility to manage the Restaurants billing system. This application is helpful for staff or admin for billing of food order and managing customers details. This application is access by only staff and registered customers. Members can't access it directly.

## Features
List of features which are in provided in this application —

*	 Classify the customers Name wise.
*	 Easy way to order food.
*	 Easy way to add and delete items.
*  It has signup and Login to the customers and Admin.
*  Generating a bill.
*  Easy Insertion, Deletion, Updation to database module.

## Requirements
*  Laptop or PC
*  MS Visual Studio Code
*  Build tools 
*  Software setup for windows, Linux and WSL

## 4W's and 1'H
### Why
The main objective of this project is to provide a friendly environment to maintain the details of restaurants and library members. The main purpose of this project is replace the manually work.
### Where
This project can be implemented in restaurants for generating bills.
### What
It is Restaurant food ordering and billing system.
### When
It is used to simplify the billing at restaurant for easy printing of bills.

### How
This project is written in basic C programming language for easy understanding and executed in Visual Studio Code.

## SWOT analysis
### Strengths
*	Automation —The application automates each and every activity of the manual system and increases its throughput. Thus the response time of the system is very less and it works very fast.
*	Accuracy — The application provides the user a quick response with very accurate information regarding the user etc. any details or system in an accurate manner, as when required.
*	User Friendly — The application Restaurant Billing System has a very user friendly interface. Thus the users will full very easy to work on it. The application provides accuracy along with a pleasant interface. Make the present manual system more interactive, speedy and user friendly.
*	Availability — The all transaction of restaurant stored permanently in the database admin can see the data in the availability of any information, whatever needed.
*	Maintain Cost — Reduce the cost of maintenance. It is standalone application so no required of cost for maintain it.
### Weakness
* Poor user interface design as only C Language is used.
### Opportunities
* To store billing data for long time.
### Threats
* Other langauge applications are available easily in market.
## High level Requirements
|S.No|Description|Status(Implemented/Future)|
| ---- | ---- | ----|
|HLR1| add customer name|  Implemented|
|HLR2| selection of  food items | Implemented|
|HLR3| addition and  deletion of food items| Implemented|
|HLR4| calculation of  Total bill| Implemented|


## Low Level Requirements 
|S.No|Description|Status(Implemented/Future)|
| ---- | ---- | ----|
|LLR1| to access stored data| Implemented|
|LLR2| to modify meals data| Implemented|

## Architecture
### Structure Diagram
![Untitled Workspace](https://user-images.githubusercontent.com/94158848/143039826-93ac3923-539f-4009-beea-88fc985d551a.png)


### Behaviour Diagram
![Behaviour_diagram (6)](https://user-images.githubusercontent.com/94158848/143039725-21df271d-07d5-47e3-a9cb-9cbf638e7ac5.png)

# Implementation
|Folder|Description|
|---|---|
|`Inc`|All header files |
|`src`| Main Source code |
|`test`| All source code  for testing purpose|
|`unity`| All unity test code |


# Test Plan
|  Test ID | Description  | Expected Input  | Expected Output  | Actual Output  | Type of test |
|---|---|---|---|---|---|
| TID_01  | Signup  | Username: ABC<br />Password: abc@123| 1  |1| Requirement based  |
| TID_02  | Login  | Username: ABC<br />Password: abc@123| 1  |1| Requirement based|
| TID_03  | Login  | Username: ABC<br />Password: abc123| -1  |-1| Scenario based  |
| TID_04  | Adding Meals  |Food Code: 1.01<br />Food Name: Gobi Manchurian<br />Quantity: 1<br />Price: 100| SUCCESS  |SUCCESS| Requirement based  |
| TID_05  | Modifying Meals  |Food Code: 1.01<br />Food Name: Gajar ka Halwa<br />Quantity: 1<br />Price: 200| SUCCESS  |SUCCESS| Requirement based   |
| TID_06 | View Menu  | Structure Address| SUCCESS  |SUCCESS| Requirement based    |
| TID_07  | Order Food  |Structure Address<br />Food Code<br />Quantity| SUCCESS  |SUCCESS| Requirement based    |
| TID_08 | View Previous Orders  | Structure address| SUCCESS  |SUCCESS|  Requirement based    |
| TID_09 | Total Bill  |Food Code: 1.01<br />Quantity: 2 | 400  |400|  Requirement based    |










