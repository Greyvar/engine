#include "GameState.hpp"
#include "Startup.hpp"
#include "cvars.hpp"
#include "input/1_bindings/common.hpp"
#include "NetworkManager.hpp"
#include "gui/Gui.hpp"
#include "Renderer.hpp"

#include <SDL2/SDL.h>
#include <ctime>

void initLibraries() {                                                          
    srand(time(nullptr));                                                       
                                                                                
    SDL_Init(SDL_INIT_EVERYTHING);                                              
                                                                                
    initFreetype();                                                             
                                                                                
    initSound();                                                                
                                                                                
    defaultInputBindings();                                                     
}                                                                               
                                                                                
void processInitialCvars() {                                                    
    if (cvarIsset("server")) {                                                  
        NetworkManager::get().connectToServer(cvarGet("server"));               
    }                                                                           
                                                                                
    if (cvarIsset("startupScreen")) {                                           
        Gui::get().setScreen(cvarGet("startupScreen"));                         
    }                                                                           
}  

void boleasQuitEngine() {
	GameState::get().clear();
}

void quitLibraries() {
	quitSound();
}

void boleasStartEngine() {
    cvarInit();                                                                    
    loadHomedirConfigurationFiles();                                               
                                                                                   
//    parseArguments(argc, argv);
                                                                                   
    initLibraries();                                                               
                                                                                   
    GameState::get().createWorld();                                                
                                                                                   
    processInitialCvars();                                                         
                                                                                   
    Renderer::get().createWindow();                                                
                                                                                   
    mainLoop();                                                                    
                                                                                   
    Renderer::get().destroyWindow();                                               
                                                                                   
    boleasQuitEngine();
    quitLibraries();                                                               
    SDL_Quit();
}


void boleasSayHello() {
	cout << "Hello from Boleas " << PROJECT_VERISON << "!" << endl;
}
