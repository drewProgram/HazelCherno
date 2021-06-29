# Study notes

## Project Configuration
The project does not supports x86.

This project it's being configurated like this:

### Engine
#### General
- Output Directory: $(SolutionDir)bin\$(Configuration)-$(Platform)\$(ProjectName)\
- Intermediate Directory: $(SolutionDir)bin-int\$(Configuration)-$(Platform)\$(ProjectName)\
- Configuration Type: Dynamic Library (.dll)
- C++ Language Standard: C++ 17

The engine is being created as a library. The output directory it's modificated for organization purposes, as well the intermediate directory, which is where VS stores files like the .obj.

### Game
It has been added as a reference the WizardHazel project.
#### General
- Output Directory: $(SolutionDir)bin\$(Configuration)-$(Platform)\$(ProjectName)\
- Intermediate Directory: $(SolutionDir)bin-int\$(Configuration)-$(Platform)\$(ProjectName)\
- Configuration Type: Executable (.exe)
- C++ Language Standard: C++ 17

