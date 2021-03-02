##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Templates
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/vivek/workspace/CPPPractice/CPPPractice
ProjectPath            :=/home/vivek/workspace/CPPPractice/CPPPractice/Templates
IntermediateDirectory  :=../build-$(ConfigurationName)/Templates
OutDir                 :=../build-$(ConfigurationName)/Templates
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
Objects0=../build-$(ConfigurationName)/Templates/sampleClassTemplate-impl.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Templates/functionTemplates.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Templates/functionTemplates-impl.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Templates/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Templates/sampleClassTemplate.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Templates/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/Templates"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/Templates"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/Templates/.d:
	@mkdir -p "../build-$(ConfigurationName)/Templates"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Templates/sampleClassTemplate-impl.cpp$(ObjectSuffix): sampleClassTemplate-impl.cpp ../build-$(ConfigurationName)/Templates/sampleClassTemplate-impl.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/CPPPractice/Templates/sampleClassTemplate-impl.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sampleClassTemplate-impl.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Templates/sampleClassTemplate-impl.cpp$(DependSuffix): sampleClassTemplate-impl.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Templates/sampleClassTemplate-impl.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Templates/sampleClassTemplate-impl.cpp$(DependSuffix) -MM sampleClassTemplate-impl.cpp

../build-$(ConfigurationName)/Templates/sampleClassTemplate-impl.cpp$(PreprocessSuffix): sampleClassTemplate-impl.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Templates/sampleClassTemplate-impl.cpp$(PreprocessSuffix) sampleClassTemplate-impl.cpp

../build-$(ConfigurationName)/Templates/functionTemplates.cpp$(ObjectSuffix): functionTemplates.cpp ../build-$(ConfigurationName)/Templates/functionTemplates.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/CPPPractice/Templates/functionTemplates.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/functionTemplates.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Templates/functionTemplates.cpp$(DependSuffix): functionTemplates.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Templates/functionTemplates.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Templates/functionTemplates.cpp$(DependSuffix) -MM functionTemplates.cpp

../build-$(ConfigurationName)/Templates/functionTemplates.cpp$(PreprocessSuffix): functionTemplates.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Templates/functionTemplates.cpp$(PreprocessSuffix) functionTemplates.cpp

../build-$(ConfigurationName)/Templates/functionTemplates-impl.cpp$(ObjectSuffix): functionTemplates-impl.cpp ../build-$(ConfigurationName)/Templates/functionTemplates-impl.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/CPPPractice/Templates/functionTemplates-impl.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/functionTemplates-impl.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Templates/functionTemplates-impl.cpp$(DependSuffix): functionTemplates-impl.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Templates/functionTemplates-impl.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Templates/functionTemplates-impl.cpp$(DependSuffix) -MM functionTemplates-impl.cpp

../build-$(ConfigurationName)/Templates/functionTemplates-impl.cpp$(PreprocessSuffix): functionTemplates-impl.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Templates/functionTemplates-impl.cpp$(PreprocessSuffix) functionTemplates-impl.cpp

../build-$(ConfigurationName)/Templates/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Templates/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/CPPPractice/Templates/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Templates/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Templates/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Templates/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Templates/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Templates/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/Templates/sampleClassTemplate.cpp$(ObjectSuffix): sampleClassTemplate.cpp ../build-$(ConfigurationName)/Templates/sampleClassTemplate.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/CPPPractice/Templates/sampleClassTemplate.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sampleClassTemplate.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Templates/sampleClassTemplate.cpp$(DependSuffix): sampleClassTemplate.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Templates/sampleClassTemplate.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Templates/sampleClassTemplate.cpp$(DependSuffix) -MM sampleClassTemplate.cpp

../build-$(ConfigurationName)/Templates/sampleClassTemplate.cpp$(PreprocessSuffix): sampleClassTemplate.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Templates/sampleClassTemplate.cpp$(PreprocessSuffix) sampleClassTemplate.cpp


-include ../build-$(ConfigurationName)/Templates//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


