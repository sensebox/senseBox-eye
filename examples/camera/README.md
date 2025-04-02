### Pinout
```cpp
#define PWDN_GPIO_NUM  -1
#define RESET_GPIO_NUM -1
#define XCLK_GPIO_NUM  15
#define SIOD_GPIO_NUM  4
#define SIOC_GPIO_NUM  5

#define Y9_GPIO_NUM    16 // D7
#define Y8_GPIO_NUM    17 // D6
#define Y7_GPIO_NUM    18 // D5
#define Y6_GPIO_NUM    12 // D4
#define Y5_GPIO_NUM    10 // D3
#define Y4_GPIO_NUM    8  // D2
#define Y3_GPIO_NUM    9  // D1
#define Y2_GPIO_NUM    11 // D0
#define VSYNC_GPIO_NUM 6
#define HREF_GPIO_NUM  7
#define PCLK_GPIO_NUM  13
```

# Examples
### CameraWebServer
Default example from the esp32 BSP. Streams camera images over Wifi.

Requires version 3.0.7 of the BSP for face detection and recognition (newer versions dont include the model zoo anymore). Dont forget to adjust the Wifi credentials.

### camera-display
Continuously print current camera image on the display.

### camera-sd
Capture a single camera image (as JPEG) and save it to sd-card. Requires PSRAM turned on.