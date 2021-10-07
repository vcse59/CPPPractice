##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=AssociativeContainers
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/vivek/workspace/CPPPractice
ProjectPath            :=/home/vivek/workspace/CPPPractice/AssociativeContainers
IntermediateDirectory  :=../build-$(ConfigurationName)/AssociativeContainers
OutDir                 :=../build-$(ConfigurationName)/AssociativeContainers
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=vivek
Date                   :=03/03/21
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
Objects0=../build-$(ConfigurationName)/AssociativeContainers/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/AssociativeContainers/CSetClass.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/AssociativeContainers/CMultiSetClass.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/AssociativeContainers/CMapClass.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/AssociativeContainers/CMultiMapClass.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/AssociativeContainers/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/AssociativeContainers"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/AssociativeContainers"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/AssociativeContainers/.d:
	@mkdir -p "../build-$(ConfigurationName)/AssociativeContainers"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/AssociativeContainers/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/AssociativeContainers/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/AssociativeContainers/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/AssociativeContainers/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/AssociativeContainers/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/AssociativeContainers/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/AssociativeContainers/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/AssociativeContainers/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/AssociativeContainers/CSetClass.cpp$(ObjectSuffix): CSetClass.cpp ../build-$(ConfigurationName)/AssociativeContainers/CSetClass.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/AssociativeContainers/CSetClass.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CSetClass.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/AssociativeContainers/CSetClass.cpp$(DependSuffix): CSetClass.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/AssociativeContainers/CSetClass.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/AssociativeContainers/CSetClass.cpp$(DependSuffix) -MM CSetClass.cpp

../build-$(ConfigurationName)/AssociativeContainers/CSetClass.cpp$(PreprocessSuffix): CSetClass.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/AssociativeContainers/CSetClass.cpp$(PreprocessSuffix) CSetClass.cpp

../build-$(ConfigurationName)/AssociativeContainers/CMultiSetClass.cpp$(ObjectSuffix): CMultiSetClass.cpp ../build-$(ConfigurationName)/AssociativeContainers/CMultiSetClass.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/AssociativeContainers/CMultiSetClass.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CMultiSetClass.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/AssociativeContainers/CMultiSetClass.cpp$(DependSuffix): CMultiSetClass.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/AssociativeContainers/CMultiSetClass.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/AssociativeContainers/CMultiSetClass.cpp$(DependSuffix) -MM CMultiSetClass.cpp

../build-$(ConfigurationName)/AssociativeContainers/CMultiSetClass.cpp$(PreprocessSuffix): CMultiSetClass.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/AssociativeContainers/CMultiSetClass.cpp$(PreprocessSuffix) CMultiSetClass.cpp

../build-$(ConfigurationName)/AssociativeContainers/CMapClass.cpp$(ObjectSuffix): CMapClass.cpp ../build-$(ConfigurationName)/AssociativeContainers/CMapClass.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/AssociativeContainers/CMapClass.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CMapClass.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/AssociativeContainers/CMapClass.cpp$(DependSuffix): CMapClass.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/AssociativeContainers/CMapClass.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/AssociativeContainers/CMapClass.cpp$(DependSuffix) -MM CMapClass.cpp

../build-$(ConfigurationName)/AssociativeContainers/CMapClass.cpp$(PreprocessSuffix): CMapClass.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/AssociativeContainers/CMapClass.cpp$(PreprocessSuffix) CMapClass.cpp

../build-$(ConfigurationName)/AssociativeContainers/CMultiMapClass.cpp$(ObjectSuffix): CMultiMapClass.cpp ../build-$(ConfigurationName)/AssociativeContainers/CMultiMapClass.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/AssociativeContainers/CMultiMapClass.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CMultiMapClass.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/AssociativeContainers/CMultiMapClass.cpp$(DependSuffix): CMultiMapClass.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/AssociativeContainers/CMultiMapClass.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/AssociativeContainers/CMultiMapClass.cpp$(DependSuffix) -MM CMultiMapClass.cpp

../build-$(ConfigurationName)/AssociativeContainers/CMultiMapClass.cpp$(PreprocessSuffix): CMultiMapClass.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/AssociativeContainers/CMultiMapClass.cpp$(PreprocessSuffix) CMultiMapClass.cpp


-include ../build-$(ConfigurationName)/AssociativeContainers//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


