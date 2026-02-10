# Smart-Lock Face Recognition System

This project implements a high-accuracy facial recognition system using **DeepFace** and a custom **Keras/TensorFlow** neural network. The system is designed to identify authorized users and send a signal to an Arduino-controlled solenoid lock.

### 🚀 Features
* **Deep Learning Model:** Utilizes the `Facenet512` model for high-dimensional face embeddings.
* **High Confidence:** Achieved testing accuracy of 100% and real-time prediction confidence of 99.97%.
* **Preprocessing Pipeline:** Includes automated dataset loading, image resizing, and normalization.
* **Hardware Ready:** Code includes logic to interface with an Arduino via Serial communication.

### 🛠️ Tech Stack
* **Language:** Python
* **Library:** DeepFace, TensorFlow, Keras
* **Data Processing:** NumPy, Scikit-learn
* **Hardware:** Arduino Uno, Solenoid Lock, Relay Module

### ⚠️ Current Status & Hardware Notes
The software and deep learning model are fully functional. 

**Note on Arduino Implementation:** The physical hardware integration is currently pending due to a hardware component issue. However, the logic for triggering the lock is written in the Python script. I have included a **Tinkercad circuit diagram** in the repository to demonstrate the intended wiring and logic.

### 📂 How to Use
1. Clone the repository.
2. Place authorized face images in the `known_faces/` directory.
3. Run the Jupyter Notebook to train the model and start the detection loop.
4. Connect your Arduino to the correct COM port (9600 baud) to trigger the physical lock.
