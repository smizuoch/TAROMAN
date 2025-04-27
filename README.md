# TAROMAN — Okamoto-Style Life & Art Helper

**TAROMAN** is a tiny *header-only* C99 / C++98 library that drops a pocket-sized  
岡本太郎 into your program: shout “芸術は爆発だ!”, sling ~70 authentic quotes,  
and let your code _seriously, desperately play_. No build system gymnastics,  
no external deps—just `#include "taroman.h"` and compile.  
The code is released under the MIT License; see the bundled `LICENSE` file

---

## Features
* **Single header, zero dependency.** Copy `taroman.h` or add the repo as a Git submodule.
* **Pure C API** yet perfectly usable from C++.  
* **~90 curated Okamoto Tarō quotes.**  
* **Battle helpers** (`taroman_combat_kaiju()`) inspired by NHK’s 2022 mini-series  
  “TAROMAN ― 岡本太郎式特撮活劇.”
* MIT-licensed, suitable for closed- or open-source projects.

---

## Installation
```bash
# option 1 – copy the header
cp taroman.h  /path/to/your/include/

# option 2 – git submodule
git submodule add https://github.com/smizuoch/taroman.git external/taroman
```
Either way, include it:

```c
#include "taroman.h"
```

---

## Quick Start
```c
#include "taroman.h"

int main(void) {
    taroman_init();                       /* srand(time(NULL)) inside */
    taroman_explode_art();                /* -> prints 「芸術は爆発だ！」 */
    taroman_combat_kaiju("疾走する眼");
    puts(taroman_okamoto_quote());        /* newline auto-added by puts */
}
```
Compile:

```bash
cc demo.c
# or
g++ demo.cpp
```

---

## API Reference

| Function | Description |
|----------|-------------|
| `void taroman_init(void);` | Seeds the RNG via `time(NULL)`. <!--  ([How to use function srand() with time.h? [duplicate] - Stack Overflow](https://stackoverflow.com/questions/16569239/how-to-use-function-srand-with-time-h?utm_source=chatgpt.com)) --> |
| `const char* taroman_okamoto_quote(void);` | Returns a random quote (UTF-8). |
| `void taroman_explode_art(void);` | Prints **芸術は爆発だ！** |
| `void taroman_combat_kaiju(const char* name);` | Logs a fight with the given “奇獣”. |
| `void taroman_shout_random_quote(void);` | Convenience: prints one quote directly. |

All functions are declared **`static inline`** so there is never a link-time symbol clash.

---

## Contributing

1. Fork & create a feature branch.  
2. Follow the existing code style (2-space indent, ANSI C).  
3. Add tests for new behaviour.  
4. Open a PR—discussion and _interesting collisions_ are welcome, echoing Tarō’s idea that **ぶつかりあうことが面白い**.

---

## License

This project is licensed under the **MIT License**—see [`LICENSE`](LICENSE) for details.

---

## Acknowledgements
* Okamoto Tarō’s published essays and interviews for the original quotations.
* NHK E-Tele “TAROMAN ― 岡本太郎式特撮活劇” for eternal inspiration.
