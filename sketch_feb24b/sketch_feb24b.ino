#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "OPPO A52";
const char* password = "qqts2110";
const char* serverName = "https://api.telegram.org/botYOUR_BOT_API_TOKEN/sendMessage?chat_id=YOUR_CHAT_ID&text=Hello%20from%20ESP32";

void setup() {
    Serial.begin(115200);
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
    }
    Serial.println("Connected to Wi-Fi");

    HTTPClient http;
    http.begin(serverName);
    int httpResponseCode = http.GET();
    if (httpResponseCode == 200) {
        String payload = http.getString();
        Serial.println(payload);
    }
    http.end();
}

void loop() {
    // Your other code here
}

