init:
	mkdir arduino15 && arduino-cli config init --dest-dir ~/.arduino15

new:
	arduino-cli sketch new MyTestSketch --config-file ~/.arduino15/arduino-cli.yaml

ls:
	arduino-cli board list --config-file ~/.arduino15/arduino-cli.yaml

install:
	arduino-cli core install arduino:avr --config-file ~/.arduino15/arduino-cli.yaml

compile:
	arduino-cli compile --fqbn arduino:avr:uno MyTestSketch --config-file ~/.arduino15/arduino-cli.yaml

upload:
	arduino-cli upload -p /dev/cu.usbmodem14101 --fqbn arduino:avr:uno MyTestSketch --config-file ~/.arduino15/arduino-cli.yaml

monitor:
	screen /dev/cu.usbmodem14101 9600

.PHONY: \
	init \
	new \
	ls \
	install \
	compile \
	upload \
	monitor
