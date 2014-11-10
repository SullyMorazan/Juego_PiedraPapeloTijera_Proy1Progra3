#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED

//Librerias que se necesitan

#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <SDL_mixer.h>

#define MENU  3
#define INSTRUCCIONES 4
#define JUEGO 5
#define JUEGORAPIDO 6
#define SALIR 7


using namespace std;

class Juego
{
public:
    //Miembros de datos
    bool ejecutando;
    int opcJugador;
    int opcPc;
    int aciertosJug;
    int aciertosPc;

    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Event Event;

    //Variables donde estan las imagenes
    SDL_Texture *menu,*seleccionar,*seleccionar2, *juego, *piedra2i, *piedra2d, *piedrai, *piedrad, *papeli,*papeld,*tijerad,
    *tijerai, *menu2,*cuenregresiva1,*cuenregresiva2,*cuenregresiva3, *siluetasi, *siluetasd,*ganandoi, *ganandod, *ganadas2i,
     *ganadas2d, *ganadas3i,*ganadas3d, *fallaste, *acertaste, *empataste, *continuar, *ganaste, *perdiste, *juegorapido, *ganador_rapido,
     *perdedor_rapido, *empate_rapido, *instrucciones;

    //Direcciones donde van a estar las imagenes
    SDL_Rect rect_menu,rect_seleccionar, rect_seleccionar2, rect_juego,rect_piedra2i,
    rect_piedra2d, rect_piedrai, rect_piedrad, rect_papeli, rect_papeld, rect_tijerai,rect_tijerad, rect_menu2, rect_cuenregresiva1,
    rect_cuenregresiva2, rect_cuenregresiva3, rect_siluetasi, rect_siluetasd, rect_ganandoi, rect_ganandod, rect_ganadas2i,
    rect_ganadas2d,rect_ganadas3i,rect_ganadas3d, rect_fallaste, rect_acertaste, rect_empataste, rect_continuar, rect_ganaste,
    rect_perdiste, rect_juegorapido, rect_ganadorrapido, rect_perdedorrapido, rect_empaterapido, rect_instrucciones;

    //Constructor
    Juego();

    //Funciones miembro
    int ejecutar();
    bool init_SDL();
    bool loadContenido();
    void evento(SDL_Event* Event);
    void evento2(SDL_Event* Event2);
    void limpiar();
    void inicio();
    void jugar();
    char state;
    void animInicio();
    void imprimirJugada(int opc);
    int jugadaPC();
    void imprimirJugadaPC(int opcJugador);
    int ganadorJugada();
    void jugarRapido();
    void animIniciorapida();
    void imprimirJugadaRapida(int opc);
    int  jugadaPCrapida();
    void imprimirJugadaPCrapida(int opcJugador);
    int  ganadorJugadarapida();
    void Instrucciones();
    void evento3(SDL_Event* Event3);
    void evento4(SDL_Event* Event4);

    void setOpcJugador(int opcJ)
    {
        opcJugador = opcJ;
    }

    int getOpcJugador()
    {
        return opcJugador;
    }

     void setOpcPc(int opcP)
    {
        opcPc = opcP;
    }

    int getOpcPc()
    {
        return opcPc;
    }

    void opciones(int opcJu, int opcPc)
    {
       setOpcJugador(opcJu);
       setOpcPc(opcPc);
    }

    int getAciertosJug()
    {
       return aciertosJug;
    }
    void setAciertosJug(int aciJug)
    {
        aciertosJug = aciJug;
    }
    int getAciertosPc()
    {
        return aciertosPc;
    }
    void setAciertosPc(int aciPc)
    {
        aciertosPc = aciPc;
    }

    void aciertos(int aciJug, int aciPc)
    {
        setAciertosJug(aciJug);
        setAciertosPc(aciPc);
    }

};

#endif // JUEGO_H_INCLUDED
