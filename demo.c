#include "taroman.h"

int main(void) {
    taroman_init();                       /* srand(time(NULL)) inside */
    taroman_explode_art();                /* -> prints 「芸術は爆発だ！」 */
    taroman_combat_kaiju("疾走する眼");
    puts(taroman_okamoto_quote());        /* newline auto-added by puts */
}