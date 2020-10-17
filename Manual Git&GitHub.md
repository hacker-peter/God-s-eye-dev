#### **Git & GitHub**

1. Instalacja Git

    Po zainstalowaniu sprawdzamy, czy wszystko działa komendą: `git --version`

    Ustawienie username: `git config --global user.name nazwa_uzytkownika`

    Ustawienie email: `git config --global user.email email`

2. GitHub

    Aby przesłać lokalne pliki na GitHub:

    - `git push link nazwa_galezi_gdzie_chcemy_wyslac` (Zawsze do innej niż master!)

    Aby nie wklejać za każdym razem linku do repo wysyłając pliki, ustawiamy alias:

    - `git remote add nazwa_aliasu` (Przyjęło się origin) link_do_repo

    - `git remote –v` (Wyświetla aliasy dla repo)

    Alias jest automatycznie przypisywany na origin w momencie klonowania

    Aby pobrać kod z GitHub na komputer:

    - `git clone link opcjonalna_nazwa_folderu `

    Aby zaktualizować pliki:

    - `git pull alias nazwa_galezi_gdzie_chcemy_zapisac`

3. Użytkowanie

    Git oznacza folder który śledzi poprzez plik .git. Aby go utworzyć:

    - `git init`

    Commity to snapshoty danej wersji kodu

    Etapy commitowania

    - `Modified`

    - `Staging`

    - `Commited`

    Aby dodać plik do staging aera trzeba:

    - `git status` (Pokazuje które pliki wymagają dodania do staging aera)

    - `git add nazwa_pliku` (Dodaje plik do staging aera)

    - `git add .` (Dodaje wszystkie modyfikowane pliki do staging aera)

    Aby usunąć plik dodany omyłkowo do staging aera

    - `git rm - -cached nazwa_pliku`

    Aby zrobić commit:

    - `git commit –m "Wiadomosc opisujaca dokonana zmiane"`

    Wyświetlenie wszystkich commitów z opisem:

    - `git log`

    - `git log - -oneline` (Bardziej przyjazny wygląd, mniej rozbudowany)

    Podglądanie zmian

    - `git checkout id` (krótkie ID z: git log - -oneline) Podglądanie zapisanej wersji commita o zadanym id. Aby powrócić do aktualnej wersji: git checkout master

    Wycofywanie zmian

    - `git revert id` (Usuwa pojedynczy commit, czyli wszystkie zmiany z nim związane w taki sposób, że dodaje nowy commit pozbawiony zmian zawartych w commicie usuwanym)

    - `git reset id` (Usuwa wszystkie commity zrobione po podanym id, czyli wszystkie wyżej, ale w razie czego zostawia je w aktualnie otwartym oknie edytora)

    - `git reset id --hard` (To co wyżej, ale bez zostawiania w oknie edytora, jednym zdaniem usuwa permanentnie)

    Tworzenie gałęzi (branches)

    Gałęzie tworzymy aby móc przetestować zmiany przed dodaniem ich do głównej gałęzi master, albo aby podzielić pracę między programistami.

    - `git branch nazwa_galezi` (Tworzy gałąź)

    - `git checkout –b nazwa_galezi` (Tworzy gałąź i od razu do niej przechodzi)

    Przeglądanie istniejących gałęzi

    - `git branch –a` (\* przy nazwie gałęzi mówi o tym, która jest wybrana)

    - `git checkout nazwa_galezi` (Przełącza między gałęziami)

    Usuwanie gałęzi:

    - `git branch –D nazwa_galezi` (Usuwa galąź)

    Włączanie gałęzi do głównej, czyli master

    - `git merge nazwa_galezi` (Trzeba najpierw wybrać gałąź, do której chce się włączyć poprzez git checkout nazwa_galezi)
