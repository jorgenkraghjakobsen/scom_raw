# Test cases for db_lookup 
#   Test for:
#        .reg_file<_database_name>  db version 1.
#        .reg_file<_database_name>  db version 2. 
#        .reg_db                    db version 1. 
#        .reg_db                    db version 2. 
#        no file                    exit error  

all_file : reg_file_v1  		# reg_file_v2 
all_db : reg_db_v1_0 reg_db_v1_1 reg_db_v2

all : all_file all_db

clean : 
	rm -f .reg_* *.res

reg_file_v1 :
	cp reg_file_ma12070_register_spec_rev6b .reg_file_ma12070_register_spec_rev6b ; \
	../../bin/db_lookup > $@.res ; \
	diff $@.res $@.ref ; \
	echo "---------------------------------------------------------------------"; \
	echo "Test case $@ all good " ; \
	echo "---------------------------------------------------------------------"; 
	
	
reg_file_v2 : 
	cp reg_file_ma12_spec .reg_file ; \
	../../bin/db_lookup > $@.res ; \
	diff $@.res $@.ref ; \
	echo "---------------------------------------------------------------------"; \
	echo "Test case $@ all good " ;\
	echo "---------------------------------------------------------------------"; 


## Database test cases 

reg_db_v1_0 :
	rm -f .reg_file* ; \
	echo "ma12070_register_spec_rev6b" > .reg_db ; \
	../../bin/db_lookup > $@.res ; \
	diff $@.res $@.ref ; \
	echo "---------------------------------------------------------------------";\
	echo "Test case $@ all good ";\
	echo "---------------------------------------------------------------------";
	
reg_db_v1_1 :
	rm -f .reg_file* ; \
	echo "merus_ic_trunk.ma12070_register_spec_rev6b" > .reg_db ; \
	../../bin/db_lookup > $@.res ; \
	diff $@.res $@.ref ; \
	echo "---------------------------------------------------------------------";\
	echo "Test case $@ all good ";\
	echo "---------------------------------------------------------------------";
	
reg_db_v2 : 
	rm -f .reg_file* ; \
	echo "merus_map.ma120_rev0" > .reg_db ; \
	../../bin/db_lookup > $@.res ; \
	diff $@.res $@.ref ; \
	echo "---------------------------------------------------------------------";\
	echo "Test case $@ all good ";\
	echo "---------------------------------------------------------------------";
	
