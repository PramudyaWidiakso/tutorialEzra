#include "queue.h"

void createPlaylist(playlistLagu &Q){
    Head(Q) = nil;
    Tail(Q) = nil;

}
void createElement(infotype laguBaru, adr &pLagu){
    pLagu = new element;
    info(pLagu).Artis = laguBaru.Artis;
    info(pLagu).Judul = laguBaru.Judul;
    next(pLagu) = nil;

}
void enqueue(playlistLagu &Q,adr pLagu){
    if (Head(Q) == nil && Tail(Q) == nil){
        Head(Q) = pLagu;
        Tail(Q) = pLagu;
    }else{
        next(Tail(Q)) = pLagu;
        Tail(Q) = pLagu;

    }


}
void dequeue(playlistLagu &Q ,adr &pLagu){
    if(Head(Q) == nil && Tail(Q) == nil){
        cout<<"Playlist lagu kosong"<<endl;
    }else if (Head(Q) == Tail(Q)){
        pLagu = Head(Q);
        Head(Q) = nil;
        Tail(Q) = nil;
    }else{
        pLagu = Head(Q);
        Head(Q) = next(pLagu);
        next(pLagu) = nil;
    }
}
void showSemuaLagu(playlistLagu Q){
    if(Head(Q) == nil && Tail(Q) == nil){
        cout<<"Playlist lagu kosong"<<endl;
    }else{
        adr pLagu;
        pLagu = Head(Q);
        while (pLagu != nil){
            cout<<"Artis: "<<info(pLagu).Artis<<endl;
            cout<<"Judul: "<<info(pLagu).Judul<<endl;
            pLagu = next(pLagu);
        }
    }

}
