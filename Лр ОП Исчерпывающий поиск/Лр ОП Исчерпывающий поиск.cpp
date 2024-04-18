#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    const int MAX_N = 100;
    const int MAX_K = 100;
    //N - предметы, K - корзины
    int N, K;
    int Vi[MAX_N], Mi[MAX_N]; //массивы объема и веса
    int V_k[MAX_K]; //вместимость корзины
    int totalWeight = 0;
    std::cout << "Введите количество предметов N: ";
    std::cin >> N;

    std::cout << "Введите количество корзин K: ";
    std::cin >> K;

    std::cout << "Введите объемы и веса каждого предмета:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "Предмет " << i + 1 << std::endl;
        std::cout << "Объем: ";
        std::cin >> Vi[i];
        std::cout << "Вес: ";
        std::cin >> Mi[i];
    }

    std::cout << "Введите вместимости каждой корзины:" << std::endl;
    for (int i = 0; i < K; ++i) {
        std::cout << "Корзина " << i + 1 << ": ";
        std::cin >> V_k[i];
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < K; ++j) {
            if (V_k[j] >= Vi[i]) {
                totalWeight += Mi[i];
                V_k[j] -= Vi[i];
                std::cout << "Предмет " << i + 1 << " помещен в корзину " << j + 1 << std::endl;
                break;
            }
        }
    }

    std::cout << "Общий вес предметов в корзинах: " << totalWeight << std::endl;

    return 0;
}