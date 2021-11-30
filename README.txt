Program jest pisany na szybko z racji małej ilości czasu, więc pewnie można zoptymalizować. Jest także autorski, więc możliwe, że można zanleźć jakiś wzorzec lepszego rozwiązania, ale lubię wynajdować koło na nowo, więc sobie napisałem.
Umieszczam też filmik z przykładem dla słowa "pies".
kod w folderze letter


Pomysły na ooptymalizacje:
-ktoś ma jakiś lepszy sposób na dynamiczne zaalokowanie tablicy na arduino?
-być może dałoby się jakoś inaczej zapisać wartości diod do Brailla(myślałem nad szablonem, ale wydaje mi się, że to i tak sprowadzi się do tego samego, ale można spróbować. Polecam dla osób, które chcą poćwiczyć programowanie obiektowe)

Pomysły na wykonanie całego urządzenia:
zastosowanie do wszystkich:
zamiast diod użyć elektromagnesów wypychających,
zrobić np. pięć szóstek wtedy, maksymalne wyrazy będą pięcio literowe(oczywiście liczbę szóstek można zwiększać kosztem wielkości układu, programistycznie to nie problem)
lub jedna szóstka i tak jak w tym przykładzie robimy zmianę litery na przycisk 
Oczywiście można zrobić obie te rzeczy :D 
jedna do nauki wyrazów druga do pojedyńczych liter 

problem do wszystkiego:
-trzeba przemyśleć zasilanie 
-akumulator plus ładowarka 
-podłączenie do prądu i zasilacz 

Pomysł 1.
program, który jest, praktycznie pozostaje w takiej formie, piszemy aplikację okienkową kabel usb z kompa do arudino i w ten sposób wpisujemy zdania
Zalety:
-prosta konstrukcja elektroniczna
-możliość poćwiczenia pisania aplikacji okienkowych 
Wady:
-maszyna potrzebuje do działania komputera
-nie jestem pewny jak skomunikować taką aplikację z arduino, więc jest to problem do rozwiązania 
podsumowanie: wydaje mi się, że pomysł odpada z racji na to, że potrzebny jest do działania maszyny komputer 

Pomysł 2.
budujemy własną klawiaturę z przycisków na zasadzie przerwań w danych pinach i jednej funkcji, która będzie sprawdzać, który pin został zwarty z masą, do tego dodajemy wyświetlacz
np. 2x16 na którym wyświetlamy zdanie (Na przyciskach można zrobić wypustki z Brailla i wtedy dzieci też będa mogły pisać!!)
Zalety:
-prosty programistycznie 
-możliwość poćwiczenia komunikowania dwóch arduino(ewentualnie)
-urządzenie jest samowystrczalne
Wady:
-duża infrastruktura elektroniczna 
- alfabet ma 32 litery plus jakiś enter i backspace to aż 34 wyprowadzenia plus np. 5 liter zajmuje 30 wyprowadzeń no i jeszcze ekran lcd, więc nawet arduino mega może nie wystarczyć no ale nie ma tego złego
można portami rx i tx skomunkować 2 arduino :D jedno na klawę drugie na wypustki i mamy to 

Pomysł 3.
Wydaje mi się ciekawy, w sumie bardzo podobny jak wyżej, ale zamiast budować własną klawę wpinamy bezpośrednio w arduino zwykłą(na pewno da się tak zrobić z taką na ps2 ale nie
wiem jak z taką na usb trzeba sprawdzić) wypustki też można zrobić
Zalety
-uproszczamy elektronikę 
-zabawa z klawiaturą
-urządzenie jest samowystrczalne
Wady:
-trzeba się pobawić przerwaniami i dobrze napisać program, który odczyta odpowiednie litery, ale do zrobienia na necie są poradniki przynajmniej z ps2 

Jak o czymś zapomniałem dopowiem na spotkaniu :D Pozdrawiam
