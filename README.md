# Skilled Construction Man Power. Billing & Resource Tracking with Precision.
## Specifications & System Requirements Document

The scope of this project will include the development of a web based and/or iOS application that is designed to manage the day to day man power tracking and production reporting of a skilled labor company dedicated to providing skilled labor and man power to the construction industry. The application will be designed to keep track of the following information:

* Should have functionality:
	1. Employee information
	2. Hours worked
	3. Availability
	4. Payroll due

In turn the system will allow the accounting department to print out reports that will allow the business to bill the client based on actual hours reported and worked. There will be a field interface that will allow field management to produce daily reports and to quantify any pertinent quality control issues. The field interface screen will allow the field staff to enter in the names of each employee, the tasks each employee is assigned to and how much production or work has been put in place by the employee, and it will allow the field staff to enter in TIME IN & TIME OUT data to ensure the client is paying for the hours they precisely define.

The customer interface screen will display all employees available for work according to skill & skill level. The employee display screen will print the employees picture to the screen in order to allow for the client selection of each employee. Each employee display card will output all tools that the employee comes and works with, it will displaty a 5-star rating system as entered by all previous clients to include any reviews and testimonials, it will display the employees weekly availability and it will allow the user to select the employee based on that printed availability. The user will be shown the hourly rate for each employee and the customer will confirm the request for each employee in order to authorize the billing of each credit card at the completion of each week for the hours that have been spent workinng by the employee.

### Outputs

#### Accounting Dashboard
- [] Aggregated employee Time Sheets displayed by project, customer, and payroll period
- [] Total Man Hours per project, customer, and payroll period
- [] Total amount billable per project, customer, and payroll period
- [] Total amount payable per employee, by project, customer, payroll period
- [] Total quantifiable Production per project, customer, and payroll period
- [] Display reporting Queue

#### Field Manager Dashboard
- [] Display Menu to enter Daily Reports or Employee Time In/Time Out
- [] Display Daily Reporting by project, customer, and date
- [] Display employee information & input/qualification screen
- [] Display employee allocation and availability by project, customer, and payroll period
- [] Display tasks to accomplish & quantify by project, customer, and payroll period
- [] Display link to Material Requisition Form

#### Engineering Dashboard - (Should Have)
- [] Display documentation queue (RFI, COR, PayApp, Transmittal, etc)
- [] Display estimating platform
- [] Display Scheduling platform

#### Admin Dashboard
- [] Display resource input/qualification screen (Mgr/Emp/Client input)
- [] Display total AP/AR by project, customer, and payroll period
- [] Display task/schedule creation menu & Resource alloc display
- [] Display employee availability calendar
- [] Display permissions & security settings
- [] Display reporting Queue
- [] Display list of current Material Requisition Forms to approve

#### Employee Dashboard
- [] Display Man Hours per project, customer, and payroll period
- [] Display amount payable per employee, by project, customer, payroll period
- [] Display employee allocation and availability by project, customer, and payroll period
- [] Display tasks to accomplish & quantify by project, customer, and payroll period
- [] Display employee applicattion
- [] Display employee training
- [] Display emplyee skill level and "skillQual" gamification score

#### Client/Contractor Dashboard
- [] Display "Baseball Card" style list of available employees
- [] Display current Accounts Payable per project, customer, and payroll perirod
- [] Display Available payment methods
- [] Display current projects ongoing
- [] Display total Man Power resources allocated current & historical
- [] Display tasks to allocate and complete
- [] Display quantified work in place by project, customer, and payroll period
- [] Display Rating/Review/Testimonial Entry screen
- [] Display list of current Material Requisition Forms to approve

#### Safety & Project Assurance Dashboard

#### Training & QA/QC Dashboard

#### Business Development Dashboard

#### Human Resources Dashboard

### Inputs

#### Accounting Dashboard
- [] Accounting personel must log in to access Accounting Dashboard
- [] User must select desired reporting queue from drop down by:
	* Amount Billable (default filter by customer ONLY)
	* Amount payable (default filter by employee ONLY)
	* Quantifiable Production (default filter by project and by employee
- [] User must select filter values on drop down menu by project, customer, and payroll period
- [] User must enter values to be paid for materials by project, customer, and payroll period
- [] User must approve values to be paid against AP
- [] User must enter payments received against AR

#### Field Manager Dashboard
- [] Field Staff must log in to access field manager dashboard
- [] User must select desired action to complete:
	* Display Daily Reports
		- [] User must enter data fields as per standard 'Daily Construction Report' form
		- [] User can override TIME IN/TIME OUT data by employee
	* Enter Employee Information
		- [] User must validate employee qualifications & performance review as per 'Performance Review' form
		- [] User must verify daily manpower tickets and approve hours to be sent to Accounting
		- [] User must review employee
	* Display Task Menu
		- [] User must enter tasks to accomplish by project
			*Tasks will include input required:
				1. Description
				2. Materials Needed
				3. Manpower needed with duration
				4. Task Priority
				5. Task Location:
					*Floor
					*Area
					*Division
				6. Foreman Responsible for task
				7. Inspection Requirements
				8. Tool Requirements
				9. Enter Production Quantifier Values
		- [] User Must associate each task with an estimate
	* Display Resource Allocation
		- [] User must allocate required man power resource to each task
		- [] User must enter material purchase data and allocation for each task:
				1. Material purchased & associated to task
				2. Material Costs
				3. Vendor
				4. Scheduled Delivery/Received Dates

#### Engineering Dashboard
- [] This feature is a MAYBE functionality

#### Admin Dashboard
- [] Admin User must login to access Admin Dashboard
- [] User must select desired actions to complete:
	* Enter New Resource Data
		- [] Enter NEW Employee/Customer/Project Data
			1. Enter data as per forms:
				* Employee Application Form
				* New Customer Form
				* New Project Form
	* Display AP/AR
		- [] Select AP or AR
			1. Inside Menu select report by Employee/Customer/Project/Vendor
	* Create Task &/or Allocate Resources
		- [] Enter New Task or Allocate Resource to task
			1. Inside menu select task and add employees to task
			2. Only employees with availability can be entered
	* Create Schedules & Set Availability
		- [] Maybe feature
			1. Maybe functionality
			2. Calendar & Schedule to be set based off tasks allocated
	* Preferences & Settings
		- [] Select Permissions
			1. Set permissions for each user type
				* Admin Roles
				* Employees
				* Field Mgr
				* Accounting
				* Engineering
				* Clients
				* Safety
				* Human Resources
				* Sales
				* Training & QA/QC
			2. Set account email
			3. Change Password
			4. Customize GUI settings
			5. Assign User Roles

#### Employee Dashboard

#### Client/Contractor Dashboard

#### Safety & Project Assurance Dashboard

#### Training & QA/QC Dashboard

#### Business Development Dashboard

#### Human Resources Dashboard

### Processes

### Performance

### Controls