<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Student Management System Project Report</title>
</head>
<body>
    <h1>OBJECT ORIENTED PROGRAMMING PROJECT REPORT</h1>
    <h2>Our Aim:</h2>
    <p>Creating a Student Management System (SMS) with Object-Oriented Programming (OOP) is a great approach to organizing student information and school tasks. OOP will help you build a system where you can easily add new features or make changes without affecting the rest of the system.</p>
    <p>This system will make it easier for students to get their information and for schools to keep track of everything. It's all about making things simpler and more efficient for everyone involved.</p>
    <h2>Methodology:</h2>
    <p>In our project, we have applied the key principles and structures of C++ Object-Oriented Programming along with the basics of Programming Fundamentals taught in our course. We have incorporated concepts such as aggregation, composition, and association. Additionally, we have utilized dynamic memory allocation and inheritance. To ensure our code is organized and easy to understand, we have embraced encapsulation by separating our code into different files.</p>
    <h2>Challenges Faced:</h2>
    <p>We encountered a significant challenge known as circular dependency. To resolve this, we revised our project's structure. Another hurdle was managing code across different files and then combining them effectively. With some effort, we overcame this obstacle and our project was successfully completed with organized and modular code.</p>
    <h2>Main Features:</h2>
    <p>The project successfully meets all the specified requirements and goes beyond by introducing additional functionalities. The system is structured around 14 class entities with five principal classes: Student, Courses, Department, Faculty, and Club. Supplementary classes such as Date and Admin enhance the system's capabilities.</p>
    <p>Data management is efficiently handled through separate text or CSV files for each class. This design simplifies data handling and streamlines the process of information retrieval.</p>
    <h2>Testing:</h2>
    <p>Each module is tested multiple times using different data and delivers its functionality accordingly.</p>
    <h2>Improvements and Future Work:</h2>
    <p>The project is designed to be flexible and adaptable. Implementing a database system could improve data management and storage. Developing an HTML-based website for the system's interface would provide a user-friendly and accessible platform for users.</p>
    <h2>Classes UML Diagram:</h2>
    <p>The relationship among different classes is shown below:</p>
    <!-- UML Diagram can be added here as an image -->
    <h2>Description of Classes:</h2>
    <p>There are a total of 14 classes among them there are 5 core classes: Student, Course, Club, Department, and Faculty.</p>
    <h3>Student Class</h3>
    <p>The Student class manages individual student records. It stores information such as student ID, name, email, and phone number. It tracks enrolled courses, submitted assignments, and club memberships.</p>
    <h3>Course Class</h3>
    <p>The Course class manages details related to a particular course. It includes course ID, name, credits, and instructor information. It maintains vectors of enrolled students and assignments.</p>
    <h3>Department Class</h3>
    <p>The Department class manages information related to an academic department. It includes department ID, name, and head of the department. It maintains vectors of courses and faculty members associated with the department.</p>
    <h3>Club Class</h3>
    <p>The Club class manages information related to a student club. It includes club ID, name, and description. It maintains vectors of members and events organized by the club.</p>
    <h3>Faculty Class</h3>
    <p>The Faculty class manages information related to a faculty member. It includes faculty ID, name, email, and phone number. It maintains vectors of courses taught and students supervised by the faculty.</p>
    <h3>Other Classes</h3>
    <p>Other classes include Assignment/Exam, Enrollment, Faculty Course Allocation, Grade, Library Resource, Attendance, Event, Project/Research, and Feedback. Each class manages specific aspects of the university system and provides necessary functionalities.</p>
</body>
</html>
