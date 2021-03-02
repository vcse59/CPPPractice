.PHONY: clean All

All:
	@echo "----------Building project:[ Sequence - Debug ]----------"
	@cd "Sequence" && "$(MAKE)" -f  "Sequence.mk"
clean:
	@echo "----------Cleaning project:[ Sequence - Debug ]----------"
	@cd "Sequence" && "$(MAKE)" -f  "Sequence.mk" clean
