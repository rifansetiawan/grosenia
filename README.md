Problem No 1 Problem Name: ​caesar-chiper 
 
 
The Caesar cipher is named after Julius Caesar, who, according to Suetonius, used it with a shift of three to protect messages of military significance. While Caesar's was the first recorded use of this scheme, other substitution ciphers are known to have been used earlier. 
 
"If he had anything confidential to say, he wrote it in cipher, that is, by so changing the order of the letters of the alphabet, that not a word could be made out. If anyone wishes to decipher these, and get at their meaning, he must substitute the fourth letter of the alphabet, namely D, for A, and so with the others." 
 
— Suetonius, Life of Julius Caesar 56 
 
## Introduction 
 
The main reason of the Caesar Chiper is to encrypt an original text into encrypted text For example if the step 2, means every letter will be shifted to right 2 steps 
 
A => step 2 => become C 
B => step 2 => become D 
C => step 2 => become E 
D => step 2 => become F 
E => step 2 => become G 
F => step 2 => become H 
G => step 2 => become I 
H => step 2 => become J 
I => step 2 => become K 
J => step 2 => become L 
K => step 2 => become M 
L => step 2 => become N 
M => step 2 => become O 
N => step 2 => become P 
O => step 2 => become Q 
P => step 2 => become R 
Q => step 2 => become S 
R => step 2 => become T 
S => step 2 => become U 
T => step 2 => become V 
U => step 2 => become W 
V => step 2 => become X 
W => step 2 => become Y  
X => step 2 => become Z 
Y => step 2 => become A  
Z => step 2 => become B 
 
So if the plain text: 

 HELLO WORLD 
 
Encrypted text if the step is 2 
 
JGNNQ YQTNF 
 
## Program 
 
Your program will accept one line consists of N and the strings. For example 
 2 HELLO WORLD JGNNQ YQTNF 
 
## Explanation 2 means the step is Two HELLO will be JGNNQ, for each letter step 2 Space will be ignored and stay as is WORLD will be YQTNF, for each letter step 2 
 
 
## Cautions Make sure you test with steps like 30, or anything above 26 Make sure lowercse stay as lowercase (a-z), and uppercase stay as uppercase (A-Z) If there is other character other than a-ZA-Z should stay as is, for example # stay as # 
   

 Problem No 2 Problem Name: ​hangman 
 
 # Hangman Problem In this problem you will need to create a game called Hangman 
 There will three category fruit, animal, and country The program will have a list of words as follow 
 - fruit   
 	- apple   
 	- banana   
 	- watermelon   
 	- guava   
 	- orange
  - animal   
  	- dog   
  	- cat   
  	- elephant   
  	- tiger   
  	- bird 
  - country   
  	- indonesia   
  	- france   
  	- usa   
  	- china   
  	- japan   
  	- korea  
   When the program starts, the program will load all the possible words for each group, fruit, animal, country, etc. Then random a word, and show it using underscore ( _ ) 
   
 For example the word "orange" shown as _ _ _ _ _ _ ( 6 characters ) 
 We will ask user to guess what word it is (whenever user type, it's in-case-sensitive)   The program will accept several commands. See the sample input below 
 
 
 
When the program starts, random a word, show the hint 
 
 
 
Hint: fruit _ _ _ _ _ _ 
 User type o, check whether letter O is exist 
 o O _ _ _ _ _ 
 User type R (uppercase), check whether letter R is exists 
 R O R _ _ _ _ 
 User type S, and no letter S, count every wrong guess. Max wrong guess is same as the letter count ( O R A N G E, 6 letters in the word) 
 S No letter S. Wrong guess = 1, Max = 6 O R _ _ _ _ 
 
 
T No letter T. Wrong guess = 2, Max = 6 O R _ _ _ _ 
 E O R _ _ _ E 
 orange Correct! O R A N G E 
 ### Explanation: - For example above the word is **orange**, is shown as _ _ _ _ _ _ (6 letters) - When user type letter o, even is lower case the system can accept it. User can type lower case or upper case - When user type letter that not exist, should show error message. For example when guessing letter S. The output is "No letter S. Wrong guess = 1, Max = 6 - Wrong guess is for counting how many wrong guess already - Max guess is based on the letter count of the word, for **orange**, max guess is 6, for **japan**, max guess is 5 - If user try to answer with a complete word, for example **orange**, the program can accept and check whether is correct. If correct, it means there will no need to guess one by one 
- If the wrong guess reach the maximum, it will show "Game Over" and the game ends 
 See the another example below for word **japan** 
 Hint: country _ _ _ _ _ 
 a _ A _ A _ 
 b No letter B. Wrong guess = 1, Max = 5 _ A _ A _ 
 C No letter C. Wrong guess = 2, Max = 5 _ A _ A _ 
 d No letter D. Wrong guess = 3, Max = 5 _ A _ A _ 
 e No letter E. Wrong guess = 4, Max = 5 _ A _ A _ 
 n _ A _ A N 
 k No letter K. Wrong guess = 5, Max = 5 Game Over 