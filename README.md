# CodeMaster Challenges

## Table of Contents
- [What is this repo?](#what-is-this-repo)
- [Who is this repo for?](#who-is-this-repo-for)
- [Project Structure](#project-structure)
- [How to use?](#how-to-use)
  - [Clone the repo](#clone-the-repo)
  - [How to navigate to a challenge?](#how-to-navigate-to-a-challenge)
  - [How to solve a challenge?](#how-to-solve-a-challenge)
  - [How to check a challenge's solution](#how-to-check-the-solution-of-a-challenge)
- [Contributing](#contributing)
- [Contact](#contact)

## What is this repo?
This repo is a code environment where you can solve code challenges and test your solutions using your favorite tools like VSCode, Github Copilot or any other tool you want, also you can customize the environment to your needs and preferences like adding new challenges, new programming languages, new tests, etc.  

This repo is intended to be collaborative, so feel free to contribute by adding new challenges, new programming languages, new tests, etc.

By the way, challenges variety may be limited at early stages, but we will be adding more challenges over time.


## Who is this repo for?
This repo is for anyone who wants to practice coding challenges and improve their problem-solving skills.


## Project Structure
- project/  
  - array/  
    - challenge_name/  
      - DESCRIPTION.md  
        - cpp/  
          - build/
          - INSTRUCTIONS.md  
          - CMakeLists.txt
          - solution.hpp
          - solution.cpp  
          - tests.cpp
        - java/
          - build/
          - INSTRUCTIONS.md  
          - solution.java  
          - tests.java
    - other_challenge_name/
      - DESCRIPTION.md
      - etc ...
    - etc ...
  - string  
      - etc...
  - etc ...

## How to use?
### Clone the repo
```bash
git clone https://github.com/RichardCG75/CodeMasterChallenges.git
```
### How to navigate to a challenge?
Please check the [Project Structure](#project-structure) above to understand how the challenges are organized.  
1. Choose a challenge type (e.g. array, string, tree, etc.) and navigate to the challenge folder. 
2. Once you are in the challenge folder, you will see a list of challenges. Choose a challenge and navigate to its folder (e.g. sum-of-two-integers).  


**Note:** Directories starting with underscore `_` are shared directories used by different challenges, for example `_include` directory is used in C++ to store include files. So, you can ignore this directories.

**Example:**
```bash
cd CodeMasterChallenges/array/sort-an-array
```

### How to solve a challenge?
1. Read the `DESCRIPTION.md` file to understand the problem.
2. Choose your favorite programming language (e.g. cpp, java, python, etc.) and navigate to its folder.
3. Write your solution in the `solution` file.
4. Read the `INSTRUCTIONS.md` file to understand how to run the tests.
5. Run the tests to check if your solution is correct.  

**Example:**
```bash
cd cpp
code solution.cpp
... solve the problem ...
cd build
cmake ..
make
./RunTests
```

### How to check the solution of a challenge
1. Change to the git branch `solutions`.
2. Navigate to the challenge folder.
3. Choose your favorite programming language (e.g. cpp, java, python, etc.) and navigate to its folder.
4. Read the `solution` file to check the solution.

## Contributing
Everyone is welcome to contribute to this project. You can contribute by adding new challenges, new programming languages, new tests, enhancing the project structure, md files, etc.

## Contact
If you have any questions or suggestions, please feel free to contact me at
**Github**: [RichardCG75](https://github.com/RichardCG75)  
**Email**: ricardo.chaconr6@gmail.com  
**LinkedIn**: [Ricardo Chacon](https://www.linkedin.com/in/ricardo-chacon-garcia/)  

---

Thank you for visiting this repo!  
```c
printf("Happy coding! :)");
```