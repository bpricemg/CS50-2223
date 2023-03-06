# Responds to a greeting
# https://pypi.org/project/SpeechRecognition/

import re
import speech_recognition
import pyttsx3

# Obtain audio from the microphone
recognizer = speech_recognition.Recognizer()
with speech_recognition.Microphone() as source:
    print("Say something:")
    audio = recognizer.listen(source)

# Recognize speech using Google Speech Recognition
words = recognizer.recognize_google(audio)

# Respond to speech
engine = pyttsx3.init()
matches = re.search("my name is (.*)", words)
if matches:
    engine.say(f"hello, {matches[1]}")
    engine.runAndWait()
elif "hello" in words:
    engine.say(f"Hello to you too!")
    engine.runAndWait()
elif "how are you" in words:
    engine.say(f"I am well, thanks!")
    engine.runAndWait()
elif "goodbye" in words:
    engine.say(f"Goodbye to you too!")
    engine.runAndWait()
else:
    engine.say(f"Huh?")
    engine.runAndWait()
