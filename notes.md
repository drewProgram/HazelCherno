# Study notes

## Dynamic Link Library (DLL)
A DLL  exports variables, functions, and resources by name. A client app imports the names to use those variables, functions, and resources. Unlike a statically linked library, Windows connects the imports in your app to the exports in a DLL at load time or at run time, instead of connecting them at link time. Windows requires extra information that isn't part of the standard C++ compilation model to make these connections. The MSVC compiler implements some Microsoft-specific extentions to C++ to provide this extra information (e.g. `__declspec()`).

### __declspec(dllexport/dllimport)
The extended attribute syntax for specifying storage-class information uses the `declspec` keyword, which specifies that an instance of a given type is to be stored with a Microsoft-specific storage-class attribute. Example of other storage-class modifiers include the static and extern keywords. However, these keywords are part of the ANSI specification of the C and C++ lagnauges, and as such are not covered by extended attribute syntax. The extended attribute syntax simplifies and standardizes Microsoft-specific extensions to the C and C++ languages.

### Storage classes
A storage class in the context of C++ variable declarations is a type specifier that governs the lifetime, linkage, and memory location of objects. A given object can have only one storage class. Variables defined within a block have automatic storage unless otherwise specified using the `extern`, `static`, or `thread_local` specifiers. Automatic objects and variables have no linkage; they are not visible to code outside the block. Memory is allocated for them automatically when execution enters the block and de-allocated when the block is exited.

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

#### Preprocessor
- Definitions: WHZ_PLATFORM_WINDOWS;WHZ_BUILD_DLL;

### Game
It has been added as a reference the WizardHazel project.
#### General
- Output Directory: $(SolutionDir)bin\$(Configuration)-$(Platform)\$(ProjectName)\
- Intermediate Directory: $(SolutionDir)bin-int\$(Configuration)-$(Platform)\$(ProjectName)\
- Configuration Type: Executable (.exe)
- C++ Language Standard: C++ 17

### Preprocessor
- Definitions: WHZ_PLATFORM_WINDOWS;
