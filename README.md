# Overview

This software is a simple C++ user authentication program. What this program does is first asks a user if they have an account. After finding out if they have an account, if they have one, the program will ask for their credentials and then log them in. If the user does not have an account they will be prompted for the information to create said account, and after entering said information the account will be created and registered.

My main purpose in writing this software was to learn how the major conventions of C++ and how to work with files in C++. This project has helped me learn and get comfortable in a new language and IDE. This project is by no means incredibly advanced, however, it did give me the opportunity to learn foundational C++.

[Software Demo Video](https://youtu.be/ywQxgJQFHIw)

# Development Environment

Tools
- Visual Studio

Languages
- C++

# Useful Websites

- [youtube.com](https://www.youtube.com/watch?v=qWPlRubVQ38)
- [w3schools.com](https://www.w3schools.com/cpp/default.asp)
- [stackoverflow.com](https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c)
- [learningaboutelectronics.com](earningaboutelectronics.com/Articles/How-to-append-to-a-file-in-C++.php#:~:text=In%20order%20for%20us%20to,explain%20in%20the%20next%20paragraph.&text=With%20the%20full%20line%2C%20ofstream,append%20contents%20to%20the%20file.)
- [cplusplus.com](https://cplusplus.com/reference/list/list/list/)


# Future Work

- One initial thing that I want to work on with this project is likely to be obvious, but I would like to expand it past just user authentication. In its current state this program is an acceptable entry level project into C++, however, besides account verification and creation, this program doesn't actually do anything. My original plan with this project was to eventually develop it into a grade system where users could store class and grade information and then recieve some sort of summary output. In the future I could see myself completing that idea in full.
- Something about this project that I would really like to change is the orginization and overall structure of the code. As stated previously, this project was meant for me to learn basic C++ fundamentals and I feel that I have achieved that, however, I do not feel I wrote particulary nice code that could be excepted as following all conventions.
- One problem with learning a new language that I have found is that you almost never know the easiest way to do something and will often result to the first answer. when it came to parsing my text file in this assignment that is exactly what I did. I could not find great ways to parse string online, so I grabbed the first solution that worked for me and stuck with it. I believe this not only led to efficiency issues, but also redundancy in my code. I would like to fix this in the future by encapuslating the text parser within a function that should allow for less repetition and hopefully no efficiency issues.
