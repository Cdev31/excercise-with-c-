#include <iostream>

using namespace std;

int main()
{

    int totalProducts;
    int electronicPrice, homeArcticlesPrice, clothesPrice;

    cout << "Ingrese el total de productos de su inventario:\n";
    cin >> totalProducts;

    cout <<  "Ingrese el costo de los productos electronicos:\n";
    cin >> electronicPrice;

    cout <<  "Ingrese el costo de los productos de ropa:\n";
    cin >> clothesPrice;

    cout <<  "Ingrese el costo de los productos articulos del hogar:\n";
    cin >> homeArcticlesPrice;


    int totalElectronicProducts = ( totalProducts / 100 ) * 40;

    int totalClothesProducts = ( totalProducts / 100 ) * 30;

    int totalHomeArticlesProducts = ( totalProducts / 100 ) * 30;


    int totalElectronicPrice = ( electronicPrice * totalElectronicProducts ) - ( electronicPrice * totalElectronicProducts / 100 * 15);

    int totalClothesPrice = ( totalClothesProducts * clothesPrice ) - ( totalClothesProducts * clothesPrice / 100 * 10);

    int totalHomeArticlesPrice = totalHomeArticlesProducts * electronicPrice;

    int totalInventory = ( totalClothesPrice + totalElectronicPrice + totalHomeArticlesPrice);

    cout << "El valor total de su inventario es:" << totalInventory << endl;
    
    return 0;
}
