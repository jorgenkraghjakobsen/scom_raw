
ma120:	test_libscom_ma120.c
	gcc -o test_ma120 test_libscom_ma120.c -lscom -lwiringPi
	
 

all:	test_libscom.c
	gcc -o test_libscom test_libscom.c -lscom -lwiringPi

bin: test_libscom2.c
	gcc -o test_libscom2 test_libscom2.c -lscom2 -lwiringPi

clean:
	rm test_libscom
