# CodeMaster Challenges
This repo is an environment where you can solve code challenges and test your solutions using your favorite tools like VSCode, Github Copilot or any other tool you want, also you can customize the environment to your needs and preferences like adding new challenges, new programming languages, new tests, etc.

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

### To check the solution of a challenge
1. Change to the git branch `solutions`.
2. Navigate to the challenge folder.
3. Choose your favorite programming language (e.g. cpp, java, python, etc.) and navigate to its folder.
4. Read the `solution` file to check the solution.
