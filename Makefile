new:
	arduino-cli sketch new $$TARGET --config-file ~/.arduino15/arduino-cli.yaml; \
	sed -e "s/TARGET/$${TARGET}/" ./Makefile.template > ./$$TARGET/Makefile; \
	touch ./$$TARGET/main.cpp; \
	echo '' > ./$$TARGET/$$TARGET.ino

.PHONY: new
