##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Codelite
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :="G:/Contest/Bootcamp/Bootcamp 8 Weekly Contest/Practice/Codelite/Codelite"
ProjectPath            :="G:/Contest/Bootcamp/Bootcamp 8 Weekly Contest/Practice/Codelite/Codelite/Codelite"
IntermediateDirectory  :=/Contest/Bootcamp/Bootcamp\ 8\ Weekly\ Contest/Practice/Codelite/Codelite"/build-$(ConfigurationName)//Contest/Bootcamp/Bootcamp\ 8\ Weekly\ Contest/Practice/Codelite/Codelite/Codelite
OutDir                 :=/Contest/Bootcamp/Bootcamp\ 8\ Weekly\ Contest/Practice/Codelite/Codelite"/build-$(ConfigurationName)//Contest/Bootcamp/Bootcamp\ 8\ Weekly\ Contest/Practice/Codelite/Codelite/Codelite
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Dell
Date                   :=24/11/2020
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :="C:/Program Files/CodeBlocks/MinGW/bin/g++.exe"
SharedObjectLinkerName :="C:/Program Files/CodeBlocks/MinGW/bin/g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files/CodeBlocks/MinGW/bin/windres.exe"
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Program Files/CodeBlocks/MinGW/bin/ar.exe" rcu
CXX      := "C:/Program Files/CodeBlocks/MinGW/bin/g++.exe"
CC       := "C:/Program Files/CodeBlocks/MinGW/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files/CodeBlocks/MinGW/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/Codelite/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Codelite/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Codelite" mkdir "..\build-$(ConfigurationName)\Codelite"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Codelite" mkdir "..\build-$(ConfigurationName)\Codelite"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Codelite/.d:
	@if not exist "..\build-$(ConfigurationName)\Codelite" mkdir "..\build-$(ConfigurationName)\Codelite"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Codelite/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Codelite/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "G:/Contest/Bootcamp/Bootcamp 8 Weekly Contest/Practice/Codelite/Codelite/Codelite/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Codelite/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Codelite/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Codelite/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Codelite/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Codelite/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/Codelite//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


