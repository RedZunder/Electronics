# Electronics
Different electronics projects


## Change LED via Bluetooth

<details>
  
<summary>Diagram and photo</summary>
  
The labels on the left represent the JDY-31 pins.
  
![Arduino diagram](https://github.com/user-attachments/assets/07ef29b7-ea1c-448c-960a-da613fa90604)  

![Photo of hardware](https://github.com/user-attachments/assets/1a8727f0-3570-4572-a2c6-001cdefa37a8)

</details>

<details>
<summary>Arduino code</summary>
  
The JDY-31 module receives by Bluetooth (connected to a phone, for example) a string of type "RxGxBx", where _x_ is a number beteen 0 and 9, representing intensity of that color.
Then, the module sends by serial the information to Arduino Uno, which obtains the values and changes the color of the RGB LED (common anode).

![Code file in C](/main.ino)
  
</details>


