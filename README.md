# ESP32 Mouse Jiggler

Transform your ESP32 into a Bluetooth mouse that simulates cursor movement at customizable intervals. Perfect for keeping your computer awake or for playful pranks!

## Features

- **Bluetooth HID Support:** Turns your ESP32 into a Bluetooth Human Interface Device (HID) mouse.
- **Automated Mouse Movement:** Simulates mouse movement at user-defined intervals.
- **Customizable Settings:** Easily adjust the movement intervals to fit your needs.

## Requirements

- **ESP32 Development Board**
- **Visual Studio Code (VSCode)**
- **PlatformIO Extension for VSCode** *(platformio.platformio-ide)*

## Installation

1. **Clone the Project:**
   ```bash
   git clone git@github.com:samueldebenedictis/esp32-mouse-jiggler.git
   ```
2. Open with VSCode: launch Visual Studio Code and open the cloned project folder.

3. Configure Board Settings: open platformio.ini and adjust the board settings if necessary to match your ESP32 variant.

4. Upload the Sketch: use the PlatformIO tasks panel to run the Upload task to upload the code to your ESP32.

5. Connect via Bluetooth: after uploading, pair the device named "Mouse ESP32" with your computer or other Bluetooth-enabled devices.

## Usage

Once connected, the ESP32 will begin simulating mouse movements based on the intervals specified in the code. Adjust the timing and movement settings in the sketch to customize its behavior.

## Customization

Modify the movement interval and other parameters directly in the code to suit your preferences.

## Troubleshooting

If the ESP32 does not appear as a Bluetooth device, ensure Bluetooth is enabled on your computer.
Check the Output panel in VSCode for any error messages during the upload process.

## License

This project is licensed under the MIT License. See the LICENSE file for details.

## Acknowledgments

Special thanks to the open-source community for their contributions and inspiration!