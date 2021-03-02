##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=CopyConstructor
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/vivek/workspace/CPPPractice/CPPPractice
ProjectPath            :=/home/vivek/workspace/CPPPractice/CPPPractice/CopyConstructor
IntermediateDirectory  :=../build-$(ConfigurationName)/CopyConstructor
OutDir                 :=../build-$(ConfigurationName)/CopyConstructor
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
Objects0=../build-$(ConfigurationName)/CopyConstructor/sampleClass.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/CopyConstructor/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/CopyConstructor/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/CopyConstructor"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/CopyConstructor"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/CopyConstructor/.d:
	@mkdir -p "../build-$(ConfigurationName)/CopyConstructor"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/CopyConstructor/sampleClass.cpp$(ObjectSuffix): sampleClass.cpp ../build-$(ConfigurationName)/CopyConstructor/sampleClass.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/CPPPractice/CopyConstructor/sampleClass.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sampleClass.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/CopyConstructor/sampleClass.cpp$(DependSuffix): sampleClass.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/CopyConstructor/sampleClass.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/CopyConstructor/sampleClass.cpp$(DependSuffix) -MM sampleClass.cpp

../build-$(ConfigurationName)/CopyConstructor/sampleClass.cpp$(PreprocessSuffix): sampleClass.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/CopyConstructor/sampleClass.cpp$(PreprocessSuffix) sampleClass.cpp

../build-$(ConfigurationName)/CopyConstructor/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/CopyConstructor/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/CPPPractice/CopyConstructor/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/CopyConstructor/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/CopyConstructor/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/CopyConstructor/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/CopyConstructor/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/CopyConstructor/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/CopyConstructor//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


