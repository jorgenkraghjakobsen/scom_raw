
all: 	bin 

.PHONY: bin
bin:	build_include.c
	mkdir -p bin ; \
	gcc -g -c argparse.c
	gcc -o ./bin/build_include argparse.o build_include.c  `mysql_config --cflags --libs`

cvs:
	bin/build_include -t ma120_rev0 -d 2 -o 2 > dot_reg_file_ma120_rev0       

ardu:   ma120x0.h
	cp ma120x0.h /opt/arduino/libraries/MerusAudio/ ; \
	cp ma120x0_all.h /opt/arduino/libraries/MerusAudio/

lib2: ./bin/build_include
	./bin/build_include ma120_rev0 a db2 p > ma120.h ; \
	./bin/build_include ma120_rev0 a db2 > ma120_all.h

lib:	./bin/build_include
	./bin/build_include ma12070_register_spec_rev6_1 -p -o 0 > ma120x0.h ; \
	./bin/build_include ma12070_register_spec_rev6_1 > -o 0 > ma120x0_all.h

html:
	sudo cp map.html /var/www/html/reg_map	

install: ma120_rev0_all.h 
	cp ma120_rev0_all.h /usr/include ; \
	cp ma120_rev0.h /usr/include ;

clean:
	rm ./bin/build_include

cleaninc:
	rm /usr/include/ma120x0*.h
