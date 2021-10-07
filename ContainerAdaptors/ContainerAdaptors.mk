##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=ContainerAdaptors
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/vivek/workspace/CPPPractice
ProjectPath            :=/home/vivek/workspace/CPPPractice/ContainerAdaptors
IntermediateDirectory  :=../build-$(ConfigurationName)/ContainerAdaptors
OutDir                 :=../build-$(ConfigurationName)/ContainerAdaptors
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
Objects0=../build-$(ConfigurationName)/ContainerAdaptors/CStackClass.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/ContainerAdaptors/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/ContainerAdaptors/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/ContainerAdaptors"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/ContainerAdaptors"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/ContainerAdaptors/.d:
	@mkdir -p "../build-$(ConfigurationName)/ContainerAdaptors"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/ContainerAdaptors/CStackClass.cpp$(ObjectSuffix): CStackClass.cpp ../build-$(ConfigurationName)/ContainerAdaptors/CStackClass.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/ContainerAdaptors/CStackClass.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CStackClass.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/ContainerAdaptors/CStackClass.cpp$(DependSuffix): CStackClass.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/ContainerAdaptors/CStackClass.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/ContainerAdaptors/CStackClass.cpp$(DependSuffix) -MM CStackClass.cpp

../build-$(ConfigurationName)/ContainerAdaptors/CStackClass.cpp$(PreprocessSuffix): CStackClass.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/ContainerAdaptors/CStackClass.cpp$(PreprocessSuffix) CStackClass.cpp

../build-$(ConfigurationName)/ContainerAdaptors/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/ContainerAdaptors/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/ContainerAdaptors/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/ContainerAdaptors/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/ContainerAdaptors/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/ContainerAdaptors/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/ContainerAdaptors/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/ContainerAdaptors/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/ContainerAdaptors//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


