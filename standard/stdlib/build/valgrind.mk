include environment.mk

#---------------------------------------------------
# MEMORY LEAK ANALYSIS
#---------------------------------------------------

MEMORY_LEAKS := --leak-check=full
MEMORY_BLOCK := --leak-check=full --show-leak-kinds=full

#---------------------------------------------------
# PERFORM ANALYSIS WITH 'callgrind' & 'cachegrind'
#---------------------------------------------------

CALLGRIND  := --dsymutil=yes --tool=callgrind --callgrind-out-file=$(REPORT_DIR)/callgrind.out.%p
CACHEGRIND := --tool=cachegrind --cachegrind-out-file=$(REPORT_DIR)/cachegrind.out.%p
