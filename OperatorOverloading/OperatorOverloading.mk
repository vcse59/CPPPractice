##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=OperatorOverloading
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/vivek/workspace/CPPPractice/CPPPractice
ProjectPath            :=/home/vivek/workspace/CPPPractice/CPPPractice/OperatorOverloading
IntermediateDirectory  :=../build-$(ConfigurationName)/OperatorOverloading
OutDir                 :=../build-$(ConfigurationName)/OperatorOverloading
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=vivek
Date                   :=01/03/21
CodeLitePath           :=/home/vivek/.codelite
LinkerName             :=/usr/bin/g++-9
SharedObjectLinkerName :=/usr/bin/g++-9 -shared -fPIC
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
OutputFile             :=../build-$(ConfigurationName)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
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
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++-9
CC       := /usr/bin/gcc-9
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/OperatorOverloading/SampleClass.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/OperatorOverloading/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/OperatorOverloading/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/OperatorOverloading"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/OperatorOverloading"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/OperatorOverloading/.d:
	@mkdir -p "../build-$(ConfigurationName)/OperatorOverloading"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/OperatorOverloading/SampleClass.cpp$(ObjectSuffix): SampleClass.cpp ../build-$(ConfigurationName)/OperatorOverloading/SampleClass.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/CPPPractice/OperatorOverloading/SampleClass.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SampleClass.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/OperatorOverloading/SampleClass.cpp$(DependSuffix): SampleClass.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/OperatorOverloading/SampleClass.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/OperatorOverloading/SampleClass.cpp$(DependSuffix) -MM SampleClass.cpp

../build-$(ConfigurationName)/OperatorOverloading/SampleClass.cpp$(PreprocessSuffix): SampleClass.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/OperatorOverloading/SampleClass.cpp$(PreprocessSuffix) SampleClass.cpp

../build-$(ConfigurationName)/OperatorOverloading/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/OperatorOverloading/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/CPPPractice/OperatorOverloading/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/OperatorOverloading/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/OperatorOverloading/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/OperatorOverloading/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/OperatorOverloading/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/OperatorOverloading/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/OperatorOverloading//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


