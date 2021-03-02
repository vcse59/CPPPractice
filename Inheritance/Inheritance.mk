##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Inheritance
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/vivek/workspace/CPPPractice/CPPPractice
ProjectPath            :=/home/vivek/workspace/CPPPractice/CPPPractice/Inheritance
IntermediateDirectory  :=../build-$(ConfigurationName)/Inheritance
OutDir                 :=../build-$(ConfigurationName)/Inheritance
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
Objects0=../build-$(ConfigurationName)/Inheritance/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Inheritance/DerivedSampleClass.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Inheritance/BaseSampleClass.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Inheritance/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/Inheritance"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/Inheritance"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/Inheritance/.d:
	@mkdir -p "../build-$(ConfigurationName)/Inheritance"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Inheritance/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Inheritance/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/CPPPractice/Inheritance/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Inheritance/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Inheritance/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Inheritance/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Inheritance/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Inheritance/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/Inheritance/DerivedSampleClass.cpp$(ObjectSuffix): DerivedSampleClass.cpp ../build-$(ConfigurationName)/Inheritance/DerivedSampleClass.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/CPPPractice/Inheritance/DerivedSampleClass.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DerivedSampleClass.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Inheritance/DerivedSampleClass.cpp$(DependSuffix): DerivedSampleClass.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Inheritance/DerivedSampleClass.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Inheritance/DerivedSampleClass.cpp$(DependSuffix) -MM DerivedSampleClass.cpp

../build-$(ConfigurationName)/Inheritance/DerivedSampleClass.cpp$(PreprocessSuffix): DerivedSampleClass.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Inheritance/DerivedSampleClass.cpp$(PreprocessSuffix) DerivedSampleClass.cpp

../build-$(ConfigurationName)/Inheritance/BaseSampleClass.cpp$(ObjectSuffix): BaseSampleClass.cpp ../build-$(ConfigurationName)/Inheritance/BaseSampleClass.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/CPPPractice/Inheritance/BaseSampleClass.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/BaseSampleClass.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Inheritance/BaseSampleClass.cpp$(DependSuffix): BaseSampleClass.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Inheritance/BaseSampleClass.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Inheritance/BaseSampleClass.cpp$(DependSuffix) -MM BaseSampleClass.cpp

../build-$(ConfigurationName)/Inheritance/BaseSampleClass.cpp$(PreprocessSuffix): BaseSampleClass.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Inheritance/BaseSampleClass.cpp$(PreprocessSuffix) BaseSampleClass.cpp


-include ../build-$(ConfigurationName)/Inheritance//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


