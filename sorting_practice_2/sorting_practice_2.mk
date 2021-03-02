##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=sorting_practice_2
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/vivek/workspace/CPPPractice/CPPPractice
ProjectPath            :=/home/vivek/workspace/CPPPractice/CPPPractice/sorting_practice_2
IntermediateDirectory  :=../build-$(ConfigurationName)/sorting_practice_2
OutDir                 :=../build-$(ConfigurationName)/sorting_practice_2
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
Objects0=../build-$(ConfigurationName)/sorting_practice_2/sorting-impl.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/sorting_practice_2/item.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/sorting_practice_2/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/sorting_practice_2/sorting.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/sorting_practice_2/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/sorting_practice_2"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/sorting_practice_2"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/sorting_practice_2/.d:
	@mkdir -p "../build-$(ConfigurationName)/sorting_practice_2"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/sorting_practice_2/sorting-impl.cpp$(ObjectSuffix): sorting-impl.cpp ../build-$(ConfigurationName)/sorting_practice_2/sorting-impl.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/CPPPractice/sorting_practice_2/sorting-impl.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sorting-impl.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/sorting_practice_2/sorting-impl.cpp$(DependSuffix): sorting-impl.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/sorting_practice_2/sorting-impl.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/sorting_practice_2/sorting-impl.cpp$(DependSuffix) -MM sorting-impl.cpp

../build-$(ConfigurationName)/sorting_practice_2/sorting-impl.cpp$(PreprocessSuffix): sorting-impl.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/sorting_practice_2/sorting-impl.cpp$(PreprocessSuffix) sorting-impl.cpp

../build-$(ConfigurationName)/sorting_practice_2/item.cpp$(ObjectSuffix): item.cpp ../build-$(ConfigurationName)/sorting_practice_2/item.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/CPPPractice/sorting_practice_2/item.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/item.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/sorting_practice_2/item.cpp$(DependSuffix): item.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/sorting_practice_2/item.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/sorting_practice_2/item.cpp$(DependSuffix) -MM item.cpp

../build-$(ConfigurationName)/sorting_practice_2/item.cpp$(PreprocessSuffix): item.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/sorting_practice_2/item.cpp$(PreprocessSuffix) item.cpp

../build-$(ConfigurationName)/sorting_practice_2/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/sorting_practice_2/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/CPPPractice/sorting_practice_2/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/sorting_practice_2/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/sorting_practice_2/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/sorting_practice_2/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/sorting_practice_2/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/sorting_practice_2/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/sorting_practice_2/sorting.cpp$(ObjectSuffix): sorting.cpp ../build-$(ConfigurationName)/sorting_practice_2/sorting.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/vivek/workspace/CPPPractice/CPPPractice/sorting_practice_2/sorting.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sorting.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/sorting_practice_2/sorting.cpp$(DependSuffix): sorting.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/sorting_practice_2/sorting.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/sorting_practice_2/sorting.cpp$(DependSuffix) -MM sorting.cpp

../build-$(ConfigurationName)/sorting_practice_2/sorting.cpp$(PreprocessSuffix): sorting.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/sorting_practice_2/sorting.cpp$(PreprocessSuffix) sorting.cpp


-include ../build-$(ConfigurationName)/sorting_practice_2//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


