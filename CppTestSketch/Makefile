ls:
	arduino-cli board list --config-file ~/.arduino15/arduino-cli.yaml

install:
	arduino-cli core install arduino:avr@1.8.2 --config-file ~/.arduino15/arduino-cli.yaml

compile:
	arduino-cli compile --fqbn arduino:avr:uno CppTestSketch --config-file ~/.arduino15/arduino-cli.yaml

upload:
	arduino-cli upload -p /dev/cu.usbmodem14101 --fqbn arduino:avr:uno CppTestSketch --config-file ~/.arduino15/arduino-cli.yaml

monitor:
	screen /dev/cu.usbmodem14101 9600

.PHONY: \
	ls \
	compile \
	upload \
	monitor
