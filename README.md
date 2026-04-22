# MacroPad-V2

A compact 16-key macro pad with rotary encoder and built-in battery — powered by ESP32, fully wireless.  

<img width="449" height="521" alt="Screenshot 2026-04-08 103423" src="https://github.com/user-attachments/assets/16df6d53-8d5a-406c-a163-6ee1a62a7c21" />



## Features

- 16 Programmable Keys  
- Rotary Encoder  
- Battery Powered  
- ESP32 with bluetooth  

## How It Works

The MacroPad-V2 uses a seeed xiao ESP32 S3 to manage key matrix and rotary encoder.  

Power is managed by a charging module.  

Firmware handles Bluetooth. The case is 3D printed, with space for the PCB, battery, keys and encoder.  

<details>
  <summary>Pictures</summary>
  
<img width="748" height="703" alt="Screenshot 2026-04-08 092705" src="https://github.com/user-attachments/assets/ac92a796-cebd-4113-8ac0-ed9fc2b9482a" />
<img width="661" height="855" alt="Screenshot 2026-04-08 092824" src="https://github.com/user-attachments/assets/58448100-1216-47d3-8a0d-42f26d18eb5e" />
<img width="604" height="749" alt="Screenshot 2026-04-08 103435" src="https://github.com/user-attachments/assets/42c66ff3-0ea2-4e49-ac84-52817fb6f9fe" />
<img width="951" height="421" alt="Screenshot 2026-04-08 103441" src="https://github.com/user-attachments/assets/6edf2ab4-722e-4650-80e4-ccf918633f07" />
<img width="828" height="716" alt="Screenshot 2026-04-08 103458" src="https://github.com/user-attachments/assets/f6e05499-b0a9-40ec-9266-1a5ccc53be17" />
<img width="850" height="761" alt="Screenshot 2026-04-08 103510" src="https://github.com/user-attachments/assets/9d5b0dd5-940b-49af-9de9-463399a6185e" />

</details>

<details>
<summary>BOM</summary>

| Name | Purpose | Quantity | Total Cost (USD) | Link | Distributor |
|------|--------|----------|------------------|------|-------------|
| PCB | How would i even make it without PCB | 1 | 11.34 | https://jlcpcb.com | jlcpcb |
| Pin header 2.54mm | soldered onto the pcb then on top of that is the esp32(so it can be visible), the rotary encoder needs this as well | 1 | 3.08 | https://www.aliexpress.com/item/4000873858801.html | Aliepress |
| 1N4148W T4 SOD-123(Diode) | needed in switch matrix(prevents ghosting) | 1 | 2.16 | https://www.aliexpress.com/item/1005010653199938.html | Aliexpress |
| Seeed xiao ESP32 S3 | brain of everything, needed to power use and control all switches and rotary encoder | 1 | 9.06 | https://www.aliexpress.com/item/1005007341749305.html | Aliepress |
| M4 screws 20pcs, 8mm | screwed into heatset inserts to hold case and pcb together | 1 | 2.16 | https://www.aliexpress.com/item/32810872544.html | Aliexpress |
| Heatset inserts, M4 (OD5mm) 30pcs, Length 3mm | Will be melted into the 3D printed case and screws will be inserted into it to hold the case together | 1 | 2.43 | https://www.aliexpress.com/item/1005008666672949.html | Aliexpress |
| Battery holder | Holds battery in place | 1 | 1.84 | https://www.aliexpress.com/item/1005006783038553.html | Aliexpress |
| Battery | to store electricity and later power the esp32 | 1 | 8.85 | https://www.aliexpress.com/item/32810182330.html | Aliexpress |
| Slide switch | shut power to esp32 so it wont consume electricity when not used | 1 | 1.8 | https://www.aliexpress.com/item/1005005633418066.html | Aliexpress |
| Charging module | safely power esp32 and charge battery | 1 | 2.0 | https://www.aliexpress.com/item/1005007176376691.html | Aliexpress |
| Key switches | To use the macropad, (Self sourced) | 1 | 0.0 | https://www.aliexpress.com/item/1005007666734237.html | Aliexpress |
| Rotary encoder | is a part on the pcb | 1 | 1.47 | https://www.aliexpress.com/item/1005009040530746.html | Aliexpress |

</details>

<details>
  <summary>License</summary>

### MIT License

**Copyright (c) [2026] [TomasD-git]**

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

</details>
