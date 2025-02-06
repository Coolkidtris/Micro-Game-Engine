

/* Entry Point */
int main(int argc, char *argv[]) {
    setupSDL();
    mainLoop();
    cleanupSDL();

    return 0;
}