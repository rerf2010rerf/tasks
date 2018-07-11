#include <cstdio>
#include <memory>


int func() {
    std::shared_ptr<FILE> filePtr(fopen("fileName", "w"), fclose);
    //тут код, способный выбросить исключение
    //файл в любом случае будет закрыт при выходе из функции
}
