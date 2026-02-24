#include <iostream>
            #include <vector>
            #include <string>

            struct Product {
                std::string name;
                double price;
                int quantity;
            };

            int main() {
                std::vector<Product> products = {
                    {"Laptop", 1500.00, 5},
                    {"Mouse", 150.50, 10},
                    {"Tastatura", 500.75, 15},
                    {"Monitor", 1200.00, 8},
                    {"Casti", 200.00, 12},
                    {"Webcam", 99.99, 20},
                    {"HDD", 250.25, 25},
                    {"SSD", 920.00, 6},
                    {"Telefon", 1900.00, 3},
                    {"Router", 199.99, 7}
                };

                int choice;
                do {
                    std::cout << "1. List\n2. Add\n3. Edit\n4. Delete\n5. Buy\n6. Exit\nChoice: ";
                    std::cin >> choice;

                    if (choice == 1) {
                        for (size_t i = 0; i < products.size(); ++i)
                            std::cout << i+1 << ". " << products[i].name << " | " << products[i].price << " | " << products[i].quantity << "\n";
                    }
                    else if (choice == 2) {
                        Product p;
                        std::cout << "Name: "; std::cin >> p.name;
                        std::cout << "Price: "; std::cin >> p.price;
                        std::cout << "Quantity: "; std::cin >> p.quantity;
                        products.push_back(p);
                    }
                    else if (choice == 3) {
                        int idx; std::cout << "Product number: "; std::cin >> idx;
                        if (idx > 0 && idx <= products.size()) {
                            std::cout << "New price: "; std::cin >> products[idx-1].price;
                            std::cout << "New quantity: "; std::cin >> products[idx-1].quantity;
                        }
                    }
                    else if (choice == 4) {
                        int idx; std::cout << "Product number: "; std::cin >> idx;
                        if (idx > 0 && idx <= products.size())
                            products.erase(products.begin() + (idx-1));
                    }
                    else if (choice == 5) {
                        int idx, qty;
                        std::cout << "Product number: "; std::cin >> idx;
                        std::cout << "Quantity: "; std::cin >> qty;
                        if (idx > 0 && idx <= products.size() && products[idx-1].quantity >= qty) {
                            products[idx-1].quantity -= qty;
                            std::cout << "Total: " << products[idx-1].price * qty << "\n";
                        } else {
                            std::cout << "Not enough stock or invalid product.\n";
                        }
                    }
                } while (choice != 6);

                return 0;
            }