.PHONY: clean All

All:
	@echo "----------Building project:[ ContainerAdaptors - Debug ]----------"
	@cd "ContainerAdaptors" && "$(MAKE)" -f  "ContainerAdaptors.mk"
clean:
	@echo "----------Cleaning project:[ ContainerAdaptors - Debug ]----------"
	@cd "ContainerAdaptors" && "$(MAKE)" -f  "ContainerAdaptors.mk" clean
