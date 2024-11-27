#include <ncurses.h>

int main() {
    initscr();            // Inicia a tela
    cbreak();             // Desabilita o buffer de linha
    noecho();             // Não exibe o que o usuário digita
    keypad(stdscr, TRUE); // Habilita teclas como F1, setas, etc.

    // Cria uma janela com uma mensagem
    printw("Bem-vindo ao TUI em C com ncurses!\n");
    printw("Pressione 'q' para sair.");
    refresh();

    int ch;
    while ((ch = getch()) != 'q') {
        clear();
        printw("Voce pressionou: %c\n", ch);
        printw("Pressione 'q' para sair.");
        refresh();
    }

    endwin();
    return 0;
}
