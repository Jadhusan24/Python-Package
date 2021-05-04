from gtts import gTTS  # You have to Import the Gtts module for text
import os  # YOur import Os module to start the audio file


mytext = 'Convert this Text to Speech in Python'

language = 'en'  # The Language What You Use

myobj = gTTS(text=mytext, lang=language, slow=False)


myobj.save("Audio.mp3")

os.system("start Audio.mp3")  # Play the converted file
