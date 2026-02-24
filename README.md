🛍️ Product Inventory Manager (C++ Console App)
📖 Project Overview

This project is a simple C++ console application that manages a small inventory of products using std::vector.
It provides a menu-based interface for common operations:

List all products

Add new products

Edit existing products (price & quantity)

Delete products

Simulate buying products (decrease stock + compute total cost)

The project is ideal for practicing C++ basics: structs, vectors, loops, and input/output.

✅ Features

✅ Stores products in a std::vector<Product>
✅ Preloaded sample inventory (10 products)
✅ Menu-driven interface (CRUD + purchase)
✅ “Buy” operation checks stock availability
✅ Computes and prints total purchase price
✅ Simple index-based product selection

🏗️ Data Structure
struct Product

Each product contains:

name (std::string)

price (double)

quantity (int)

🖥️ Menu Options
1. List     - display all products
2. Add      - add a new product
3. Edit     - update price and quantity of a product
4. Delete   - remove a product from the inventory
5. Buy      - purchase a quantity (reduces stock, prints total)
6. Exit     - quit the program


Lab 1 – Structuri și liste de obiecte

🎯 Obiectiv
•	Familiarizarea cu definirea unei structuri/clase simple.
•	Crearea și gestionarea unei liste de obiecte.
•	Exersarea operațiilor de tip CRUD (Create, Read, Update, Delete).

📌 Cerințe generale 
1.	Definirea unei structuri/clase
o	Structura va reprezenta un obiect dintr-un domeniu ales (ex. Student, Carte, Contact, Mașină, Film, Angajat). 
o	Fiecare obiect trebuie să aibă cel puțin 3 atribute (ex. nume, varsta, nota).
2.	Inițializarea unei liste
o	Creează o listă (array/vector) cu minimum 10 obiecte predefinite.
3.	Operații de bază (CRUD):
o	Afișare tuturor obiectelor din listă.
o	Adăugare unui obiect nou în listă (date introduse de utilizator).
o	Modificare unui obiect existent (ex. schimbarea notei, cantității, prețului etc.).
o	Ștergere unui obiect din listă (după un criteriu ales – nume sau index).
4.	Meniu interactiv
o	Programul va afișa un meniu cu opțiuni:
1.	Vizualizare obiecte.
2.	Adăugare obiect.
3.	Modificare logică după tematica (rezervare / cumpărare ).
4.	Ștergere obiect.
5.	Ieșire.
o	Utilizatorul va putea selecta o opțiune, iar programul va executa operația corespunzătoare.
o	Programul rulează într-o buclă până la alegerea opțiunii „Ieșire”.
5.	Verificări și validări
o	La modificare sau ștergere: dacă obiectul nu există → mesaj de eroare.
o	La adăugare: verifică dacă lista are loc pentru încă un element (dacă se folosește array).
o	La modificări (ex.: cumpărare, rezervare, scădere stoc): verifică dacă există suficiente resurse disponibile.


Exemplu Pseudocod
Definirea unei structuri pentru produse (struct Product), care va avea atributele nume, preț și cantitate.
1.	Inițializarea unei liste cu 10 produse (array de structuri).
2.	Crearea funcției pentru afișarea meniului:
o	Opțiune pentru vizualizarea produselor.
o	Opțiune pentru cumpărare.
o	Opțiune pentru ieșire.
3.	Crearea funcției pentru vizualizarea produselor (parcurgerea listei și afișarea detaliilor).
4.	Crearea funcției pentru cumpărarea produselor:
o	Solicită produsul dorit.
o	Verifică dacă există suficiente stocuri.
o	Scade cantitatea din stoc și afișează totalul costului.
5.	Verificarea erorilor: Dacă utilizatorul cere o cantitate mai mare decât cea disponibilă, afișează un mesaj de eroare.

