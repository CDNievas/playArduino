# Play Arduino
Arduino play Despacito :D

### Circuit
![circuit](https://i.imgur.com/JNno81F.png)

### List of songs actually supported

- Mario Main Theme and Underworld Theme
- Christmas Song 1, 2 and 3
- URSS Anthem
- Evangelion Opening

##### Working on
- Still Alive (needs fix)
- Shooting Stars
- Zelda
- SAO II Opening 2
- Darude - Sandstorm


### How can you create songs?
Well its pretty easy, the system that uses to identify the notes is similar that the used by the <b>composer of nokia 3000 series</b>, so if a song is already do it there and you get the code of the composer you can translate it. For example

##### Composer representation
This are notes of the composer <b>16a4</b> <b>8#f5</b>, where:

1. The first number represents the duration of the note, in the examples are <i>16</i> and <i>8</i>
2. The letters represents the note: <i>a</i> and <i>#f</i>
3. The last number represents the scale to use for that note: <i>4</i> and <i>5</i>

##### Arduino representation
So to translate it to the arduino we use a structure like this <b>{NOTE,DURATION}</b>
- Duration: Is the same number that the composer uses, so {NOTE,16} and {NOTE,8}
- Note: The note are constants that represents different frecuencies on Arduino and depends of the note, and the scale.

So all the constants starts with <b>"NOTE_?"</b> and ? represents the note and scale:

NOTE_A4 => Note A in scale 4 <br>
NOTE_AS4 => Note A# in scale 4 <br>
NOTE_B5 => Note B in scale 5 <br>

> <i><u>The scales are between [1,7], being 4 and 5 the most normal or "sweet"</u></i>

##### Result of example
To finish the example...

<b>16a4</b> => {NOTE_A4,16}<br>
<b>8#f5</b> => {NOTE_FS5,8}<br>

:musical_note::heart::musical_note: <b>If you want to collab adding more songs please be free to do it!</b> :musical_note::heart::musical_note: 

