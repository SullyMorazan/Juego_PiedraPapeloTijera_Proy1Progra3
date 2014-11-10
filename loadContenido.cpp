//Sube todas las imagenes que vamos a necesitar

#include "Juego.h"

bool Juego::loadContenido()
{
    //Init textures
    int w=0,h=0;
    menu = IMG_LoadTexture(renderer,"menu.png");
    SDL_QueryTexture(menu,NULL,NULL,&rect_menu.w,&rect_menu.h);
    rect_menu.x=0;
    rect_menu.y=0;
    rect_menu.w=662;
    rect_menu.h=662;

    seleccionar= IMG_LoadTexture(renderer, "seleccionar.png");
    SDL_QueryTexture(seleccionar, NULL, NULL, &w, &h);
    rect_seleccionar.x = 120;
    rect_seleccionar.y = 320;
    rect_seleccionar.w = w;
    rect_seleccionar.h = h;

    juego = IMG_LoadTexture(renderer,"juego.png");
    SDL_QueryTexture(juego,NULL,NULL,&rect_juego.w,&rect_juego.h);
    rect_juego.x=0;
    rect_juego.y=0;
    rect_juego.w=662;
    rect_juego.h=662;

    ganaste = IMG_LoadTexture(renderer,"ganaste.png");
    SDL_QueryTexture(ganaste,NULL,NULL,&rect_ganaste.w,&rect_ganaste.h);
    rect_ganaste.x=0;
    rect_ganaste.y=0;
    rect_ganaste.w=662;
    rect_ganaste.h=662;

    perdiste = IMG_LoadTexture(renderer,"perdiste.png");
    SDL_QueryTexture(perdiste,NULL,NULL,&rect_perdiste.w,&rect_perdiste.h);
    rect_perdiste.x=0;
    rect_perdiste.y=0;
    rect_perdiste.w=662;
    rect_perdiste.h=662;

    juegorapido = IMG_LoadTexture(renderer,"juegorapido.png");
    SDL_QueryTexture(juegorapido,NULL,NULL,&rect_juegorapido.w,&rect_juegorapido.h);
    rect_juegorapido.x=0;
    rect_juegorapido.y=0;
    rect_juegorapido.w=662;
    rect_juegorapido.h=662;

    ganador_rapido = IMG_LoadTexture(renderer,"ganador_rapido.png");
    SDL_QueryTexture(ganador_rapido,NULL,NULL,&rect_ganadorrapido.w,&rect_ganadorrapido.h);
    rect_ganadorrapido.x=0;
    rect_ganadorrapido.y=0;
    rect_ganadorrapido.w=662;
    rect_ganadorrapido.h=662;

    perdedor_rapido = IMG_LoadTexture(renderer,"perdedor_rapido.png");
    SDL_QueryTexture(perdedor_rapido,NULL,NULL,&rect_perdedorrapido.w,&rect_perdedorrapido.h);
    rect_perdedorrapido.x=0;
    rect_perdedorrapido.y=0;
    rect_perdedorrapido.w=662;
    rect_perdedorrapido.h=662;

    empate_rapido = IMG_LoadTexture(renderer,"empate_rapido.png");
    SDL_QueryTexture(empate_rapido,NULL,NULL,&rect_empaterapido.w,&rect_empaterapido.h);
    rect_empaterapido.x=0;
    rect_empaterapido.y=0;
    rect_empaterapido.w=662;
    rect_empaterapido.h=662;

    piedra2i= IMG_LoadTexture(renderer, "piedra2i.png");
    SDL_QueryTexture(piedra2i, NULL, NULL, &w, &h);
    rect_piedra2i.x = 40;
    rect_piedra2i.y = 210;
    rect_piedra2i.w = w;
    rect_piedra2i.h = h;

    piedra2d= IMG_LoadTexture(renderer, "piedra2d.png");
    SDL_QueryTexture(piedra2d, NULL, NULL, &w, &h);
    rect_piedra2d.x = 337;
    rect_piedra2d.y = 210;
    rect_piedra2d.w = w;
    rect_piedra2d.h = h;

    menu2= IMG_LoadTexture(renderer, "menu2.png");
    SDL_QueryTexture(menu2, NULL, NULL, &w, &h);
    rect_menu2.x = 240;
    rect_menu2.y = 396;
    rect_menu2.w = w;
    rect_menu2.h = h;

    seleccionar2= IMG_LoadTexture(renderer, "seleccionar2.png");
    SDL_QueryTexture(seleccionar2, NULL, NULL, &w, &h);
    rect_seleccionar2.x = 255;
    rect_seleccionar2.y = 451;
    rect_seleccionar2.w = w;
    rect_seleccionar2.h = h;

    piedrai= IMG_LoadTexture(renderer, "piedrai.png");
    SDL_QueryTexture(piedrai, NULL, NULL, &w, &h);
    rect_piedrai.x = 1;
    rect_piedrai.y = 200;
    rect_piedrai.w = w;
    rect_piedrai.h = h;

    piedrad= IMG_LoadTexture(renderer, "piedrad.png");
    SDL_QueryTexture(piedrad, NULL, NULL, &w, &h);
    rect_piedrad.x = 290;
    rect_piedrad.y = 195;
    rect_piedrad.w = w;
    rect_piedrad.h = h;

    cuenregresiva1= IMG_LoadTexture(renderer, "cuenregresiva1.png");
    SDL_QueryTexture(cuenregresiva1, NULL, NULL, &w, &h);
    rect_cuenregresiva1.x = 225;
    rect_cuenregresiva1.y = 240;
    rect_cuenregresiva1.w = w;
    rect_cuenregresiva1.h = h;

    cuenregresiva2= IMG_LoadTexture(renderer, "cuenregresiva2.png");
    SDL_QueryTexture(cuenregresiva2, NULL, NULL, &w, &h);
    rect_cuenregresiva2.x = 225;
    rect_cuenregresiva2.y = 240;
    rect_cuenregresiva2.w = w;
    rect_cuenregresiva2.h = h;

    cuenregresiva3= IMG_LoadTexture(renderer, "cuenregresiva3.png");
    SDL_QueryTexture(cuenregresiva3, NULL, NULL, &w, &h);
    rect_cuenregresiva3.x = 225;
    rect_cuenregresiva3.y = 240;
    rect_cuenregresiva3.w = w;
    rect_cuenregresiva3.h = h;

    papeli= IMG_LoadTexture(renderer, "papeli.png");
    SDL_QueryTexture(papeli, NULL, NULL, &w, &h);
    rect_papeli.x = 5;
    rect_papeli.y = 195;
    rect_papeli.w = w;
    rect_papeli.h = h;

    papeld= IMG_LoadTexture(renderer, "papeld.png");
    SDL_QueryTexture(papeld, NULL, NULL, &w, &h);
    rect_papeld.x = 285;
    rect_papeld.y = 195;
    rect_papeld.w = w;
    rect_papeld.h = h;

    tijerai= IMG_LoadTexture(renderer, "tijerai.png");
    SDL_QueryTexture(tijerai, NULL, NULL, &w, &h);
    rect_tijerai.x = 15;
    rect_tijerai.y = 200;
    rect_tijerai.w = w;
    rect_tijerai.h = h;

    tijerad= IMG_LoadTexture(renderer, "tijerad.png");
    SDL_QueryTexture(papeld, NULL, NULL, &w, &h);
    rect_tijerad.x = 280;
    rect_tijerad.y = 195;
    rect_tijerad.w = w;
    rect_tijerad.h = h;

    siluetasi= IMG_LoadTexture(renderer, "siluetasi.png");
    SDL_QueryTexture(siluetasi, NULL, NULL, &w, &h);
    rect_siluetasi.x = 80;
    rect_siluetasi.y = 550;
    rect_siluetasi.w = w;
    rect_siluetasi.h = h;

    siluetasd= IMG_LoadTexture(renderer, "siluetasd.png");
    SDL_QueryTexture(siluetasd, NULL, NULL, &w, &h);
    rect_siluetasd.x = 345;
    rect_siluetasd.y = 550;
    rect_siluetasd.w = w;
    rect_siluetasd.h = h;

    ganandoi= IMG_LoadTexture(renderer, "ganandoi.png");
    SDL_QueryTexture(ganandoi, NULL, NULL, &w, &h);
    rect_ganandoi.x = 239;
    rect_ganandoi.y = 563;
    rect_ganandoi.w = w;
    rect_ganandoi.h = h;

    ganandod= IMG_LoadTexture(renderer, "ganandod.png");
    SDL_QueryTexture(ganandod, NULL, NULL, &w, &h);
    rect_ganandod.x = 364;
    rect_ganandod.y = 563;
    rect_ganandod.w = w;
    rect_ganandod.h = h;

    ganadas2i= IMG_LoadTexture(renderer, "ganadas2i.png");
    SDL_QueryTexture(ganadas2i, NULL, NULL, &w, &h);
    rect_ganadas2i.x = 150;
    rect_ganadas2i.y = 550;
    rect_ganadas2i.w = w;
    rect_ganadas2i.h = h;

    ganadas2d= IMG_LoadTexture(renderer, "ganadas2d.png");
    SDL_QueryTexture(ganadas2d, NULL, NULL, &w, &h);
    rect_ganadas2d.x = 340;
    rect_ganadas2d.y = 550;
    rect_ganadas2d.w = w;
    rect_ganadas2d.h = h;

    ganadas3i= IMG_LoadTexture(renderer, "ganadas3i.png");
    SDL_QueryTexture(ganadas3i, NULL, NULL, &w, &h);
    rect_ganadas3i.x = 81;
    rect_ganadas3i.y = 550;
    rect_ganadas3i.w = w;
    rect_ganadas3i.h = h;

    ganadas3d= IMG_LoadTexture(renderer, "ganadas3d.png");
    SDL_QueryTexture(ganadas3d, NULL, NULL, &w, &h);
    rect_ganadas3d.x = 340;
    rect_ganadas3d.y = 550;
    rect_ganadas3d.w = w;
    rect_ganadas3d.h = h;

    fallaste= IMG_LoadTexture(renderer, "fallaste.png");
    SDL_QueryTexture(fallaste, NULL, NULL, &w, &h);
    rect_fallaste.x = 130;
    rect_fallaste.y = 248;
    rect_fallaste.w = w;
    rect_fallaste.h = h;

    acertaste= IMG_LoadTexture(renderer, "acertaste.png");
    SDL_QueryTexture(acertaste, NULL, NULL, &w, &h);
    rect_acertaste.x = 130;
    rect_acertaste.y = 248;
    rect_acertaste.w = w;
    rect_acertaste.h = h;

    empataste= IMG_LoadTexture(renderer, "empataste.png");
    SDL_QueryTexture(empataste, NULL, NULL, &w, &h);
    rect_empataste.x = 130;
    rect_empataste.y = 245;
    rect_empataste.w = w;
    rect_empataste.h = h;

    continuar= IMG_LoadTexture(renderer, "continuar.png");
    SDL_QueryTexture(continuar, NULL, NULL, &w, &h);
    rect_continuar.x = 177;
    rect_continuar.y = 172;
    rect_continuar.w = w;
    rect_continuar.h = h;

    instrucciones = IMG_LoadTexture(renderer,"instrucciones.png");
    SDL_QueryTexture(instrucciones,NULL,NULL,&rect_instrucciones.w,&rect_instrucciones.h);
    rect_instrucciones.x=0;
    rect_instrucciones.y=0;
    rect_instrucciones.w=662;
    rect_instrucciones.h=662;
}
